#pragma once

using namespace System::Collections::Generic;
using namespace System::Data::SqlClient; /*Para trabajar con BD*/
using namespace System;

namespace PDM_BaseDeDatosController {

	using namespace PDM_BaseDeDatosModel;

	public ref class GestorRegistroVenta {
	private:
		SqlConnection^ objConexion;
		List<RegistroVenta^>^ list_registro;
	public:
		GestorRegistroVenta();
		void AbrirConexion();
		void CerrarConexion();
		List<RegistroVenta^>^ devolverListaVentas();
		int darCodigoRegistro();
		void insertarVenta(int codigoVenta, String^ fecha, int cantVendida, int codigoEncargado);
		void eliminarVentaxxCodigo(int codigoVenta);
		void modificarVenta(int codigoVenta, String^ fecha, int cantVendida, int codigoEncargado);
		RegistroVenta^ devuelveVentaxCodigo(int codigo);


	};
}