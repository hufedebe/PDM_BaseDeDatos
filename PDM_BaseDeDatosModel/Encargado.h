#pragma once

using namespace System;

namespace PDM_BaseDeDatosModel {
	public ref class Encargado {
	public:
		int codigo;
		String^ nombres;
		String^ apellidoPaterno;
		String^ apellidoMaterno;
		String^ dni;

	public:
		Encargado(int codigo, String^ nombres, String^ apellidoPaterno, String^ apellidoMaterno, String^ dni);
	};
}

