#include "GestorRegistroCompra.h"
#include <list>

using namespace PDM_BaseDeDatosController;
using namespace System::IO;
using namespace System;

GestorRegistroCompra::GestorRegistroCompra() {
	this->objConexion = gcnew SqlConnection();
	this->list_registro = gcnew List<RegistroCompra^>;
}

void GestorRegistroCompra::AbrirConexion() {
	/*Datos para la conexión a la BD: servidor, nombreBD, usuarioBD, passBD*/
	String^ pass = "cerveza123";
	this->objConexion->ConnectionString = "Server=pdm-grupo1.clpiohd4aqw1.us-east-1.rds.amazonaws.com;DataBase=PDM_BD; User ID=admin;Password=cerveza123;";
	this->objConexion->Open(); /*Ya establecí contacto con la BD*/
}

void GestorRegistroCompra::CerrarConexion() {
	this->objConexion->Close();
}

Inventario^ GestorRegistroCompra::CargarInventario()
{
	try
	{
		this->AbrirConexion();
		Inventario^ objInventario;
		SqlCommand^ query = gcnew SqlCommand();
		query->Connection = this->objConexion;
		query->CommandText = "Select * from Inventario;";
		SqlDataReader^ data = query->ExecuteReader();
		while (data->Read())
		{
			float invMalta = safe_cast<double>(data[0]);
			float invLupulo = safe_cast<double>(data[1]);
			float invLevadura = safe_cast<double>(data[2]);
			int invChapas = safe_cast<int>(data[3]);
			int invBotellasVacias = safe_cast<int>(data[4]);
			int invBotellasLlenas = safe_cast<int>(data[5]);
			objInventario = gcnew Inventario(invMalta, invLupulo, invLevadura, invChapas, invBotellasVacias, invBotellasLlenas);
		}
		data->Close();
		this->CerrarConexion();
		return objInventario;
	}
	catch (SqlException^ e)
	{
		this->CerrarConexion();
	}
}

int GestorRegistroCompra::DarCodigoRegistro()
{
	this->list_registro->Clear();
	this->AbrirConexion();
	SqlCommand^ query = gcnew SqlCommand();
	query->Connection = this->objConexion;
	query->CommandText = "Select * From RegistroCompra;";
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
		RegistroCompra^ objRegistroCompra = gcnew RegistroCompra(codigo, fecha, invMalta, invLupulo, invLevadura, invChapas, invBotellasVacias, vacio);
		list_registro->Add(objRegistroCompra);
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

void GestorRegistroCompra::AgregarCompra(int codigo, String^ fecha, int codigoEncargado, float cantMalta, float cantLupulo, float cantLevadura, int cantChapas, int cantBotellasVacias)
{
	float invMalta, invLupulo, invLevadura;
	int invChapas, invBotellasVacias;
	try
	{
		this->AbrirConexion();
		SqlCommand^ query = gcnew SqlCommand();
		query->Connection = this->objConexion;
		query->CommandText = "Insert into RegistroCompra(Codigo, Fecha, codigoEncargado, cantMalta, cantLupulo, cantLevadura, cantChapas, cantBotellasVacias) values ('" +
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
		float malta = invMalta + cantMalta;
		float lupulo = invLupulo + cantLupulo;
		float levadura = invLevadura + cantLevadura;
		int chapas = invChapas + cantChapas;
		int botellas = invBotellasVacias + cantBotellasVacias;


		query->CommandText = "Update INVENTARIO set cantMalta='" + malta + "', cantLupulo='" + lupulo + "', cantLevadura='" + levadura + "', cantChapas='" + chapas + "', cantBotellasVacias='" + botellas + "'where cantMalta=" + invMalta + ";";
		query->ExecuteNonQuery();
		this->CerrarConexion();
	}
	catch (SqlException^ e)
	{
		this->CerrarConexion();
	}
}


List<RegistroCompra^>^ GestorRegistroCompra::devuelveTodasCompras() {
	List<RegistroCompra^>^ listaCompras= gcnew List<RegistroCompra^>();
	AbrirConexion();
	SqlDataReader^ objData;
	SqlCommand^ objQuery = gcnew SqlCommand();
	objQuery->Connection = this->objConexion;
	objQuery->CommandText = "select * from RegistroCompra a, Encargado b where b.codigo=a.codigoEncargado;";
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
		RegistroCompra^ objRegistroCompra = gcnew RegistroCompra(codigo, fecha, invMalta, invLupulo, invLevadura, invChapas, invBotellasVacias, objEncargado);
		listaCompras->Add(objRegistroCompra);
	}
	objData->Close();
	CerrarConexion();
	return listaCompras;
}

RegistroCompra^ GestorRegistroCompra::devuelveCompraxCodigo(int codigo) {
	RegistroCompra^ objRegistroCompra;
	AbrirConexion();
	SqlDataReader^ objData;
	SqlCommand^ objQuery = gcnew SqlCommand();
	objQuery->Connection = this->objConexion;

	objQuery->CommandText = "select * from RegistroCompra a, Encargado b where a.Codigo = '" + codigo + "' and b.codigo=a.codigoEncargado;";
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
		objRegistroCompra = gcnew RegistroCompra(codigo, fecha, invMalta, invLupulo, invLevadura, invChapas, invBotellasVacias, objEncargado);
	}
	objData->Close();
	CerrarConexion();
	return objRegistroCompra;
}

void GestorRegistroCompra::eliminarCompra(int codigoCompra) {
	float invMalta, invLupulo, invLevadura;
	int invChapas, invBotellasVacias;

	RegistroCompra^ objRegistroCompra = this->devuelveCompraxCodigo(codigoCompra);

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
	float malta = invMalta - objRegistroCompra->cantMalta;
	float lupulo = invLupulo - objRegistroCompra->cantLupulo;
	float levadura = invLevadura - objRegistroCompra->cantLevadura;
	int chapas = invChapas - objRegistroCompra->cantChapas;
	int botellas = invBotellasVacias - objRegistroCompra->cantBotellasVacias;


	objQuery->CommandText = "Update INVENTARIO set cantMalta='" + malta + "', cantLupulo='" + lupulo + "', cantLevadura='" + levadura + "', cantChapas='" + chapas + "', cantBotellasVacias='" + botellas + "'where cantMalta=" + invMalta + ";";
	objQuery->ExecuteNonQuery();

	objQuery->CommandText = "delete from RegistroCompra where Codigo='" + codigoCompra + "';";
	objQuery->ExecuteNonQuery();

	CerrarConexion();
}

void GestorRegistroCompra::modificarCompra(int codigoCompra, RegistroCompra^ objRegistroCompra, int codigoEncargado) {
	//objRegistroCompra: valores luego de modificar
	//objRegistroCompraAnt: valores originales de la selección
	float invMalta, invLupulo, invLevadura;
	int invChapas, invBotellasVacias;

	RegistroCompra^ objRegistroCompraAnt = devuelveCompraxCodigo(codigoCompra);

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
	float malta = invMalta - objRegistroCompraAnt->cantMalta + objRegistroCompra->cantMalta;
	float lupulo = invLupulo - objRegistroCompraAnt->cantLupulo + objRegistroCompra->cantLupulo;
	float levadura = invLevadura - objRegistroCompraAnt->cantLevadura + objRegistroCompra->cantLevadura;
	int chapas = invChapas - objRegistroCompraAnt->cantChapas + objRegistroCompra->cantChapas;
	int botellas = invBotellasVacias - objRegistroCompraAnt->cantBotellasVacias + objRegistroCompra->cantBotellasVacias;

	objQuery->CommandText = "Update INVENTARIO set cantMalta='" + malta + "', cantLupulo='" + lupulo + "', cantLevadura='" + levadura + "', cantChapas='" + chapas + "', cantBotellasVacias='" + botellas + "'where cantMalta=" + invMalta + ";";
	objQuery->ExecuteNonQuery();

	int codigo = objRegistroCompra->codigo;
	String^ fecha = objRegistroCompra->fecha;
	int codigoEncargadoOrig = objRegistroCompra->objEncargado->codigo;
	float cantMalta = objRegistroCompra->cantMalta;
	float cantLupulo = objRegistroCompra->cantLupulo;
	float cantLevadura = objRegistroCompra->cantLevadura;
	int cantChapas = objRegistroCompra->cantChapas;
	int cantBotellas = objRegistroCompra->cantBotellasVacias;

	objQuery->CommandText = "Update RegistroCompra set  Codigo=" + codigo + ", Fecha='" + fecha + "', codigoEncargado=" + codigoEncargado + ", cantMalta=" + cantMalta + ", cantLupulo=" + cantLupulo + ", cantLevadura=" + cantLevadura + ", cantChapas=" + cantChapas + ", cantBotellasVacias=" + cantBotellas + " where Codigo="+codigoCompra+";";
	objQuery->ExecuteNonQuery();

	CerrarConexion();

}