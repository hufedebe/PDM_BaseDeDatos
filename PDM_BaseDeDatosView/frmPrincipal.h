#pragma once
#include "frmVerDatosAlmacen.h"
#include "frmVerDatosAlmacenAdmin.h"
#include "frmVerDatosProduccion.h"
#include "frmVentasEncargado.h"
#include "frmVentasAdmin.h"

namespace PDMBaseDeDatosView {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace PDM_BaseDeDatosModel;
	using namespace PDM_BaseDeDatosController;
	using namespace System::Collections::Generic;

	/// <summary>
	/// Resumen de frmPrincipal
	/// </summary>
	public ref class frmPrincipal : public System::Windows::Forms::Form
	{
	public:
		frmPrincipal(void)
		{
			InitializeComponent();
			//
			//TODO: agregar código de constructor aquí
			//
		}

		frmPrincipal(Usuario^ objUsuario)
		{
			InitializeComponent();
			this->objUsuario = objUsuario;
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
		/// </summary>
		~frmPrincipal()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ button1;
	private: Encargado^ objEncargado;
	protected:
	private: System::Windows::Forms::Button^ button2;
	private: Usuario^ objUsuario;
	private: System::Windows::Forms::Button^ button3;

	protected:

	private:
		/// <summary>
		/// Variable del diseñador necesaria.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Método necesario para admitir el Diseñador. No se puede modificar
		/// el contenido de este método con el editor de código.
		/// </summary>
		void InitializeComponent(void)
		{
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(104, 74);
			this->button1->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(172, 106);
			this->button1->TabIndex = 0;
			this->button1->Text = L"Inventario";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &frmPrincipal::button1_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(403, 74);
			this->button2->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(163, 106);
			this->button2->TabIndex = 1;
			this->button2->Text = L"Datos del proceso";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &frmPrincipal::button2_Click);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(251, 248);
			this->button3->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(172, 106);
			this->button3->TabIndex = 2;
			this->button3->Text = L"Ventas";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &frmPrincipal::button3_Click);
			// 
			// frmPrincipal
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(708, 454);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->Name = L"frmPrincipal";
			this->Text = L"frmPrincipal";
			this->FormClosing += gcnew System::Windows::Forms::FormClosingEventHandler(this, &frmPrincipal::frmPrincipal_FormClosing);
			this->Load += gcnew System::EventHandler(this, &frmPrincipal::frmPrincipal_Load);
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void frmPrincipal_Load(System::Object^ sender, System::EventArgs^ e) {
	}


	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		if (this->objUsuario->tipo=="admin") {
			frmVerDatosAlmacenAdmin^ ventanaVerDatosAlmacenAdmin = gcnew frmVerDatosAlmacenAdmin(this->objUsuario->objEncargado);
			ventanaVerDatosAlmacenAdmin->ShowDialog();
		}
		else {
			frmVerDatosAlmacen^ ventanaVerDatosAlmacen = gcnew frmVerDatosAlmacen(this->objUsuario->objEncargado);
			ventanaVerDatosAlmacen->ShowDialog();
		}

	}


private: System::Void frmPrincipal_FormClosing(System::Object^ sender, System::Windows::Forms::FormClosingEventArgs^ e) {
	Application::Exit();
}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	frmVerDatosProduccion^ ventanaVerDatosProduccion = gcnew frmVerDatosProduccion();
	ventanaVerDatosProduccion->ShowDialog();
}
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
	if (this->objUsuario->tipo == "admin") {
		frmVentasAdmin^ ventanaVentasAdmin = gcnew frmVentasAdmin(this->objUsuario->objEncargado);
		ventanaVentasAdmin->ShowDialog();
	}
	else {
		frmVentasEncargado^ ventanaVentasEncargado = gcnew frmVentasEncargado(this->objUsuario->objEncargado);
		ventanaVentasEncargado->ShowDialog();
	}

}
};
}
