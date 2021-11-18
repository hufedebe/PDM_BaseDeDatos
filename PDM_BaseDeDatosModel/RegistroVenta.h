#pragma once
#include "Encargado.h"

using namespace System;

namespace PDM_BaseDeDatosModel {
	public ref class RegistroVenta {
	public:
		int codigo;
		String^ fecha;
		int cantVendida;
		Encargado^ objEncargado;

	public:
		RegistroVenta(int codigo, String^ fecha, int cantVendida, Encargado^ objEncargado);

	};
}