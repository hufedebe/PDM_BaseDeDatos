#pragma once
#include "Encargado.h"

using namespace System;

namespace PDM_BaseDeDatosModel {
	public ref class RegistroCompra {
	public:
		int codigo;
		String^ fecha;
		float cantMalta;
		float cantLupulo;
		float cantLevadura;
		int cantChapas;
		int cantBotellasVacias;
		Encargado^ objEncargado;

	public:
		RegistroCompra(int codigo, String^ fecha, float cantMalta, float cantLupulo, float cantLevadura, int cantChapas, int cantBotellasVacias, Encargado^ objEncargado);

	};
}