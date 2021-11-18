#include "GestorRegistroRetiro.h"

using namespace PDM_BaseDeDatosController;
using namespace System::IO;
using namespace System;

GestorRegistroRetiro::GestorRegistroRetiro() {
	this->objConexion = gcnew SqlConnection();
	this->list_registro = gcnew List<RegistroRetiro^>;
}



void GestorRegistroRetiro::AbrirConexion() {
	/*Datos para la conexión a la BD: servidor, nombreBD, usuarioBD, passBD*/
	String^ pass = "cerveza123";
	this->objConexion->ConnectionString = "Server=pdm-grupo1.clpiohd4aqw1.us-east-1.rds.amazonaws.com;DataBase=PDM_BD; User ID=admin;Password=cerveza123;";
	this->objConexion->Open(); /*Ya establecí contacto con la BD*/
}

void GestorRegistroRetiro::CerrarConexion() {
	this->objConexion->Close();
}

int GestorRegistroRetiro::DarCodigoRegistro()
{
	this->list_registro->Clear();
	this->AbrirConexion();
	SqlCommand^ query = gcnew SqlCommand();
	query->Connection = this->objConexion;
	query->CommandText = "Select * From RegistroRetiro;";
	SqlDataReader^ data = query->ExecuteReader();
	while (data->Read())
	{
		int codigo = safe_cast<int>(data[0]);
		String^ fecha = safe_cast<String^>(data[1]);
		int codigoEncargado = safe_cast<int>(data[2]);
		float invMalta = safe_cast<double>(data[3]);
		float invLupulo = safe_cast<double>(data[4]);
		float invLevadura = safe_cast<double>(data[5]);
		int invChapas = safe_cast<int>(data[6]);
		int invBotellasVacias = safe_cast<int>(data[7]);
		Encargado^ vacio;
		RegistroRetiro^ objRegistroRetiro = gcnew RegistroRetiro(codigo, fecha, invMalta, invLupulo, invLevadura, invChapas, invBotellasVacias, vacio);
		list_registro->Add(objRegistroRetiro);
	}
	data->Close();
	this->CerrarConexion();

	int codigoNuevo = 0;

	if (this->list_registro->Count > 0) {
		int j = 0;
		while (j < this->list_registro->Count) {

			if (this->list_registro[j]->codigo > codigoNuevo) {
				codigoNuevo = this->list_registro[j]->codigo;
			}
			j++;
		}
		codigoNuevo = codigoNuevo + 1;
		return codigoNuevo;

	}else {
		return 1;
	}
}

void GestorRegistroRetiro::RealizarRetiro(int codigo, String^ fecha, int codigoEncargado, float cantMalta, float cantLupulo, float cantLevadura, int cantChapas, int cantBotellasVacias)
{
	float invMalta, invLupulo, invLevadura;
	int invChapas, invBotellasVacias;
	try
	{
		this->AbrirConexion();
		SqlCommand^ query = gcnew SqlCommand();
		query->Connection = this->objConexion;
		query->CommandText = "Insert into RegistroRetiro(Codigo, Fecha, codigoEncargado, cantMalta, cantLupulo, cantLevadura, cantChapas, cantBotellasVacias) values ('" +
			codigo + "','" + fecha + "','" + codigoEncargado + "','" + cantMalta + "','" + cantLupulo + "','" + cantLevadura + "','" + cantChapas + "','" + cantBotellasVacias + "'); ";
		query->ExecuteNonQuery();

		query->CommandText = "Select * from Inventario;";
		SqlDataReader^ data = query->ExecuteReader();
		while (data->Read())
		{
			invMalta = safe_cast<double>(data[0]);
			invLupulo = safe_cast<double>(data[1]);
			invLevadura = safe_cast<double>(data[2]);
			invChapas = safe_cast<int>(data[3]);
			invBotellasVacias = safe_cast<int>(data[4]);
		}
		data->Close();
		float malta = invMalta - cantMalta;
		float lupulo = invLupulo - cantLupulo;
		float levadura = invLevadura - cantLevadura;
		int chapas = invChapas - cantChapas;
		int botellas = invBotellasVacias - cantBotellasVacias;


		query->CommandText = "Update INVENTARIO set cantMalta='" + malta + "', cantLupulo='" + lupulo + "', cantLevadura='" + levadura + "', cantChapas='" + chapas + "', cantBotellasVacias='" + botellas + "'where cantMalta=" + invMalta + ";";
		query->ExecuteNonQuery();
		this->CerrarConexion();
	}
	catch (SqlException^ e)
	{
		this->CerrarConexion();
	}
}

List<RegistroRetiro^>^ GestorRegistroRetiro::devuelveTodosRetiros() {
	List<RegistroRetiro^>^ listaRetiros = gcnew List<RegistroRetiro^>();
	AbrirConexion();
	SqlDataReader^ objData;
	SqlCommand^ objQuery = gcnew SqlCommand();
	objQuery->Connection = this->objConexion;
	objQuery->CommandText = "select * from RegistroRetiro a, Encargado b where b.codigo=a.codigoEncargado;";
	objData = objQuery->ExecuteReader();
	while (objData->Read()) {
		int codigo = safe_cast<int>(objData[0]);
		String^ fecha = safe_cast<String^>(objData[1]);
		int codigoEncargado = safe_cast<int>(objData[2]);
		float invMalta = safe_cast<double>(objData[3]);
		float invLupulo = safe_cast<double>(objData[4]);
		float invLevadura = safe_cast<double>(objData[5]);
		int invChapas = safe_cast<int>(objData[6]);
		int invBotellasVacias = safe_cast<int>(objData[7]);

		String^ nombres = safe_cast<String^>(objData[9]);
		String^ apellidoPaterno = safe_cast<String^>(objData[10]);
		String^ apellidoMaterno = safe_cast<String^>(objData[11]);
		String^ dni = safe_cast<String^>(objData[12]);
		Encargado^ objEncargado = gcnew Encargado(codigoEncargado, nombres, apellidoPaterno, apellidoMaterno, dni);
		RegistroRetiro^ objRegistroRetiro = gcnew RegistroRetiro(codigo, fecha, invMalta, invLupulo, invLevadura, invChapas, invBotellasVacias, objEncargado);
		listaRetiros->Add(objRegistroRetiro);
	}
	objData->Close();
	CerrarConexion();
	return listaRetiros;
}

RegistroRetiro^ GestorRegistroRetiro::devuelveRetiroxCodigo(int codigo) {
	RegistroRetiro^ objRegistroRetiro;
	AbrirConexion();
	SqlDataReader^ objData;
	SqlCommand^ objQuery = gcnew SqlCommand();
	objQuery->Connection = this->objConexion;

	objQuery->CommandText = "select * from RegistroRetiro a, Encargado b where a.Codigo = '" + codigo + "' and b.codigo=a.codigoEncargado;";
	objData = objQuery->ExecuteReader();
	while (objData->Read()) {
		int codigo = safe_cast<int>(objData[0]);
		String^ fecha = safe_cast<String^>(objData[1]);
		int codigoEncargado = safe_cast<int>(objData[2]);
		float invMalta = safe_cast<double>(objData[3]);
		float invLupulo = safe_cast<double>(objData[4]);
		float invLevadura = safe_cast<double>(objData[5]);
		int invChapas = safe_cast<int>(objData[6]);
		int invBotellasVacias = safe_cast<int>(objData[7]);

		String^ nombres = safe_cast<String^>(objData[9]);
		String^ apellidoPaterno = safe_cast<String^>(objData[10]);
		String^ apellidoMaterno = safe_cast<String^>(objData[11]);
		String^ dni = safe_cast<String^>(objData[12]);
		Encargado^ objEncargado = gcnew Encargado(codigoEncargado, nombres, apellidoPaterno, apellidoMaterno, dni);
		objRegistroRetiro = gcnew RegistroRetiro(codigo, fecha, invMalta, invLupulo, invLevadura, invChapas, invBotellasVacias, objEncargado);
	}
	objData->Close();
	CerrarConexion();
	return objRegistroRetiro;
}

void GestorRegistroRetiro::eliminarRetiro(int codigoRetiro) {
	float invMalta, invLupulo, invLevadura;
	int invChapas, invBotellasVacias;

	RegistroRetiro^ objRegistroRetiro = this->devuelveRetiroxCodigo(codigoRetiro);

	AbrirConexion();
	SqlCommand^ objQuery = gcnew SqlCommand();
	objQuery->Connection = this->objConexion;

	objQuery->CommandText = "Select * from Inventario;";
	SqlDataReader^ data = objQuery->ExecuteReader();
	while (data->Read())
	{
		invMalta = safe_cast<double>(data[0]);
		invLupulo = safe_cast<double>(data[1]);
		invLevadura = safe_cast<double>(data[2]);
		invChapas = safe_cast<int>(data[3]);
		invBotellasVacias = safe_cast<int>(data[4]);
	}
	data->Close();
	float malta = invMalta + objRegistroRetiro->cantMalta;
	float lupulo = invLupulo + objRegistroRetiro->cantLupulo;
	float levadura = invLevadura + objRegistroRetiro->cantLevadura;
	int chapas = invChapas + objRegistroRetiro->cantChapas;
	int botellas = invBotellasVacias + objRegistroRetiro->cantBotellasVacias;


	objQuery->CommandText = "Update INVENTARIO set cantMalta='" + malta + "', cantLupulo='" + lupulo + "', cantLevadura='" + levadura + "', cantChapas='" + chapas + "', cantBotellasVacias='" + botellas + "'where cantMalta=" + invMalta + ";";
	objQuery->ExecuteNonQuery();

	objQuery->CommandText = "delete from RegistroRetiro where Codigo='" + codigoRetiro + "';";
	objQuery->ExecuteNonQuery();

	this->CerrarConexion();

	CerrarConexion();
}

void GestorRegistroRetiro::modificarRetiro(int codigoRetiro, RegistroRetiro^ objRegistroRetiro, int codigoEncargado) {
	//objRegistroCompra: valores luego de modificar
	//objRegistroCompraAnt: valores originales de la selección
	float invMalta, invLupulo, invLevadura;
	int invChapas, invBotellasVacias;

	RegistroRetiro^ objRegistroRetiroAnt = devuelveRetiroxCodigo(codigoRetiro);

	AbrirConexion();
	SqlCommand^ objQuery = gcnew SqlCommand();
	objQuery->Connection = this->objConexion;

	objQuery->CommandText = "Select * from Inventario;";
	SqlDataReader^ data = objQuery->ExecuteReader();
	while (data->Read())
	{
		invMalta = safe_cast<double>(data[0]);
		invLupulo = safe_cast<double>(data[1]);
		invLevadura = safe_cast<double>(data[2]);
		invChapas = safe_cast<int>(data[3]);
		invBotellasVacias = safe_cast<int>(data[4]);
	}
	data->Close();
	float malta = invMalta + objRegistroRetiroAnt->cantMalta - objRegistroRetiro->cantMalta;
	float lupulo = invLupulo + objRegistroRetiroAnt->cantLupulo - objRegistroRetiro->cantLupulo;
	float levadura = invLevadura + objRegistroRetiroAnt->cantLevadura - objRegistroRetiro->cantLevadura;
	int chapas = invChapas + objRegistroRetiroAnt->cantChapas - objRegistroRetiro->cantChapas;
	int botellas = invBotellasVacias + objRegistroRetiroAnt->cantBotellasVacias - objRegistroRetiro->cantBotellasVacias;

	objQuery->CommandText = "Update INVENTARIO set cantMalta='" + malta + "', cantLupulo='" + lupulo + "', cantLevadura='" + levadura + "', cantChapas='" + chapas + "', cantBotellasVacias='" + botellas + "'where cantMalta=" + invMalta + ";";
	objQuery->ExecuteNonQuery();

	int codigo = objRegistroRetiro->codigo;
	String^ fecha = objRegistroRetiro->fecha;
	int codigoEncargadoOrig = objRegistroRetiro->objEncargado->codigo;
	float cantMalta = objRegistroRetiro->cantMalta;
	float cantLupulo = objRegistroRetiro->cantLupulo;
	float cantLevadura = objRegistroRetiro->cantLevadura;
	int cantChapas = objRegistroRetiro->cantChapas;
	int cantBotellas = objRegistroRetiro->cantBotellasVacias;

	objQuery->CommandText = "Update RegistroRetiro set  Codigo=" + codigo + ", Fecha='" + fecha + "', codigoEncargado=" + codigoEncargado + ", cantMalta=" + cantMalta + ", cantLupulo=" + cantLupulo + ", cantLevadura=" + cantLevadura + ", cantChapas=" + cantChapas + ", cantBotellasVacias=" + cantBotellas + " where Codigo=" + codigoRetiro + ";";
	objQuery->ExecuteNonQuery();

	CerrarConexion();

}
