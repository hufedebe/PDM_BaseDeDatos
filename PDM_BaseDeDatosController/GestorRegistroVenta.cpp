#include "GestorRegistroVenta.h"
#include "GestorRegistroVenta.h"
#include "GestorEncargado.h"


using namespace PDM_BaseDeDatosController;
using namespace System::IO;
using namespace System;

GestorRegistroVenta::GestorRegistroVenta() {
	this->objConexion = gcnew SqlConnection();
	this->list_registro = gcnew List<RegistroVenta^>;
}

void GestorRegistroVenta::AbrirConexion() {
	/*Datos para la conexión a la BD: servidor, nombreBD, usuarioBD, passBD*/
	String^ pass = "cerveza123";
	this->objConexion->ConnectionString = "Server=pdm-grupo1.clpiohd4aqw1.us-east-1.rds.amazonaws.com;DataBase=PDM_BD; User ID=admin;Password=cerveza123;";
	this->objConexion->Open(); /*Ya establecí contacto con la BD*/
}

void GestorRegistroVenta::CerrarConexion() {
	this->objConexion->Close();
}

List<RegistroVenta^>^ GestorRegistroVenta::devolverListaVentas() {
	SqlDataReader^ objData;
	List<RegistroVenta^>^ listaVentas = gcnew List<RegistroVenta^>();
	AbrirConexion();
	SqlCommand^ objQuery = gcnew SqlCommand();
	objQuery->Connection = this->objConexion;
	objQuery->CommandText = "select* from RegistroVenta;";
	objData = objQuery->ExecuteReader();
	while (objData->Read()) {
		int codigo = safe_cast<int>(objData[0]);
		String^ fecha = safe_cast<String^>(objData[1]);
		int cantVendida = safe_cast<int>(objData[2]);
		int codigoEncargado = safe_cast<int>(objData[3]);

		GestorEncargado^ objGestorEncargado = gcnew GestorEncargado();
		Encargado^ objEncargado = objGestorEncargado->devolverEncargadoxCodigo(codigoEncargado);
		RegistroVenta^ objRegistroVenta = gcnew RegistroVenta(codigo, fecha, cantVendida, objEncargado);
		listaVentas->Add(objRegistroVenta);
	}
	objData->Close();
	CerrarConexion();
	return listaVentas;
}

int GestorRegistroVenta::darCodigoRegistro() {
	this->list_registro->Clear();
	this->AbrirConexion();
	SqlCommand^ query = gcnew SqlCommand();
	query->Connection = this->objConexion;
	query->CommandText = "Select * From RegistroVenta;";
	SqlDataReader^ data = query->ExecuteReader();
	while (data->Read())
	{
		int codigo = safe_cast<int>(data[0]);
		String^ fecha = safe_cast<String^>(data[1]);
		int cantVendida = safe_cast<int>(data[2]);
		int codigoEncargado = safe_cast<int>(data[3]);

		Encargado^ vacio;
		RegistroVenta^ objRegistroVenta = gcnew RegistroVenta(codigo, fecha, cantVendida, vacio);
		list_registro->Add(objRegistroVenta);
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
	}
	else {
		return 1;
	}
}

void GestorRegistroVenta::insertarVenta(int codigoVenta, String^ fecha, int cantVendida, int codigoEncargado) {
	AbrirConexion();
	SqlCommand^ objQuery = gcnew SqlCommand();
	objQuery->Connection = this->objConexion;
	objQuery->CommandText = "insert into RegistroVenta values (@p1, @p2, @p3, @p4);";
	SqlParameter^ p1 = gcnew SqlParameter("@p1", System::Data::SqlDbType::Int);
	p1->Value = codigoVenta;
	SqlParameter^ p2 = gcnew SqlParameter("@p2", System::Data::SqlDbType::VarChar, 50);
	p2->Value = fecha;
	SqlParameter^ p3 = gcnew SqlParameter("@p3", System::Data::SqlDbType::Int);
	p3->Value = cantVendida;
	SqlParameter^ p4 = gcnew SqlParameter("@p4", System::Data::SqlDbType::Int);
	p4->Value = codigoEncargado;

	objQuery->Parameters->Add(p1);
	objQuery->Parameters->Add(p2);
	objQuery->Parameters->Add(p3);
	objQuery->Parameters->Add(p4);

	objQuery->ExecuteNonQuery();

	CerrarConexion();
}

void GestorRegistroVenta::eliminarVentaxxCodigo(int codigoVenta) {
	AbrirConexion();
	SqlCommand^ objQuery = gcnew SqlCommand();
	objQuery->Connection = this->objConexion;
	objQuery->CommandText = "delete from RegistroVenta where codigo=" + codigoVenta + ";";
	objQuery->ExecuteNonQuery();
	CerrarConexion();
}

void GestorRegistroVenta::modificarVenta(int codigoVenta, String^ fecha, int cantVendida, int codigoEncargado) {
	AbrirConexion();
	SqlCommand^ objQuery = gcnew SqlCommand();
	objQuery->Connection = this->objConexion;
	objQuery->CommandText = "update RegistroVenta set codigo = " + codigoVenta + ", fecha = '" + fecha + "', cantVendida = " + cantVendida + ", codigoEncargado = " + codigoEncargado + " where codigo = " + codigoVenta + ";";
	objQuery->ExecuteNonQuery();
	CerrarConexion();
}

RegistroVenta^ GestorRegistroVenta::devuelveVentaxCodigo(int codigo) {
	SqlDataReader^ objData;
	RegistroVenta^ objRegistroVenta;
	AbrirConexion();
	SqlCommand^ objQuery = gcnew SqlCommand();
	objQuery->Connection = this->objConexion;
	objQuery->CommandText = "select* from RegistroVenta where codigo= " + codigo + ";";
	objData = objQuery->ExecuteReader();
	while (objData->Read()) {
		int codigo = safe_cast<int>(objData[0]);
		String^ fecha = safe_cast<String^>(objData[1]);
		int cantVendida = safe_cast<int>(objData[2]);
		int codigoEncargado = safe_cast<int>(objData[3]);

		GestorEncargado^ objGestorEncargado = gcnew GestorEncargado();
		Encargado^ objEncargado = objGestorEncargado->devolverEncargadoxCodigo(codigoEncargado);
		objRegistroVenta = gcnew RegistroVenta(codigo, fecha, cantVendida, objEncargado);
	}
	objData->Close();
	CerrarConexion();
	return objRegistroVenta;
}