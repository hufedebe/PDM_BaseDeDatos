#include "GestorEncargado.h"

using namespace PDM_BaseDeDatosController;
using namespace System;

GestorEncargado::GestorEncargado() {
	this->objConexion = gcnew SqlConnection();
}

void GestorEncargado::AbrirConexion() {
	this->objConexion->ConnectionString = "Server=pdm-grupo1.clpiohd4aqw1.us-east-1.rds.amazonaws.com;DataBase=PDM_BD; User ID=admin;Password=cerveza123;";
	this->objConexion->Open();
}

void GestorEncargado::CerrarConexion() {
	this->objConexion->Close();
}

Encargado^ GestorEncargado::devolverEncargadoxCodigo(int codigo) {

	AbrirConexion();
	Encargado^ objEncargado;
	SqlDataReader^ objData; //datos a leer
	SqlCommand^ objQuery = gcnew SqlCommand();
	objQuery->Connection = this->objConexion;
	objQuery->CommandText = "select * from Encargado where codigo=" + codigo + ";";
	objData = objQuery->ExecuteReader();
	while (objData->Read()) {
		String^ nombres = safe_cast<String^>(objData[1]);
		String^ apellidoPaterno = safe_cast<String^>(objData[2]);
		String^ apellidoMaterno = safe_cast<String^>(objData[3]);
		String^ dni = safe_cast<String^>(objData[4]);
		objEncargado = gcnew Encargado(codigo, nombres, apellidoPaterno, apellidoMaterno, dni);
	}
	objData->Close();
	CerrarConexion();

	return objEncargado;
}

Encargado^ GestorEncargado::devolverEncargadoxDni(String^ dni) {
	AbrirConexion();
	Encargado^ objEncargado;
	SqlDataReader^ objData; //datos a leer
	SqlCommand^ objQuery = gcnew SqlCommand();
	objQuery->Connection = this->objConexion;
	objQuery->CommandText = "select * from Encargado where codigo='" + dni + "';";
	objData = objQuery->ExecuteReader();
	while (objData->Read()) {
		int codigo = safe_cast<int>(objData[0]);
		String^ nombres = safe_cast<String^>(objData[1]);
		String^ apellidoPaterno = safe_cast<String^>(objData[2]);
		String^ apellidoMaterno = safe_cast<String^>(objData[3]);

		Encargado^ objEncargado = gcnew Encargado(codigo, nombres, apellidoPaterno, apellidoMaterno, dni);

	}
	objData->Close();
	CerrarConexion();

	return objEncargado;
}
