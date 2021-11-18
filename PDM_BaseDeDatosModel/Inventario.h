#pragma once

using namespace System;

namespace PDM_BaseDeDatosModel {
	public ref class Inventario {
	public:
		float cantMalta;
		float cantLupulo;
		float cantLevadura;
		int cantChapas;
		int cantBotellasVacias;
		int cantBotellasLlenas;
	public:
		Inventario(float cantMalta, float cantLupulo, float cantLevadura, int cantChapas, int cantBotellasVacias, int cantBotellasLlenas);

	};
}