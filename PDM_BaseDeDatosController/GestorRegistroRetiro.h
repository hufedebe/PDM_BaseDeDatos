#pragma once

using namespace System::Collections::Generic;
using namespace System::Data::SqlClient; /*Para trabajar con BD*/
using namespace System;

namespace PDM_BaseDeDatosController {

	using namespace PDM_BaseDeDatosModel;

	public ref class GestorRegistroRetiro {
	private:
		SqlConnection^ objConexion;
		List<RegistroRetiro^>^ list_registro;
	public:
		GestorRegistroRetiro();
		void AbrirConexion();
		void CerrarConexion();
		void RealizarRetiro(int codigo, String^ fecha, int codigoEncargado, float cantMalta, float cantLupulo, float cantLevadura, int cantChapas, int cantBotellasVacias);
		int DarCodigoRegistro();
		List<RegistroRetiro^>^ devuelveTodosRetiros();
		RegistroRetiro^ devuelveRetiroxCodigo(int codigo);
		void eliminarRetiro(int codigoRetiro);
		void modificarRetiro(int codigoRetiro, RegistroRetiro^ objRegistroRetiro, int codigoEncargado);

	};
}

