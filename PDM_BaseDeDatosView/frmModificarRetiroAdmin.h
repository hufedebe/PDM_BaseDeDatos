#pragma once

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
	/// Resumen de frmModificarRetiroAdmin
	/// </summary>
	public ref class frmModificarRetiroAdmin : public System::Windows::Forms::Form
	{
	public:
		frmModificarRetiroAdmin(void)
		{
			InitializeComponent();
			//
			//TODO: agregar código de constructor aquí
			//
		}
		frmModificarRetiroAdmin(Encargado^ objEncargado, int codigoRetiro)
		{
			InitializeComponent();
			this->objEncargado = objEncargado;
			this->codigoRetiro = codigoRetiro;
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
		/// </summary>
		~frmModificarRetiroAdmin()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ button2;
	protected:
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::TextBox^ textBox8;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::TextBox^ textBox7;
	private: System::Windows::Forms::Label^ label7;
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
	private: int codigoRetiro;
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
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->textBox8 = (gcnew System::Windows::Forms::TextBox());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->textBox7 = (gcnew System::Windows::Forms::TextBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
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
			this->timer1 = (gcnew System::Windows::Forms::Timer(this->components));
			this->SuspendLayout();
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(330, 298);
			this->button2->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(114, 52);
			this->button2->TabIndex = 53;
			this->button2->Text = L"Cancelar";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &frmModificarRetiroAdmin::button2_Click);
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(140, 298);
			this->button1->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(114, 52);
			this->button1->TabIndex = 52;
			this->button1->Text = L"Modificar retiro";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &frmModificarRetiroAdmin::button1_Click);
			// 
			// textBox8
			// 
			this->textBox8->Enabled = false;
			this->textBox8->Location = System::Drawing::Point(459, 212);
			this->textBox8->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->textBox8->Name = L"textBox8";
			this->textBox8->ReadOnly = true;
			this->textBox8->Size = System::Drawing::Size(100, 26);
			this->textBox8->TabIndex = 51;
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(280, 218);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(164, 20);
			this->label8->TabIndex = 50;
			this->label8->Text = L"Código del encargado";
			// 
			// textBox7
			// 
			this->textBox7->Enabled = false;
			this->textBox7->Location = System::Drawing::Point(459, 158);
			this->textBox7->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->textBox7->Name = L"textBox7";
			this->textBox7->ReadOnly = true;
			this->textBox7->Size = System::Drawing::Size(100, 26);
			this->textBox7->TabIndex = 49;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(335, 162);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(54, 20);
			this->label7->TabIndex = 48;
			this->label7->Text = L"Fecha";
			// 
			// textBox6
			// 
			this->textBox6->Location = System::Drawing::Point(459, 50);
			this->textBox6->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(100, 26);
			this->textBox6->TabIndex = 47;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(335, 57);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(64, 20);
			this->label6->TabIndex = 46;
			this->label6->Text = L"Chapas";
			// 
			// textBox5
			// 
			this->textBox5->Location = System::Drawing::Point(459, 102);
			this->textBox5->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(100, 26);
			this->textBox5->TabIndex = 45;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(335, 105);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(66, 20);
			this->label5->TabIndex = 44;
			this->label5->Text = L"Botellas";
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(119, 212);
			this->textBox4->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(100, 26);
			this->textBox4->TabIndex = 43;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(38, 219);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(75, 20);
			this->label4->TabIndex = 42;
			this->label4->Text = L"Levadura";
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(119, 158);
			this->textBox3->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(100, 26);
			this->textBox3->TabIndex = 41;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(50, 164);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(57, 20);
			this->label3->TabIndex = 40;
			this->label3->Text = L"Lúpulo";
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(119, 102);
			this->textBox2->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(100, 26);
			this->textBox2->TabIndex = 39;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(50, 110);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(48, 20);
			this->label2->TabIndex = 38;
			this->label2->Text = L"Malta";
			// 
			// textBox1
			// 
			this->textBox1->Enabled = false;
			this->textBox1->Location = System::Drawing::Point(211, 52);
			this->textBox1->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->textBox1->Name = L"textBox1";
			this->textBox1->ReadOnly = true;
			this->textBox1->Size = System::Drawing::Size(100, 26);
			this->textBox1->TabIndex = 37;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(50, 56);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(155, 20);
			this->label1->TabIndex = 36;
			this->label1->Text = L"Código de operación";
			// 
			// timer1
			// 
			this->timer1->Enabled = true;
			this->timer1->Tick += gcnew System::EventHandler(this, &frmModificarRetiroAdmin::timer1_Tick);
			// 
			// frmModificarRetiroAdmin
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(614, 390);
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
			this->Name = L"frmModificarRetiroAdmin";
			this->Text = L"frmModificarRetiroAdmin";
			this->Load += gcnew System::EventHandler(this, &frmModificarRetiroAdmin::frmModificarRetiroAdmin_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
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

	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		int codigo = Convert::ToInt32(this->textBox1->Text);
		float cantMalta = Convert::ToDouble(this->textBox2->Text);
		float cantLupulo = Convert::ToDouble(this->textBox3->Text);
		float cantLevadura = Convert::ToDouble(this->textBox4->Text);
		int cantChapas = Convert::ToInt32(this->textBox5->Text);
		int cantBotellas = Convert::ToInt32(this->textBox6->Text);
		String^ fecha = this->textBox7->Text;

		int codigoEncargado = Convert::ToInt32(this->textBox8->Text);
		GestorEncargado^ objGestorEncargado = gcnew GestorEncargado();
		Encargado^ objEncargado = objGestorEncargado->devolverEncargadoxCodigo(codigoEncargado);

		RegistroRetiro^ objRegistroRetiro = gcnew RegistroRetiro(codigo, fecha, cantMalta, cantLupulo, cantLevadura, cantChapas, cantBotellas, objEncargado);

		bool hayNegativo = (cantMalta < 0 || cantLupulo < 0 || cantLevadura < 0 || cantBotellas < 0 || cantChapas < 0);
		bool hayDecimal = (cantBotellas != (int)cantBotellas || cantChapas != (int)cantChapas);
		bool fullCero = (cantMalta == 0 && cantLupulo == 0 && cantLevadura == 0 && cantBotellas == 0 && cantChapas == 0);
		if (hayNegativo || hayDecimal) {
			MessageBox::Show("AL MENOS UN CAMPO INCORRECTO");
		}
		else if (fullCero) {
			MessageBox::Show("TODOS LOS CAMPOS VACÍOS");
		}
		else {
			GestorRegistroRetiro^ objGestorRegistroRetiro = gcnew GestorRegistroRetiro();
			objGestorRegistroRetiro->modificarRetiro(codigoRetiro, objRegistroRetiro,this->objEncargado->codigo);
			this->Close();
		}

	}
	private: System::Void frmModificarRetiroAdmin_Load(System::Object^ sender, System::EventArgs^ e) {
		GestorRegistroRetiro^ objGestorRegistroRetiro = gcnew GestorRegistroRetiro();
		RegistroRetiro^ objRegistroRetiroAnt = objGestorRegistroRetiro->devuelveRetiroxCodigo(this->codigoRetiro);
		this->textBox1->Text = Convert::ToString(objRegistroRetiroAnt->codigo);
		this->textBox2->Text = Convert::ToString(objRegistroRetiroAnt->cantMalta);
		this->textBox3->Text = Convert::ToString(objRegistroRetiroAnt->cantLupulo);
		this->textBox4->Text = Convert::ToString(objRegistroRetiroAnt->cantLevadura);
		this->textBox5->Text = Convert::ToString(objRegistroRetiroAnt->cantChapas);
		this->textBox6->Text = Convert::ToString(objRegistroRetiroAnt->cantBotellasVacias);
		this->textBox7->Text = Convert::ToString(objRegistroRetiroAnt->fecha);
		this->textBox8->Text = Convert::ToString(this->objEncargado->codigo);
	}
};
}
