#pragma once

namespace ProjetoCLR {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Form1
	/// </summary>
	public ref class Form1 : public System::Windows::Forms::Form
	{
	public:
		Form1(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~Form1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::DataGridView^ dataGridView1;
	protected:
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Nome;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Localidade;
	private: System::Windows::Forms::Button^ btn_InicializarNomes;
	private: System::Windows::Forms::Button^ btnContar;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::TextBox^ txtLocalizar;
	private: System::Windows::Forms::Button^ btnContarNome;
	private: System::Windows::Forms::TextBox^ txtContarNome;

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->Nome = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Localidade = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->btn_InicializarNomes = (gcnew System::Windows::Forms::Button());
			this->btnContar = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->txtLocalizar = (gcnew System::Windows::Forms::TextBox());
			this->btnContarNome = (gcnew System::Windows::Forms::Button());
			this->txtContarNome = (gcnew System::Windows::Forms::TextBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->SuspendLayout();
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(2) { this->Nome, this->Localidade });
			this->dataGridView1->Location = System::Drawing::Point(420, 40);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->Size = System::Drawing::Size(242, 323);
			this->dataGridView1->TabIndex = 0;
			// 
			// Nome
			// 
			this->Nome->HeaderText = L"Nome";
			this->Nome->Name = L"Nome";
			// 
			// Localidade
			// 
			this->Localidade->HeaderText = L"Localidade";
			this->Localidade->Name = L"Localidade";
			// 
			// btn_InicializarNomes
			// 
			this->btn_InicializarNomes->Location = System::Drawing::Point(100, 50);
			this->btn_InicializarNomes->Name = L"btn_InicializarNomes";
			this->btn_InicializarNomes->Size = System::Drawing::Size(128, 23);
			this->btn_InicializarNomes->TabIndex = 1;
			this->btn_InicializarNomes->Text = L"Adicionar 2 Registos";
			this->btn_InicializarNomes->UseVisualStyleBackColor = true;
			this->btn_InicializarNomes->Click += gcnew System::EventHandler(this, &Form1::btn_InicializarNomes_Click);
			// 
			// btnContar
			// 
			this->btnContar->Location = System::Drawing::Point(100, 93);
			this->btnContar->Name = L"btnContar";
			this->btnContar->Size = System::Drawing::Size(128, 26);
			this->btnContar->TabIndex = 2;
			this->btnContar->Text = L"Contar";
			this->btnContar->UseVisualStyleBackColor = true;
			this->btnContar->Click += gcnew System::EventHandler(this, &Form1::btnContar_Click);
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(100, 166);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(128, 25);
			this->button1->TabIndex = 3;
			this->button1->Text = L"Localizar nome";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Form1::button1_Click);
			// 
			// txtLocalizar
			// 
			this->txtLocalizar->Location = System::Drawing::Point(100, 140);
			this->txtLocalizar->Name = L"txtLocalizar";
			this->txtLocalizar->Size = System::Drawing::Size(128, 20);
			this->txtLocalizar->TabIndex = 4;
			// 
			// btnContarNome
			// 
			this->btnContarNome->Location = System::Drawing::Point(100, 264);
			this->btnContarNome->Name = L"btnContarNome";
			this->btnContarNome->Size = System::Drawing::Size(128, 23);
			this->btnContarNome->TabIndex = 5;
			this->btnContarNome->Text = L"Contar Nome";
			this->btnContarNome->UseVisualStyleBackColor = true;
			this->btnContarNome->Click += gcnew System::EventHandler(this, &Form1::btnContarNome_Click);
			// 
			// txtContarNome
			// 
			this->txtContarNome->Location = System::Drawing::Point(100, 293);
			this->txtContarNome->Name = L"txtContarNome";
			this->txtContarNome->Size = System::Drawing::Size(128, 20);
			this->txtContarNome->TabIndex = 6;
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(687, 415);
			this->Controls->Add(this->txtContarNome);
			this->Controls->Add(this->btnContarNome);
			this->Controls->Add(this->txtLocalizar);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->btnContar);
			this->Controls->Add(this->btn_InicializarNomes);
			this->Controls->Add(this->dataGridView1);
			this->Name = L"Form1";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Form1";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void btn_InicializarNomes_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		dataGridView1->Rows->Add("Ana", "Braga");
		dataGridView1->Rows->Add("Manel", "Porto");
	}
	private: System::Void btnContar_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		int nRegistos = dataGridView1->Rows->Count -1;
		MessageBox::Show(Convert::ToString(nRegistos));
	}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) 
	{
	String^ nome = txtLocalizar->Text;
	int numeroLinhas = dataGridView1->Rows->Count -1;
	bool encontrado = false;

	for (size_t i = 0; i < numeroLinhas; i++)
	{

		if (Convert::ToString(dataGridView1->Rows[i]->Cells[0]->Value) == nome)
		{
			encontrado = true;
		}
	}



	if (encontrado)
	{
		MessageBox::Show("O Nome Existe");
	}
	else
	{
		MessageBox::Show("O Nome Não Existe");
	}

		
	}
private: System::Void btnContarNome_Click(System::Object^ sender, System::EventArgs^ e) 
{
	int nome = 0;
	int numeroLinhas = dataGridView1->Rows->Count - 1;


	for (size_t i = 0; i < numeroLinhas; i++)
	{

		if (Convert::ToString(dataGridView1->Rows[i]->Cells[0]->Value) == txtContarNome->Text)
		{
			nome = nome++;
		}
	}

	MessageBox::Show("O Nome foi encontrado " + nome + " vezes.");
}
};
}
