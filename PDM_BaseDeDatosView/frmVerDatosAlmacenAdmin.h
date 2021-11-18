#pragma once
#include "frmRegistroComprasAdmin.h"
#include "frmRegistroRetirosAdmin.h"
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
	/// Resumen de frmVerDatosAlmacenAdmin
	/// </summary>
	public ref class frmVerDatosAlmacenAdmin : public System::Windows::Forms::Form
	{
	public:
		frmVerDatosAlmacenAdmin(void)
		{
			InitializeComponent();
			//
			//TODO: agregar código de constructor aquí
			//
		}
		frmVerDatosAlmacenAdmin(Encargado^ objEncargado)
		{
			InitializeComponent();
			this->objEncargado = objEncargado;
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
		/// </summary>
		~frmVerDatosAlmacenAdmin()
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
	private: System::Windows::Forms::TextBox^ textBox5;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Label^ label1;
	private: Encargado^ objEncargado;
	private: System::Windows::Forms::Button^ button3;

	protected:


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
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(387, 221);
			this->button2->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(283, 48);
			this->button2->TabIndex = 27;
			this->button2->Text = L"Ver registro de retiros de almacén";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &frmVerDatosAlmacenAdmin::button2_Click);
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(70, 221);
			this->button1->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(273, 48);
			this->button1->TabIndex = 26;
			this->button1->Text = L"Ver registro de compras";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &frmVerDatosAlmacenAdmin::button1_Click);
			// 
			// textBox6
			// 
			this->textBox6->Enabled = false;
			this->textBox6->Location = System::Drawing::Point(582, 146);
			this->textBox6->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->textBox6->Name = L"textBox6";
			this->textBox6->ReadOnly = true;
			this->textBox6->Size = System::Drawing::Size(100, 26);
			this->textBox6->TabIndex = 25;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(364, 146);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(199, 20);
			this->label6->TabIndex = 24;
			this->label6->Text = L"Cantidad de botellas llenas";
			// 
			// textBox5
			// 
			this->textBox5->Enabled = false;
			this->textBox5->Location = System::Drawing::Point(582, 96);
			this->textBox5->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->textBox5->Name = L"textBox5";
			this->textBox5->ReadOnly = true;
			this->textBox5->Size = System::Drawing::Size(100, 26);
			this->textBox5->TabIndex = 23;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(364, 98);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(202, 20);
			this->label5->TabIndex = 22;
			this->label5->Text = L"Cantidad de botellas vacias";
			// 
			// textBox4
			// 
			this->textBox4->Enabled = false;
			this->textBox4->Location = System::Drawing::Point(582, 48);
			this->textBox4->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->textBox4->Name = L"textBox4";
			this->textBox4->ReadOnly = true;
			this->textBox4->Size = System::Drawing::Size(100, 26);
			this->textBox4->TabIndex = 21;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(364, 48);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(151, 20);
			this->label4->TabIndex = 20;
			this->label4->Text = L"Cantidad de chapas";
			// 
			// textBox3
			// 
			this->textBox3->Enabled = false;
			this->textBox3->Location = System::Drawing::Point(208, 146);
			this->textBox3->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->textBox3->Name = L"textBox3";
			this->textBox3->ReadOnly = true;
			this->textBox3->Size = System::Drawing::Size(100, 26);
			this->textBox3->TabIndex = 19;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(43, 146);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(159, 20);
			this->label3->TabIndex = 18;
			this->label3->Text = L"Cantidad de levadura";
			// 
			// textBox2
			// 
			this->textBox2->Enabled = false;
			this->textBox2->Location = System::Drawing::Point(208, 98);
			this->textBox2->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->textBox2->Name = L"textBox2";
			this->textBox2->ReadOnly = true;
			this->textBox2->Size = System::Drawing::Size(100, 26);
			this->textBox2->TabIndex = 17;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(43, 94);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(141, 20);
			this->label2->TabIndex = 16;
			this->label2->Text = L"Cantidad de lúpulo";
			// 
			// textBox1
			// 
			this->textBox1->Enabled = false;
			this->textBox1->Location = System::Drawing::Point(208, 48);
			this->textBox1->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->textBox1->Name = L"textBox1";
			this->textBox1->ReadOnly = true;
			this->textBox1->Size = System::Drawing::Size(100, 26);
			this->textBox1->TabIndex = 15;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(43, 48);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(138, 20);
			this->label1->TabIndex = 14;
			this->label1->Text = L"Cantidad de malta";
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(277, 303);
			this->button3->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(162, 48);
			this->button3->TabIndex = 28;
			this->button3->Text = L"Cancelar";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &frmVerDatosAlmacenAdmin::button3_Click);
			// 
			// frmVerDatosAlmacenAdmin
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(731, 383);
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
			this->Name = L"frmVerDatosAlmacenAdmin";
			this->Text = L"frmVerDatosAlmacenAdmin";
			this->Load += gcnew System::EventHandler(this, &frmVerDatosAlmacenAdmin::frmVerDatosAlmacenAdmin_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		frmRegistroComprasAdmin^ ventanaRegistroComprasAdmin = gcnew frmRegistroComprasAdmin(this->objEncargado);
		ventanaRegistroComprasAdmin->ShowDialog();

		GestorRegistroCompra^ objGestorRegistroCompra = gcnew GestorRegistroCompra();
		Inventario^ objInventario = objGestorRegistroCompra->CargarInventario();

		this->textBox1->Text = Convert::ToString(objInventario->cantMalta);
		this->textBox2->Text = Convert::ToString(objInventario->cantLupulo);
		this->textBox3->Text = Convert::ToString(objInventario->cantLevadura);
		this->textBox4->Text = Convert::ToString(objInventario->cantChapas);
		this->textBox5->Text = Convert::ToString(objInventario->cantBotellasVacias);
		this->textBox6->Text = Convert::ToString(objInventario->cantBotellasLlenas);

	}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	frmRegistroRetirosAdmin^ ventanaRegistroRetirosAdmin = gcnew frmRegistroRetirosAdmin(this->objEncargado);
	ventanaRegistroRetirosAdmin->ShowDialog();

	GestorRegistroCompra^ objGestorRegistroCompra = gcnew GestorRegistroCompra();
	Inventario^ objInventario = objGestorRegistroCompra->CargarInventario();

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
private: System::Void frmVerDatosAlmacenAdmin_Load(System::Object^ sender, System::EventArgs^ e) {

	GestorRegistroCompra^ objGestorRegistroCompra = gcnew GestorRegistroCompra();
	Inventario^ objInventario = objGestorRegistroCompra->CargarInventario();

	this->textBox1->Text = Convert::ToString(objInventario->cantMalta);
	this->textBox2->Text = Convert::ToString(objInventario->cantLupulo);
	this->textBox3->Text = Convert::ToString(objInventario->cantLevadura);
	this->textBox4->Text = Convert::ToString(objInventario->cantChapas);
	this->textBox5->Text = Convert::ToString(objInventario->cantBotellasVacias);
	this->textBox6->Text = Convert::ToString(objInventario->cantBotellasLlenas);

}
};
}
