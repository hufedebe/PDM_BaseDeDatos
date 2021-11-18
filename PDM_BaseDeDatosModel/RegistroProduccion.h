#pragma once

using namespace System;

namespace PDM_BaseDeDatosModel {
	public ref class RegistroProduccion {
	public:
		int codigo;
		String^ fecha;
		int cantBotellas;
		float tempMaceracion;
		float tempCoccion;
		float tempFermentacion;

	public:
		RegistroProduccion(int codigo, String^ fecha, int cantBotellas, float tempMaceracion, float tempCoccion, float tempFermentacion);

	};
}