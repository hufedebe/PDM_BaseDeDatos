#pragma once
#include "frmAgregarCompra.h"
#include "frmModificarCompraAdmin.h"

namespace PDMBaseDeDatosView {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace PDM_BaseDeDatosModel;
	using namespace PDM_BaseDeDatosController;

	/// <summary>
	/// Resumen de frmRegistroComprasAdmin
	/// </summary>
	public ref class frmRegistroComprasAdmin : public System::Windows::Forms::Form
	{
	public:
		frmRegistroComprasAdmin(void)
		{
			InitializeComponent();
			//
			//TODO: agregar código de constructor aquí
			//
		}
		frmRegistroComprasAdmin(Encargado^ objEncargado)
		{
			InitializeComponent();
			this->objEncargado = objEncargado;
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
		/// </summary>
		~frmRegistroComprasAdmin()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::DataGridView^ dataGridView1;
	protected:
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Label^ label1;
	private: Encargado^ objEncargado;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column2;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column3;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column4;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column5;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column6;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column7;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column8;

























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
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->Column1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column2 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column3 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column4 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column5 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column6 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column7 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column8 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->SuspendLayout();
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(8) {
				this->Column1,
					this->Column2, this->Column3, this->Column4, this->Column5, this->Column6, this->Column7, this->Column8
			});
			this->dataGridView1->Location = System::Drawing::Point(38, 72);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->RowHeadersWidth = 62;
			this->dataGridView1->RowTemplate->Height = 28;
			this->dataGridView1->Size = System::Drawing::Size(965, 248);
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
			this->Column3->HeaderText = L"Código del encargado";
			this->Column3->MinimumWidth = 8;
			this->Column3->Name = L"Column3";
			this->Column3->Width = 150;
			// 
			// Column4
			// 
			this->Column4->HeaderText = L"Malta (kg)";
			this->Column4->MinimumWidth = 8;
			this->Column4->Name = L"Column4";
			this->Column4->Width = 110;
			// 
			// Column5
			// 
			this->Column5->HeaderText = L"Lupulo (kg)";
			this->Column5->MinimumWidth = 8;
			this->Column5->Name = L"Column5";
			this->Column5->Width = 110;
			// 
			// Column6
			// 
			this->Column6->HeaderText = L"Levadura (kg)";
			this->Column6->MinimumWidth = 8;
			this->Column6->Name = L"Column6";
			this->Column6->Width = 110;
			// 
			// Column7
			// 
			this->Column7->HeaderText = L"Chapas (unid.)";
			this->Column7->MinimumWidth = 8;
			this->Column7->Name = L"Column7";
			this->Column7->Width = 110;
			// 
			// Column8
			// 
			this->Column8->HeaderText = L"Botellas (unid.)";
			this->Column8->MinimumWidth = 8;
			this->Column8->Name = L"Column8";
			this->Column8->Width = 110;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(85, 354);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(141, 46);
			this->button1->TabIndex = 1;
			this->button1->Text = L"Añadir compra";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &frmRegistroComprasAdmin::button1_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(321, 354);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(158, 46);
			this->button2->TabIndex = 2;
			this->button2->Text = L"Modificar compra";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &frmRegistroComprasAdmin::button2_Click);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(565, 354);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(146, 46);
			this->button3->TabIndex = 3;
			this->button3->Text = L"Eliminar compra";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &frmRegistroComprasAdmin::button3_Click);
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(815, 354);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(141, 46);
			this->button4->TabIndex = 4;
			this->button4->Text = L"Atrás";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &frmRegistroComprasAdmin::button4_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(34, 35);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(156, 20);
			this->label1->TabIndex = 5;
			this->label1->Text = L"Registro de compras";
			// 
			// frmRegistroComprasAdmin
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1042, 448);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->dataGridView1);
			this->Name = L"frmRegistroComprasAdmin";
			this->Text = L"frmRegistroComprasAdmin";
			this->Load += gcnew System::EventHandler(this, &frmRegistroComprasAdmin::frmRegistroComprasAdmin_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		frmAgregarCompra^ ventanaAgregarCompra = gcnew frmAgregarCompra(this->objEncargado);
		ventanaAgregarCompra->ShowDialog();
		GestorRegistroCompra^ objGestorRegistroCompra = gcnew GestorRegistroCompra();
		List<RegistroCompra^>^ listaCompras = objGestorRegistroCompra->devuelveTodasCompras();
		MostrarGrilla(listaCompras);
	}
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		int codigoCompra = Convert::ToInt32(this->dataGridView1->SelectedRows[0]->Cells[0]->Value->ToString());
		frmModificarCompraAdmin^ ventanaModificarCompraAdmin = gcnew frmModificarCompraAdmin(this->objEncargado, codigoCompra);
		ventanaModificarCompraAdmin->ShowDialog();

		GestorRegistroCompra^ objGestorRegistroCompra = gcnew GestorRegistroCompra();
		List<RegistroCompra^>^ listaCompras = objGestorRegistroCompra->devuelveTodasCompras();
		MostrarGrilla(listaCompras);
	}
	private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
	}
	
	private: void MostrarGrilla(List<RegistroCompra^>^ listaCompras) {
		this->dataGridView1->Rows->Clear();
		for (int i = 0; i < listaCompras->Count; i++) {
			RegistroCompra^ objRegistroCompra = listaCompras[i];
			array<String^>^ objLinea = gcnew array<String^>(8);
			objLinea[0] = Convert::ToString(objRegistroCompra->codigo);
			objLinea[1] = objRegistroCompra->fecha;
			objLinea[2] = Convert::ToString(objRegistroCompra->objEncargado->codigo);
			objLinea[3] = Convert::ToString(objRegistroCompra->cantMalta);
			objLinea[4] = Convert::ToString(objRegistroCompra->cantLupulo);
			objLinea[5] = Convert::ToString(objRegistroCompra->cantLevadura);
			objLinea[6] = Convert::ToString(objRegistroCompra->cantChapas);
			objLinea[7] = Convert::ToString(objRegistroCompra->cantBotellasVacias);
			this->dataGridView1->Rows->Add(objLinea);
		}
	}


	private: System::Void frmRegistroComprasAdmin_Load(System::Object^ sender, System::EventArgs^ e) {
		GestorRegistroCompra^ objGestorRegistroCompra = gcnew GestorRegistroCompra();
		List<RegistroCompra^>^ listaCompras = objGestorRegistroCompra->devuelveTodasCompras();
		MostrarGrilla(listaCompras);

	}
	private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
		int codigoCompra = Convert::ToInt32(this->dataGridView1->SelectedRows[0]->Cells[0]->Value->ToString());
		GestorRegistroCompra^ objGestorRegistroCompra = gcnew GestorRegistroCompra();
		objGestorRegistroCompra->eliminarCompra(codigoCompra);
		List<RegistroCompra^>^ listaCompras = objGestorRegistroCompra->devuelveTodasCompras();
		MostrarGrilla(listaCompras);
	}
};
}
