#include "Encargado.h"

using namespace System;
using namespace PDM_BaseDeDatosModel;

Encargado::Encargado(int codigo, String^ nombres, String^ apellidoPaterno, String^ apellidoMaterno, String^ dni) {
	this->codigo = codigo;
	this->nombres = nombres;
	this->apellidoPaterno = apellidoPaterno;
	this->apellidoMaterno = apellidoMaterno;
	this->dni = dni;
}
