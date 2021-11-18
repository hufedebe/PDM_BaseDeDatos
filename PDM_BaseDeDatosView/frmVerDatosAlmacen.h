#pragma once
#include "frmAgregarCompra.h"
#include "frmRetirarObjetos.h"

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
	/// Resumen de frmVerDatosAlmacen
	/// </summary>
	public ref class frmVerDatosAlmacen : public System::Windows::Forms::Form
	{
	public:
		frmVerDatosAlmacen(void)
		{
			InitializeComponent();
			//
			//TODO: agregar código de constructor aquí
			//
		}
		frmVerDatosAlmacen(Encargado^ objEncargado)
		{
			InitializeComponent();
			this->objEncargado = objEncargado;
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
		/// </summary>
		~frmVerDatosAlmacen()
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
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	private: Encargado^ objEncargado;
	private: System::Windows::Forms::Button^ button3;

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
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(37, 32);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(138, 20);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Cantidad de malta";
			// 
			// textBox1
			// 
			this->textBox1->Enabled = false;
			this->textBox1->Location = System::Drawing::Point(202, 32);
			this->textBox1->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->textBox1->Name = L"textBox1";
			this->textBox1->ReadOnly = true;
			this->textBox1->Size = System::Drawing::Size(100, 26);
			this->textBox1->TabIndex = 1;
			this->textBox1->TextChanged += gcnew System::EventHandler(this, &frmVerDatosAlmacen::textBox1_TextChanged);
			// 
			// textBox2
			// 
			this->textBox2->Enabled = false;
			this->textBox2->Location = System::Drawing::Point(202, 82);
			this->textBox2->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->textBox2->Name = L"textBox2";
			this->textBox2->ReadOnly = true;
			this->textBox2->Size = System::Drawing::Size(100, 26);
			this->textBox2->TabIndex = 3;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(37, 78);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(141, 20);
			this->label2->TabIndex = 2;
			this->label2->Text = L"Cantidad de lúpulo";
			// 
			// textBox3
			// 
			this->textBox3->Enabled = false;
			this->textBox3->Location = System::Drawing::Point(202, 130);
			this->textBox3->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->textBox3->Name = L"textBox3";
			this->textBox3->ReadOnly = true;
			this->textBox3->Size = System::Drawing::Size(100, 26);
			this->textBox3->TabIndex = 5;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(37, 130);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(159, 20);
			this->label3->TabIndex = 4;
			this->label3->Text = L"Cantidad de levadura";
			// 
			// textBox4
			// 
			this->textBox4->Enabled = false;
			this->textBox4->Location = System::Drawing::Point(576, 32);
			this->textBox4->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->textBox4->Name = L"textBox4";
			this->textBox4->ReadOnly = true;
			this->textBox4->Size = System::Drawing::Size(100, 26);
			this->textBox4->TabIndex = 7;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(358, 32);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(151, 20);
			this->label4->TabIndex = 6;
			this->label4->Text = L"Cantidad de chapas";
			// 
			// textBox5
			// 
			this->textBox5->Enabled = false;
			this->textBox5->Location = System::Drawing::Point(576, 80);
			this->textBox5->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->textBox5->Name = L"textBox5";
			this->textBox5->ReadOnly = true;
			this->textBox5->Size = System::Drawing::Size(100, 26);
			this->textBox5->TabIndex = 9;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(358, 82);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(202, 20);
			this->label5->TabIndex = 8;
			this->label5->Text = L"Cantidad de botellas vacias";
			this->label5->Click += gcnew System::EventHandler(this, &frmVerDatosAlmacen::label5_Click);
			// 
			// textBox6
			// 
			this->textBox6->Enabled = false;
			this->textBox6->Location = System::Drawing::Point(576, 130);
			this->textBox6->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->textBox6->Name = L"textBox6";
			this->textBox6->ReadOnly = true;
			this->textBox6->Size = System::Drawing::Size(100, 26);
			this->textBox6->TabIndex = 11;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(358, 130);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(199, 20);
			this->label6->TabIndex = 10;
			this->label6->Text = L"Cantidad de botellas llenas";
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(78, 206);
			this->button1->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(120, 48);
			this->button1->TabIndex = 12;
			this->button1->Text = L"Añadir";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &frmVerDatosAlmacen::button1_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(269, 206);
			this->button2->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(120, 48);
			this->button2->TabIndex = 13;
			this->button2->Text = L"Retirar";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &frmVerDatosAlmacen::button2_Click);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(521, 206);
			this->button3->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(120, 48);
			this->button3->TabIndex = 14;
			this->button3->Text = L"Cancelar";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &frmVerDatosAlmacen::button3_Click);
			// 
			// frmVerDatosAlmacen
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(712, 285);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
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
			this->Name = L"frmVerDatosAlmacen";
			this->Text = L"frmVerDatosAlmacen";
			this->Load += gcnew System::EventHandler(this, &frmVerDatosAlmacen::frmVerDatosAlmacen_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void label5_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		frmAgregarCompra^ ventanaAgregarCompra = gcnew frmAgregarCompra(this->objEncargado);
		ventanaAgregarCompra->ShowDialog();
		GestorRegistroCompra^ objGestorRegistroCompra = gcnew GestorRegistroCompra();
		Inventario^ objInventario = objGestorRegistroCompra->CargarInventario();

		this->textBox1->Text = Convert::ToString(objInventario->cantMalta);
		this->textBox2->Text = Convert::ToString(objInventario->cantLupulo);
		this->textBox3->Text = Convert::ToString(objInventario->cantLevadura);
		this->textBox4->Text = Convert::ToString(objInventario->cantChapas);
		this->textBox5->Text = Convert::ToString(objInventario->cantBotellasVacias);
		this->textBox6->Text = Convert::ToString(objInventario->cantBotellasLlenas);
	}
	private: System::Void frmVerDatosAlmacen_Load(System::Object^ sender, System::EventArgs^ e) {
		GestorRegistroCompra^ objGestorRegistroCompra = gcnew GestorRegistroCompra();
		Inventario^ objInventario = objGestorRegistroCompra->CargarInventario();

		this->textBox1->Text = Convert::ToString(objInventario->cantMalta);
		this->textBox2->Text = Convert::ToString(objInventario->cantLupulo);
		this->textBox3->Text = Convert::ToString(objInventario->cantLevadura);
		this->textBox4->Text = Convert::ToString(objInventario->cantChapas);
		this->textBox5->Text = Convert::ToString(objInventario->cantBotellasVacias);
		this->textBox6->Text = Convert::ToString(objInventario->cantBotellasLlenas);

	}
	private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		GestorRegistroCompra^ objGestorRegistroCompra = gcnew GestorRegistroCompra();
		Inventario^ ActualInventario = objGestorRegistroCompra->CargarInventario();
		frmRetirarObjetos^ ventanaRetirarObjetos = gcnew frmRetirarObjetos(this->objEncargado, ActualInventario);
		ventanaRetirarObjetos->ShowDialog();

		
		Inventario^ objInventario = objGestorRegistroCompra->CargarInventario(); //se definió en el gestorRegistroCompra

		this->textBox1->Text = Convert::ToString(objInventario->cantMalta);
		this->textBox2->Text = Convert::ToString(objInventario->cantLupulo);
		this->textBox3->Text = Convert::ToString(objInventario->cantLevadura);
		this->textBox4->Text = Convert::ToString(objInventario->cantChapas);
		this->textBox5->Text = Convert::ToString(objInventario->cantBotellasVacias);
		this->textBox6->Text = Convert::ToString(objInventario->cantBotellasLlenas);
	}
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Close();
}
};
}
