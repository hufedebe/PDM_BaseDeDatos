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
	/// Resumen de frmAgregarCompra
	/// </summary>
	public ref class frmAgregarCompra : public System::Windows::Forms::Form
	{
	public:
		frmAgregarCompra(void)
		{
			InitializeComponent();
			//
			//TODO: agregar código de constructor aquí
			//
		}
		frmAgregarCompra(Encargado^ objEncargado)
		{
			InitializeComponent();
			this->objEncargado = objEncargado;
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
		/// </summary>
		~frmAgregarCompra()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	protected:
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::TextBox^ textBox5;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::TextBox^ textBox6;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::TextBox^ textBox7;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::TextBox^ textBox8;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Timer^ timer1;
	private: System::ComponentModel::IContainer^ components;
	private: Encargado^ objEncargado;

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
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->textBox7 = (gcnew System::Windows::Forms::TextBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->textBox8 = (gcnew System::Windows::Forms::TextBox());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->timer1 = (gcnew System::Windows::Forms::Timer(this->components));
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(58, 56);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(155, 20);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Código de operación";
			// 
			// textBox1
			// 
			this->textBox1->Enabled = false;
			this->textBox1->Location = System::Drawing::Point(219, 52);
			this->textBox1->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(100, 26);
			this->textBox1->TabIndex = 1;
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(127, 102);
			this->textBox2->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(100, 26);
			this->textBox2->TabIndex = 3;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(58, 110);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(48, 20);
			this->label2->TabIndex = 2;
			this->label2->Text = L"Malta";
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(127, 158);
			this->textBox3->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(100, 26);
			this->textBox3->TabIndex = 5;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(58, 164);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(57, 20);
			this->label3->TabIndex = 4;
			this->label3->Text = L"Lúpulo";
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(127, 212);
			this->textBox4->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(100, 26);
			this->textBox4->TabIndex = 7;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(46, 219);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(75, 20);
			this->label4->TabIndex = 6;
			this->label4->Text = L"Levadura";
			// 
			// textBox5
			// 
			this->textBox5->Location = System::Drawing::Point(467, 102);
			this->textBox5->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(100, 26);
			this->textBox5->TabIndex = 9;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(343, 105);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(66, 20);
			this->label5->TabIndex = 8;
			this->label5->Text = L"Botellas";
			// 
			// textBox6
			// 
			this->textBox6->Location = System::Drawing::Point(467, 50);
			this->textBox6->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(100, 26);
			this->textBox6->TabIndex = 11;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(343, 57);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(64, 20);
			this->label6->TabIndex = 10;
			this->label6->Text = L"Chapas";
			// 
			// textBox7
			// 
			this->textBox7->Enabled = false;
			this->textBox7->Location = System::Drawing::Point(467, 158);
			this->textBox7->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->textBox7->Name = L"textBox7";
			this->textBox7->Size = System::Drawing::Size(100, 26);
			this->textBox7->TabIndex = 13;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(343, 162);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(54, 20);
			this->label7->TabIndex = 12;
			this->label7->Text = L"Fecha";
			// 
			// textBox8
			// 
			this->textBox8->Enabled = false;
			this->textBox8->Location = System::Drawing::Point(467, 212);
			this->textBox8->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->textBox8->Name = L"textBox8";
			this->textBox8->Size = System::Drawing::Size(100, 26);
			this->textBox8->TabIndex = 15;
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(288, 218);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(164, 20);
			this->label8->TabIndex = 14;
			this->label8->Text = L"Código del encargado";
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(148, 298);
			this->button1->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(114, 52);
			this->button1->TabIndex = 16;
			this->button1->Text = L"Añadir compra";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &frmAgregarCompra::button1_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(338, 298);
			this->button2->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(114, 52);
			this->button2->TabIndex = 17;
			this->button2->Text = L"Cancelar";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &frmAgregarCompra::button2_Click);
			// 
			// timer1
			// 
			this->timer1->Enabled = true;
			this->timer1->Tick += gcnew System::EventHandler(this, &frmAgregarCompra::timer1_Tick);
			// 
			// frmAgregarCompra
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(633, 391);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->textBox8);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->textBox7);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->textBox6);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->textBox5);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label1);
			this->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->Name = L"frmAgregarCompra";
			this->Text = L"frmAgregarCompra";
			this->FormClosing += gcnew System::Windows::Forms::FormClosingEventHandler(this, &frmAgregarCompra::frmAgregarCompra_FormClosing);
			this->Load += gcnew System::EventHandler(this, &frmAgregarCompra::frmAgregarCompra_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
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
		if (hayNegativo || hayDecimal) {
			MessageBox::Show("AL MENOS UN CAMPO INCORRECTO");
		}
		else if (fullCero) {
			
			MessageBox::Show("TODOS LOS CAMPOS VACÍOS");

		}else {
			GestorRegistroCompra^ objGestorRegistroCompra = gcnew GestorRegistroCompra();
			objGestorRegistroCompra->AgregarCompra(Codigo, fecha, CodigoEncargado, cantMalta, cantLupulo, cantLevadura, (int)cantChapas, (int)cantBotellas);
			this->Close();
		}



	}
	private: System::Void frmAgregarCompra_Load(System::Object^ sender, System::EventArgs^ e) {
		this->textBox7->Text = "0";
		this->textBox2->Text = "0";
		this->textBox3->Text = "0";
		this->textBox4->Text = "0";
		this->textBox5->Text = "0";
		this->textBox6->Text = "0";
		GestorRegistroCompra^ objGestorRegistroCompra = gcnew GestorRegistroCompra();
		int codigo = objGestorRegistroCompra->DarCodigoRegistro();
		this->textBox1->Text = Convert::ToString(codigo);
		this->textBox8->Text = Convert::ToString(objEncargado->codigo);
	}
	private: System::Void frmAgregarCompra_FormClosing(System::Object^ sender, System::Windows::Forms::FormClosingEventArgs^ e) {
		
	}
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
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
		this->textBox7->Text = Convert::ToString(dia) + "/" + Convert::ToString(mes) + "/" + Convert::ToString(año);
	}
};
}
