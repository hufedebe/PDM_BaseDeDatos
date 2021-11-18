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
	/// Resumen de frmRetirarObjetos
	/// </summary>
	public ref class frmRetirarObjetos : public System::Windows::Forms::Form
	{
	public:
		frmRetirarObjetos(void)
		{
			InitializeComponent();
			//
			//TODO: agregar código de constructor aquí
			//
		}

		frmRetirarObjetos(Encargado^ objEncargado, Inventario^ ActualInventario)
		{
			InitializeComponent();
			this->objEncargado = objEncargado;
			this->ActualInventario = ActualInventario;
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
		/// </summary>
		~frmRetirarObjetos()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	protected:
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::TextBox^ textBox5;
	private: System::Windows::Forms::TextBox^ textBox6;
	private: System::Windows::Forms::TextBox^ textBox7;
	private: System::Windows::Forms::TextBox^ textBox8;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	private: Encargado^ objEncargado;
	private: Inventario^ ActualInventario;
	private: System::Windows::Forms::Timer^ timer1;

	private: System::ComponentModel::IContainer^ components;

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
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->textBox7 = (gcnew System::Windows::Forms::TextBox());
			this->textBox8 = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->timer1 = (gcnew System::Windows::Forms::Timer(this->components));
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(50, 62);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(155, 20);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Código de operación";
			// 
			// textBox1
			// 
			this->textBox1->Enabled = false;
			this->textBox1->Location = System::Drawing::Point(211, 62);
			this->textBox1->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->textBox1->Name = L"textBox1";
			this->textBox1->ReadOnly = true;
			this->textBox1->Size = System::Drawing::Size(112, 26);
			this->textBox1->TabIndex = 1;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(50, 120);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(48, 20);
			this->label2->TabIndex = 2;
			this->label2->Text = L"Malta";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(50, 175);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(57, 20);
			this->label3->TabIndex = 3;
			this->label3->Text = L"Lupulo";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(50, 233);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(75, 20);
			this->label4->TabIndex = 4;
			this->label4->Text = L"Levadura";
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(136, 120);
			this->textBox2->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(112, 26);
			this->textBox2->TabIndex = 5;
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(136, 168);
			this->textBox3->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(112, 26);
			this->textBox3->TabIndex = 6;
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(136, 229);
			this->textBox4->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(112, 26);
			this->textBox4->TabIndex = 7;
			// 
			// textBox5
			// 
			this->textBox5->Location = System::Drawing::Point(507, 114);
			this->textBox5->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(112, 26);
			this->textBox5->TabIndex = 8;
			this->textBox5->TextChanged += gcnew System::EventHandler(this, &frmRetirarObjetos::textBox5_TextChanged);
			// 
			// textBox6
			// 
			this->textBox6->Location = System::Drawing::Point(507, 62);
			this->textBox6->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(112, 26);
			this->textBox6->TabIndex = 9;
			this->textBox6->TextChanged += gcnew System::EventHandler(this, &frmRetirarObjetos::textBox6_TextChanged);
			// 
			// textBox7
			// 
			this->textBox7->Enabled = false;
			this->textBox7->Location = System::Drawing::Point(507, 170);
			this->textBox7->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->textBox7->Name = L"textBox7";
			this->textBox7->ReadOnly = true;
			this->textBox7->Size = System::Drawing::Size(112, 26);
			this->textBox7->TabIndex = 10;
			this->textBox7->TextChanged += gcnew System::EventHandler(this, &frmRetirarObjetos::textBox7_TextChanged);
			// 
			// textBox8
			// 
			this->textBox8->Enabled = false;
			this->textBox8->Location = System::Drawing::Point(507, 223);
			this->textBox8->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->textBox8->Name = L"textBox8";
			this->textBox8->ReadOnly = true;
			this->textBox8->Size = System::Drawing::Size(112, 26);
			this->textBox8->TabIndex = 11;
			this->textBox8->TextChanged += gcnew System::EventHandler(this, &frmRetirarObjetos::textBox8_TextChanged);
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(422, 118);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(66, 20);
			this->label5->TabIndex = 12;
			this->label5->Text = L"Botellas";
			this->label5->Click += gcnew System::EventHandler(this, &frmRetirarObjetos::label5_Click);
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(422, 62);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(64, 20);
			this->label6->TabIndex = 13;
			this->label6->Text = L"Chapas";
			this->label6->Click += gcnew System::EventHandler(this, &frmRetirarObjetos::label6_Click);
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(422, 173);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(54, 20);
			this->label7->TabIndex = 14;
			this->label7->Text = L"Fecha";
			this->label7->Click += gcnew System::EventHandler(this, &frmRetirarObjetos::label7_Click);
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(312, 233);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(164, 20);
			this->label8->TabIndex = 15;
			this->label8->Text = L"Código del encargado";
			this->label8->Click += gcnew System::EventHandler(this, &frmRetirarObjetos::label8_Click);
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(154, 306);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(112, 54);
			this->button1->TabIndex = 16;
			this->button1->Text = L"    Añadir      retiro";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &frmRetirarObjetos::button1_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(364, 306);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(112, 54);
			this->button2->TabIndex = 17;
			this->button2->Text = L"Cancelar";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &frmRetirarObjetos::button2_Click);
			// 
			// timer1
			// 
			this->timer1->Enabled = true;
			this->timer1->Tick += gcnew System::EventHandler(this, &frmRetirarObjetos::timer1_Tick);
			// 
			// frmRetirarObjetos
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(677, 413);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->textBox8);
			this->Controls->Add(this->textBox7);
			this->Controls->Add(this->textBox6);
			this->Controls->Add(this->textBox5);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label1);
			this->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->Name = L"frmRetirarObjetos";
			this->Text = L"frmRetirarObjetos";
			this->Load += gcnew System::EventHandler(this, &frmRetirarObjetos::frmRetirarObjetos_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void label8_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void textBox8_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void textBox7_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void label7_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void label6_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void textBox6_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void textBox5_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void label5_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {

	int Codigo = Convert::ToInt32(this->textBox1->Text);
	float cantMalta = Convert::ToDouble(this->textBox2->Text);
	float cantLupulo = Convert::ToDouble(this->textBox3->Text);
	float cantLevadura = Convert::ToDouble(this->textBox4->Text);
	float cantBotellas = Convert::ToDouble(this->textBox5->Text);
	float cantChapas = Convert::ToDouble(this->textBox6->Text);
	String^ fecha = this->textBox7->Text;
	int CodigoEncargado = Convert::ToInt32(this->objEncargado->codigo);

	bool hayNegativo = (cantMalta < 0 || cantLupulo < 0 || cantLevadura < 0 || cantBotellas < 0 || cantChapas < 0);
	bool hayDecimal = (cantBotellas != (int)cantBotellas || cantChapas != (int)cantChapas);
	bool fullCero = (cantMalta == 0 && cantLupulo == 0 && cantLevadura == 0 && cantBotellas == 0 && cantChapas == 0);
	bool exceso = (cantMalta > this->ActualInventario->cantMalta || cantLupulo > this->ActualInventario->cantLupulo || cantLevadura > this->ActualInventario->cantLevadura || cantBotellas > this->ActualInventario->cantBotellasVacias || cantChapas > this->ActualInventario->cantChapas);
	if (hayNegativo || hayDecimal) {
		MessageBox::Show("AL MENOS UN CAMPO INCORRECTO");
	}
	else if (fullCero) {

		MessageBox::Show("TODOS LOS CAMPOS VACÍOS");

	}
	else if (exceso) {

		MessageBox::Show("NO SE PUEDE QUITAR MAS DE LO QUE HAY EN STOCK");

	}
	else {
		GestorRegistroRetiro^ objGestorRegistroRetiro = gcnew GestorRegistroRetiro();
		objGestorRegistroRetiro->RealizarRetiro(Codigo, fecha, CodigoEncargado, cantMalta, cantLupulo, cantLevadura, (int)cantChapas, (int)cantBotellas);
		this->Close();
	}
	
}

private: System::Void frmRetirarObjetos_Load(System::Object^ sender, System::EventArgs^ e) {

	this->textBox7->Text = "0";
	this->textBox2->Text = "0";
	this->textBox3->Text = "0";
	this->textBox4->Text = "0";
	this->textBox5->Text = "0";
	this->textBox6->Text = "0";
	GestorRegistroRetiro^ objGestorRegistroRetiro = gcnew GestorRegistroRetiro();
	int codigo = objGestorRegistroRetiro->DarCodigoRegistro();
	this->textBox1->Text = Convert::ToString(codigo);
	this->textBox8->Text = Convert::ToString(objEncargado->codigo);

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
	this->textBox7->Text = Convert::ToString(dia) + "/" + Convert::ToString(mes) + "/" + Convert::ToString(año);
}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Close();
}
};
}
