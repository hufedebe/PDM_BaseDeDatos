#include "RegistroVenta.h"


using namespace PDM_BaseDeDatosModel;
using namespace System;

RegistroVenta::RegistroVenta(int codigo, String^ fecha, int cantVendida, Encargado^ objEncargado) {
	this->codigo = codigo;
	this->fecha = fecha;
	this->cantVendida = cantVendida;
	this->objEncargado = objEncargado;

}