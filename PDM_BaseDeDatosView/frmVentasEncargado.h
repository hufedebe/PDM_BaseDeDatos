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
	/// Resumen de frmVentasEncargado
	/// </summary>
	public ref class frmVentasEncargado : public System::Windows::Forms::Form
	{
	public:
		frmVentasEncargado(void)
		{
			InitializeComponent();
			//
			//TODO: agregar código de constructor aquí
			//
		}
		frmVentasEncargado(Encargado^ objEncargado)
		{
			InitializeComponent();
			this->objEncargado = objEncargado;
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
		/// </summary>
		~frmVentasEncargado()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::DataGridView^ dataGridView1;
	protected:
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column2;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column3;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column4;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Label^ label3;
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
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->Column1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column2 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column3 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column4 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->timer1 = (gcnew System::Windows::Forms::Timer(this->components));
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->SuspendLayout();
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(4) {
				this->Column1,
					this->Column2, this->Column3, this->Column4
			});
			this->dataGridView1->Location = System::Drawing::Point(19, 92);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->RowHeadersWidth = 62;
			this->dataGridView1->RowTemplate->Height = 28;
			this->dataGridView1->Size = System::Drawing::Size(665, 166);
			this->dataGridView1->TabIndex = 0;
			// 
			// Column1
			// 
			this->Column1->HeaderText = L"Código";
			this->Column1->MinimumWidth = 8;
			this->Column1->Name = L"Column1";
			this->Column1->Width = 150;
			// 
			// Column2
			// 
			this->Column2->HeaderText = L"Fecha";
			this->Column2->MinimumWidth = 8;
			this->Column2->Name = L"Column2";
			this->Column2->Width = 150;
			// 
			// Column3
			// 
			this->Column3->HeaderText = L"Cantidad";
			this->Column3->MinimumWidth = 8;
			this->Column3->Name = L"Column3";
			this->Column3->Width = 150;
			// 
			// Column4
			// 
			this->Column4->HeaderText = L"Código del encargado";
			this->Column4->MinimumWidth = 8;
			this->Column4->Name = L"Column4";
			this->Column4->Width = 150;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(470, 33);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(50, 20);
			this->label1->TabIndex = 1;
			this->label1->Text = L"Stock";
			// 
			// textBox1
			// 
			this->textBox1->Enabled = false;
			this->textBox1->Location = System::Drawing::Point(552, 30);
			this->textBox1->Name = L"textBox1";
			this->textBox1->ReadOnly = true;
			this->textBox1->Size = System::Drawing::Size(100, 26);
			this->textBox1->TabIndex = 2;
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(198, 299);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(140, 26);
			this->textBox2->TabIndex = 4;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(50, 302);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(142, 20);
			this->label2->TabIndex = 3;
			this->label2->Text = L"Cantidad a vender:";
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(365, 289);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(111, 43);
			this->button1->TabIndex = 5;
			this->button1->Text = L"Agregar";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &frmVentasEncargado::button1_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(541, 289);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(111, 43);
			this->button2->TabIndex = 6;
			this->button2->Text = L"Cancelar";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &frmVentasEncargado::button2_Click);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(22, 58);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(170, 20);
			this->label3->TabIndex = 7;
			this->label3->Text = L"Información de ventas:";
			// 
			// timer1
			// 
			this->timer1->Enabled = true;
			this->timer1->Tick += gcnew System::EventHandler(this, &frmVentasEncargado::timer1_Tick);
			// 
			// frmVentasEncargado
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(737, 381);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->dataGridView1);
			this->Name = L"frmVentasEncargado";
			this->Text = L"frmVentasEncargado";
			this->Load += gcnew System::EventHandler(this, &frmVentasEncargado::frmVentasEncargado_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
	}
private: System::Void frmVentasEncargado_Load(System::Object^ sender, System::EventArgs^ e) {
	GestorRegistroVenta^ objGestorRegistroVenta = gcnew GestorRegistroVenta();
	List<RegistroVenta^>^ listaVenta = objGestorRegistroVenta->devolverListaVentas();
	MostrarGrilla(listaVenta);

	GestorRegistroProduccion^ objGestorRegistroProduccion = gcnew GestorRegistroProduccion();
	int stockTotal = objGestorRegistroProduccion->devolverStockActual();

	this->textBox1->Text = Convert::ToString(stockTotal);
}

private: void MostrarGrilla(List<RegistroVenta^>^ listaVentas) {
	this->dataGridView1->Rows->Clear();
	for (int i = 0; i < listaVentas->Count; i++) {
		RegistroVenta^ objRegistroVenta = listaVentas[i];
		array<String^>^ fila = gcnew array<String^>(4);
		fila[0] = Convert::ToString(objRegistroVenta->codigo);
		fila[1] = objRegistroVenta->fecha;
		fila[2] = Convert::ToString(objRegistroVenta->cantVendida);
		fila[3] = Convert::ToString(objRegistroVenta->objEncargado->codigo);
		this->dataGridView1->Rows->Add(fila);
	}
}

private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	int cantAVender = Convert::ToInt32(this->textBox2->Text);
	GestorRegistroVenta^ objGestorRegistroVenta = gcnew GestorRegistroVenta();

	int codigoVenta = objGestorRegistroVenta->darCodigoRegistro();
	// Insertar venta en la base de datos
	objGestorRegistroVenta->insertarVenta(codigoVenta, fecha_Ventas, cantAVender, this->objEncargado->codigo);
	GestorRegistroProduccion^ objGestorRegistroProduccion = gcnew GestorRegistroProduccion();
	int nuevoStock = objGestorRegistroProduccion->devolverStockActual();
	this->textBox1->Text = Convert::ToString(nuevoStock);

	List<RegistroVenta^>^ listaVenta = objGestorRegistroVenta->devolverListaVentas();
	MostrarGrilla(listaVenta);

	this->textBox2->Text = "";
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
	fecha_Ventas = Convert::ToString(dia) + "/" + Convert::ToString(mes) + "/" + Convert::ToString(año);
}

};
}
