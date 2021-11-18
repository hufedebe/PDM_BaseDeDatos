#pragma once
#include "frmAgregarVentaAdmin.h"
#include "frmModificarVentaAdmin.h"

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
	/// Resumen de frmVentasAdmin
	/// </summary>
	public ref class frmVentasAdmin : public System::Windows::Forms::Form
	{
	public:
		frmVentasAdmin(void)
		{
			InitializeComponent();
			//
			//TODO: agregar código de constructor aquí
			//
		}
		frmVentasAdmin(Encargado^ objEncargado)
		{
			InitializeComponent();
			this->objEncargado = objEncargado;
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
		/// </summary>
		~frmVentasAdmin()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label3;
	protected:
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::DataGridView^ dataGridView1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column2;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column3;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column4;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button4;
	private: Encargado^ objEncargado;

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
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->Column1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column2 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column3 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column4 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->SuspendLayout();
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(33, 60);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(170, 20);
			this->label3->TabIndex = 11;
			this->label3->Text = L"Información de ventas:";
			// 
			// textBox1
			// 
			this->textBox1->Enabled = false;
			this->textBox1->Location = System::Drawing::Point(563, 32);
			this->textBox1->Name = L"textBox1";
			this->textBox1->ReadOnly = true;
			this->textBox1->Size = System::Drawing::Size(100, 26);
			this->textBox1->TabIndex = 10;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(481, 35);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(50, 20);
			this->label1->TabIndex = 9;
			this->label1->Text = L"Stock";
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(4) {
				this->Column1,
					this->Column2, this->Column3, this->Column4
			});
			this->dataGridView1->Location = System::Drawing::Point(30, 94);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->RowHeadersWidth = 62;
			this->dataGridView1->RowTemplate->Height = 28;
			this->dataGridView1->Size = System::Drawing::Size(665, 166);
			this->dataGridView1->TabIndex = 8;
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
			// button1
			// 
			this->button1->Location = System::Drawing::Point(56, 286);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(111, 56);
			this->button1->TabIndex = 12;
			this->button1->Text = L"Añadir venta";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &frmVentasAdmin::button1_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(201, 286);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(111, 56);
			this->button2->TabIndex = 13;
			this->button2->Text = L"Modificar venta";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &frmVentasAdmin::button2_Click);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(345, 286);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(111, 56);
			this->button3->TabIndex = 14;
			this->button3->Text = L"Eliminar venta";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &frmVentasAdmin::button3_Click);
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(552, 286);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(111, 56);
			this->button4->TabIndex = 15;
			this->button4->Text = L"Cancelar";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &frmVentasAdmin::button4_Click);
			// 
			// frmVentasAdmin
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(723, 374);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->dataGridView1);
			this->Name = L"frmVentasAdmin";
			this->Text = L"frmVentasAdmin";
			this->Load += gcnew System::EventHandler(this, &frmVentasAdmin::frmVentasAdmin_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		frmAgregarVentaAdmin^ ventanaAgregarVentaAdmin = gcnew frmAgregarVentaAdmin(this->objEncargado);
		ventanaAgregarVentaAdmin->ShowDialog();

		GestorRegistroProduccion^ objGestorRegistroProduccion = gcnew GestorRegistroProduccion();
		int stockNuevo = objGestorRegistroProduccion->devolverStockActual();
		this->textBox1->Text = Convert::ToString(stockNuevo);

		GestorRegistroVenta^ objGestorRegistroVenta = gcnew GestorRegistroVenta();
		List<RegistroVenta^>^ listaVenta = objGestorRegistroVenta->devolverListaVentas();
		MostrarGrilla(listaVenta);
	}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	int codigoVenta = Convert::ToInt32(this->dataGridView1->SelectedRows[0]->Cells[0]->Value->ToString());
	frmModificarVentaAdmin^ ventanaModificarVentaAdmin = gcnew frmModificarVentaAdmin(this->objEncargado, codigoVenta);
	ventanaModificarVentaAdmin->ShowDialog();

	GestorRegistroProduccion^ objGestorRegistroProduccion = gcnew GestorRegistroProduccion();
	int stockNuevo = objGestorRegistroProduccion->devolverStockActual();
	this->textBox1->Text = Convert::ToString(stockNuevo);

	GestorRegistroVenta^ objGestorRegistroVenta = gcnew GestorRegistroVenta();
	List<RegistroVenta^>^ listaVenta = objGestorRegistroVenta->devolverListaVentas();
	MostrarGrilla(listaVenta);
}
private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Close();
}
private: System::Void frmVentasAdmin_Load(System::Object^ sender, System::EventArgs^ e) {
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


private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
	int fila = this->dataGridView1->SelectedRows[0]->Index;
	int codigoVenta = Convert::ToInt32(this->dataGridView1->Rows[fila]->Cells[0]->Value);
	GestorRegistroVenta^ objGestorRegistroVenta = gcnew GestorRegistroVenta();
	objGestorRegistroVenta->eliminarVentaxxCodigo(codigoVenta);

	GestorRegistroProduccion^ objGestorRegistroProduccion = gcnew GestorRegistroProduccion();
	int stockNuevo = objGestorRegistroProduccion->devolverStockActual();
	this->textBox1->Text = Convert::ToString(stockNuevo);

	List<RegistroVenta^>^ listaVenta = objGestorRegistroVenta->devolverListaVentas();
	MostrarGrilla(listaVenta);
}

};
}
