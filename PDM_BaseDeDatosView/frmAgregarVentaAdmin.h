#pragma once
#include <iostream>
#include <string>
#include <stdio.h>
#include <time.h>

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
	/// Resumen de frmAgregarVentaAdmin
	/// </summary>
	public ref class frmAgregarVentaAdmin : public System::Windows::Forms::Form
	{
	public:
		frmAgregarVentaAdmin(void)
		{
			InitializeComponent();
			//
			//TODO: agregar código de constructor aquí
			//
		}
		frmAgregarVentaAdmin(Encargado^ objEncargado)
		{
			InitializeComponent();
			this->objEncargado = objEncargado;
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
		/// </summary>
		~frmAgregarVentaAdmin()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ button2;
	protected:
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::TextBox^ textBox6;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Label^ label1;
	private: Encargado^ objEncargado;
	private: System::Windows::Forms::Timer^ timer1;
	private: System::ComponentModel::IContainer^ components;
	private: String^ fecha_Ventas;

	private:
		/// <summary>
		/// Variable del diseñador necesaria.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Método necesario para admitir el Diseñador. No se puede modificar
		/// el contenido de este método con el editor de código.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->timer1 = (gcnew System::Windows::Forms::Timer(this->components));
			this->SuspendLayout();
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(228, 365);
			this->button2->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(114, 52);
			this->button2->TabIndex = 65;
			this->button2->Text = L"Cancelar";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &frmAgregarVentaAdmin::button2_Click);
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(36, 365);
			this->button1->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(114, 52);
			this->button1->TabIndex = 64;
			this->button1->Text = L"Agregar venta";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &frmAgregarVentaAdmin::button1_Click);
			// 
			// textBox6
			// 
			this->textBox6->Enabled = false;
			this->textBox6->Location = System::Drawing::Point(228, 280);
			this->textBox6->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->textBox6->Name = L"textBox6";
			this->textBox6->ReadOnly = true;
			this->textBox6->Size = System::Drawing::Size(100, 26);
			this->textBox6->TabIndex = 63;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(46, 283);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(164, 20);
			this->label6->TabIndex = 62;
			this->label6->Text = L"Código del encargado";
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(228, 227);
			this->textBox4->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(100, 26);
			this->textBox4->TabIndex = 61;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(63, 233);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(138, 20);
			this->label4->TabIndex = 60;
			this->label4->Text = L"Cantidad a vender";
			// 
			// textBox3
			// 
			this->textBox3->Enabled = false;
			this->textBox3->Location = System::Drawing::Point(228, 173);
			this->textBox3->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->textBox3->Name = L"textBox3";
			this->textBox3->ReadOnly = true;
			this->textBox3->Size = System::Drawing::Size(100, 26);
			this->textBox3->TabIndex = 59;
			this->textBox3->TextChanged += gcnew System::EventHandler(this, &frmAgregarVentaAdmin::textBox3_TextChanged);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(96, 179);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(54, 20);
			this->label3->TabIndex = 58;
			this->label3->Text = L"Fecha";
			// 
			// textBox2
			// 
			this->textBox2->Enabled = false;
			this->textBox2->Location = System::Drawing::Point(228, 117);
			this->textBox2->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->textBox2->Name = L"textBox2";
			this->textBox2->ReadOnly = true;
			this->textBox2->Size = System::Drawing::Size(100, 26);
			this->textBox2->TabIndex = 57;
			this->textBox2->TextChanged += gcnew System::EventHandler(this, &frmAgregarVentaAdmin::textBox2_TextChanged);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(105, 123);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(59, 20);
			this->label2->TabIndex = 56;
			this->label2->Text = L"Código";
			// 
			// textBox1
			// 
			this->textBox1->Enabled = false;
			this->textBox1->Location = System::Drawing::Point(228, 43);
			this->textBox1->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->textBox1->Name = L"textBox1";
			this->textBox1->ReadOnly = true;
			this->textBox1->Size = System::Drawing::Size(100, 26);
			this->textBox1->TabIndex = 55;
			this->textBox1->TextChanged += gcnew System::EventHandler(this, &frmAgregarVentaAdmin::textBox1_TextChanged);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(105, 46);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(62, 20);
			this->label1->TabIndex = 54;
			this->label1->Text = L"STOCK";
			// 
			// timer1
			// 
			this->timer1->Enabled = true;
			this->timer1->Tick += gcnew System::EventHandler(this, &frmAgregarVentaAdmin::timer1_Tick);
			// 
			// frmAgregarVentaAdmin
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(391, 463);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->textBox6);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label1);
			this->Name = L"frmAgregarVentaAdmin";
			this->Text = L"frmAgregarVentaAdmin";
			this->Load += gcnew System::EventHandler(this, &frmAgregarVentaAdmin::frmAgregarVentaAdmin_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void textBox3_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void textBox2_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Close();
}
private: System::Void frmAgregarVentaAdmin_Load(System::Object^ sender, System::EventArgs^ e) {
	GestorRegistroProduccion^ objGestorRegistroProduccion = gcnew GestorRegistroProduccion();
	GestorRegistroVenta^ objGestorRegistroVenta = gcnew GestorRegistroVenta();

	int stockActual = objGestorRegistroProduccion->devolverStockActual();
	int codigoVenta = objGestorRegistroVenta->darCodigoRegistro();

	this->textBox1->Text = Convert::ToString(stockActual);
	this->textBox2->Text = Convert::ToString(codigoVenta);
	this->textBox6->Text = Convert::ToString(this->objEncargado->codigo);
}


private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	int cantAVender = Convert::ToInt32(this->textBox4->Text);
	String^ fecha = this->textBox3->Text;
	int codigoVenta = Convert::ToInt32(this->textBox2->Text);

	GestorRegistroVenta^ objGestorRegistroVenta = gcnew GestorRegistroVenta();
	objGestorRegistroVenta->insertarVenta(codigoVenta, fecha, cantAVender, this->objEncargado->codigo);

	this->Close();
}

private: System::Void timer1_Tick(System::Object^ sender, System::EventArgs^ e) {
	DateTime^ fecha = DateTime::Now;
	DateTime^ hour = DateTime::Now;
	int dia = fecha->Day;
	int mes = fecha->Month;
	int año = fecha->Year;
	int hora = fecha->Hour;
	int minuto = fecha->Minute;
	int segundo = fecha->Second;
	this->textBox3->Text = Convert::ToString(dia) + "/" + Convert::ToString(mes) + "/" + Convert::ToString(año);
}

};
}
