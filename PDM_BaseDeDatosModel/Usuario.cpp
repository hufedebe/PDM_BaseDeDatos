#include "Usuario.h"

using namespace PDM_BaseDeDatosModel;
using namespace System;

Usuario::Usuario(String^ userName, String^ password, Encargado^ objEncargado, String^ tipo, String^ estado) {
	this->userName = userName;
	this->password = password;
	this->objEncargado = objEncargado;
	this->tipo = tipo;
	this->estado = estado;

}