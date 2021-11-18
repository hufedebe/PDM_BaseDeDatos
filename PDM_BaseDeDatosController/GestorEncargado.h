#pragma once
namespace PDM_BaseDeDatosController {
	using namespace PDM_BaseDeDatosModel;
	using namespace System::Data::SqlClient;
	using namespace System;

	public ref class GestorEncargado {
	private:
		SqlConnection^ objConexion;
	public:
		GestorEncargado();
		void AbrirConexion();
		void CerrarConexion();
		Encargado^ devolverEncargadoxCodigo(int codigo);
		Encargado^ devolverEncargadoxDni(String^ dni);
	};
}