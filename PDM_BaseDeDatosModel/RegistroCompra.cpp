#include "RegistroCompra.h"

using namespace PDM_BaseDeDatosModel;
using namespace System;

RegistroCompra::RegistroCompra(int codigo, String^ fecha, float cantMalta, float cantLupulo, float cantLevadura, int cantChapas, int cantBotellasVacias, Encargado^ objEncargado) {
	this->codigo = codigo;
	this->fecha = fecha;
	this->cantMalta = cantMalta;
	this->cantLupulo = cantLupulo;
	this->cantLevadura = cantLevadura;
	this->cantChapas = cantChapas;
	this->cantBotellasVacias = cantBotellasVacias;
	this->objEncargado = objEncargado;

}