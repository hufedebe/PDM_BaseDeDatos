#include "Inventario.h"

using namespace PDM_BaseDeDatosModel;
using namespace System;

Inventario::Inventario(float cantMalta, float cantLupulo, float cantLevadura, int cantChapas, int cantBotellasVacias, int cantBotellasLlenas) {
	this->cantMalta = cantMalta;
	this->cantLupulo = cantLupulo;
	this->cantLevadura = cantLevadura;
	this->cantChapas = cantChapas;
	this->cantBotellasVacias = cantBotellasVacias;
	this->cantBotellasLlenas = cantBotellasLlenas;
}