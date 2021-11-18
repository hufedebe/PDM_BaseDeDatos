#pragma once

using namespace System::Collections::Generic;
using namespace System::Data::SqlClient; /*Para trabajar con BD*/
using namespace System;

namespace PDM_BaseDeDatosController {

	using namespace PDM_BaseDeDatosModel;

	public ref class GestorRegistroCompra {
	private:
		SqlConnection^ objConexion;
		List<RegistroCompra^>^ list_registro;
	public:
		GestorRegistroCompra();
		void AbrirConexion();
		void CerrarConexion();
		Inventario^ CargarInventario();
		void AgregarCompra(int codigo, String^ fecha, int codigoEncargado, float cantMalta, float cantLupulo, float cantLevadura, int cantChapas, int cantBotellasVacias);
		int DarCodigoRegistro();
		List<RegistroCompra^>^ devuelveTodasCompras();
		RegistroCompra^ devuelveCompraxCodigo(int codigo);
		void eliminarCompra(int codigoCompra);
		void modificarCompra(int codigoCompra, RegistroCompra^ objRegistroCompra, int codigoEncargado);

	};
}