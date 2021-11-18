#include "RegistroProduccion.h"

using namespace PDM_BaseDeDatosModel;
using namespace System;

RegistroProduccion::RegistroProduccion(int codigo, String^ fecha, int cantBotellas, float tempMaceracion, float tempCoccion, float tempFermentacion) {
	this->codigo = codigo;
	this->fecha = fecha;
	this->cantBotellas = cantBotellas;
	this->tempMaceracion = tempMaceracion;
	this->tempCoccion = tempCoccion;
	this->tempFermentacion = tempFermentacion;

}