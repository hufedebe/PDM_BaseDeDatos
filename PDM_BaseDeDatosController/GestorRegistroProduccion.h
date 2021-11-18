#pragma once

using namespace System::Collections::Generic;
using namespace System::Data::SqlClient; /*Para trabajar con BD*/
using namespace System;

namespace PDM_BaseDeDatosController {

	using namespace PDM_BaseDeDatosModel;

	public ref class GestorRegistroProduccion {
	private:
		SqlConnection^ objConexion;
	public:
		GestorRegistroProduccion();
		void AbrirConexion();
		void CerrarConexion();
		List<RegistroProduccion^>^ devuelveRegistroProducciones();
		int devolverStockActual();

	};
}