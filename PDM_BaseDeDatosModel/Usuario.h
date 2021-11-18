#pragma once
#include "Encargado.h"

using namespace System;

namespace PDM_BaseDeDatosModel{
	public ref class Usuario {
	public:
		String^ userName;
		String^ password;
		Encargado^ objEncargado;
		String^ tipo;
		String^ estado;

	public:
		Usuario(String^ userName, String^ password, Encargado^ objEncargado, String^ tipo, String^ estado);

	};
}