#include "GestorUsuario.h"

using namespace PDM_BaseDeDatosController;
using namespace System::IO;
using namespace System;

GestorUsuario::GestorUsuario() {
	this->objConexion = gcnew SqlConnection();
}



void GestorUsuario::AbrirConexion() {
	/*Datos para la conexión a la BD: servidor, nombreBD, usuarioBD, passBD*/
	String^ pass = "cerveza123";
	this->objConexion->ConnectionString = "Server=pdm-grupo1.clpiohd4aqw1.us-east-1.rds.amazonaws.com;DataBase=PDM_BD; User ID=admin;Password=cerveza123;";
	this->objConexion->Open(); /*Ya establecí contacto con la BD*/
}

void GestorUsuario::CerrarConexion() {
	this->objConexion->Close();
}

int GestorUsuario::validarUsuario(String^ user, String^ password) {
	int valido = 0;
	SqlDataReader^ objData; //datos a leer
	AbrirConexion();
	SqlCommand^ objQuery = gcnew SqlCommand();
	objQuery->Connection = this->objConexion;
	objQuery->CommandText = "select * from Usuario where userName='" + user + "' and password='" + password + "';";
	objData = objQuery->ExecuteReader();
	while (objData->Read()) {
		valido = 1;
	}
	objData->Close();
	CerrarConexion();
	return valido;
}

Usuario^ GestorUsuario::devolverUsuarioxUser(String^ user) {
	AbrirConexion();
	Usuario^ objUsuario;
	SqlDataReader^ objData; //datos a leer
	SqlCommand^ objQuery = gcnew SqlCommand();
	objQuery->Connection = this->objConexion;
	objQuery->CommandText = "select * from Usuario a, Encargado b where a.userName='" + user + "' and b.codigo=a.codigoEncargado;";
	objData = objQuery->ExecuteReader();
	while (objData->Read()) {
		String^ password = safe_cast<String^>(objData[1]);
		int codigo = safe_cast<int>(objData[5]);
		String^ nombres = safe_cast<String^>(objData[6]);
		String^ apellidoPaterno = safe_cast<String^>(objData[7]);
		String^ apellidoMaterno = safe_cast<String^>(objData[8]);
		String^ dni = safe_cast<String^>(objData[9]);
		Encargado^ objEncargado = gcnew Encargado(codigo, nombres, apellidoPaterno, apellidoMaterno, dni);
		String^ tipo = safe_cast<String^>(objData[3]);
		String^ estado = safe_cast<String^>(objData[4]);
		objUsuario = gcnew Usuario(user, password, objEncargado, tipo, estado);
	}
	objData->Close();
	CerrarConexion();

	return objUsuario;
}