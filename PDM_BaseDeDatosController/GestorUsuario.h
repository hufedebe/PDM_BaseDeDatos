#pragma once

using namespace System::Collections::Generic;
using namespace System::Data::SqlClient; /*Para trabajar con BD*/
using namespace System;

namespace PDM_BaseDeDatosController {

	using namespace PDM_BaseDeDatosModel;

	public ref class GestorUsuario {
	private:
		SqlConnection^ objConexion;
	public:
		GestorUsuario();
		void AbrirConexion();
		void CerrarConexion();
		int validarUsuario(String^ user, String^ password);
		Usuario^ devolverUsuarioxUser(String^ user);


	};
}