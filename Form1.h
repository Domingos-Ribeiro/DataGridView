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
	private: System::Windows::Forms::Button^ btnEliminaTudo;

	private: System::Windows::Forms::GroupBox^ groupBox1;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::GroupBox^ groupBox2;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ txtEliminarNome;
	private: System::Windows::Forms::Button^ btnEliminarNomeSelecionado;
	private: System::Windows::Forms::Button^ btnEliminarUltimaLinha;
	private: System::Windows::Forms::Button^ btnEliminarPrimeiraLinha;

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
			this->btnEliminaTudo = (gcnew System::Windows::Forms::Button());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->txtEliminarNome = (gcnew System::Windows::Forms::TextBox());
			this->btnEliminarNomeSelecionado = (gcnew System::Windows::Forms::Button());
			this->btnEliminarUltimaLinha = (gcnew System::Windows::Forms::Button());
			this->btnEliminarPrimeiraLinha = (gcnew System::Windows::Forms::Button());
			this->label2 = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->groupBox1->SuspendLayout();
			this->groupBox2->SuspendLayout();
			this->SuspendLayout();
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(2) { this->Nome, this->Localidade });
			this->dataGridView1->Location = System::Drawing::Point(478, 12);
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
			this->btn_InicializarNomes->Location = System::Drawing::Point(16, 58);
			this->btn_InicializarNomes->Name = L"btn_InicializarNomes";
			this->btn_InicializarNomes->Size = System::Drawing::Size(128, 23);
			this->btn_InicializarNomes->TabIndex = 1;
			this->btn_InicializarNomes->Text = L"Adicionar 2 Registos";
			this->btn_InicializarNomes->UseVisualStyleBackColor = true;
			this->btn_InicializarNomes->Click += gcnew System::EventHandler(this, &Form1::btn_InicializarNomes_Click);
			// 
			// btnContar
			// 
			this->btnContar->Location = System::Drawing::Point(16, 87);
			this->btnContar->Name = L"btnContar";
			this->btnContar->Size = System::Drawing::Size(128, 26);
			this->btnContar->TabIndex = 2;
			this->btnContar->Text = L"Contar";
			this->btnContar->UseVisualStyleBackColor = true;
			this->btnContar->Click += gcnew System::EventHandler(this, &Form1::btnContar_Click);
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(159, 88);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(128, 25);
			this->button1->TabIndex = 3;
			this->button1->Text = L"Localizar nome";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Form1::button1_Click);
			// 
			// txtLocalizar
			// 
			this->txtLocalizar->Location = System::Drawing::Point(159, 61);
			this->txtLocalizar->Name = L"txtLocalizar";
			this->txtLocalizar->Size = System::Drawing::Size(128, 20);
			this->txtLocalizar->TabIndex = 4;
			// 
			// btnContarNome
			// 
			this->btnContarNome->Location = System::Drawing::Point(304, 90);
			this->btnContarNome->Name = L"btnContarNome";
			this->btnContarNome->Size = System::Drawing::Size(128, 23);
			this->btnContarNome->TabIndex = 5;
			this->btnContarNome->Text = L"Contar Nome";
			this->btnContarNome->UseVisualStyleBackColor = true;
			this->btnContarNome->Click += gcnew System::EventHandler(this, &Form1::btnContarNome_Click);
			// 
			// txtContarNome
			// 
			this->txtContarNome->Location = System::Drawing::Point(304, 61);
			this->txtContarNome->Name = L"txtContarNome";
			this->txtContarNome->Size = System::Drawing::Size(128, 20);
			this->txtContarNome->TabIndex = 6;
			// 
			// btnEliminaTudo
			// 
			this->btnEliminaTudo->Location = System::Drawing::Point(304, 63);
			this->btnEliminaTudo->Name = L"btnEliminaTudo";
			this->btnEliminaTudo->Size = System::Drawing::Size(128, 23);
			this->btnEliminaTudo->TabIndex = 7;
			this->btnEliminaTudo->Text = L"Eliminar Tudo";
			this->btnEliminaTudo->UseVisualStyleBackColor = true;
			this->btnEliminaTudo->Click += gcnew System::EventHandler(this, &Form1::btnEliminaTudo_Click);
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->label1);
			this->groupBox1->Controls->Add(this->btnContar);
			this->groupBox1->Controls->Add(this->btn_InicializarNomes);
			this->groupBox1->Controls->Add(this->txtLocalizar);
			this->groupBox1->Controls->Add(this->btnContarNome);
			this->groupBox1->Controls->Add(this->button1);
			this->groupBox1->Controls->Add(this->txtContarNome);
			this->groupBox1->Location = System::Drawing::Point(12, 12);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(448, 128);
			this->groupBox1->TabIndex = 8;
			this->groupBox1->TabStop = false;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(146, 16);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(204, 13);
			this->label1->TabIndex = 7;
			this->label1->Text = L"PRIMEIRA PARTE DO EXERCÍCIO";
			// 
			// groupBox2
			// 
			this->groupBox2->Controls->Add(this->txtEliminarNome);
			this->groupBox2->Controls->Add(this->btnEliminarNomeSelecionado);
			this->groupBox2->Controls->Add(this->btnEliminarUltimaLinha);
			this->groupBox2->Controls->Add(this->btnEliminarPrimeiraLinha);
			this->groupBox2->Controls->Add(this->label2);
			this->groupBox2->Controls->Add(this->btnEliminaTudo);
			this->groupBox2->Location = System::Drawing::Point(12, 208);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Size = System::Drawing::Size(448, 127);
			this->groupBox2->TabIndex = 9;
			this->groupBox2->TabStop = false;
			// 
			// txtEliminarNome
			// 
			this->txtEliminarNome->Location = System::Drawing::Point(16, 98);
			this->txtEliminarNome->Multiline = true;
			this->txtEliminarNome->Name = L"txtEliminarNome";
			this->txtEliminarNome->Size = System::Drawing::Size(128, 23);
			this->txtEliminarNome->TabIndex = 11;
			// 
			// btnEliminarNomeSelecionado
			// 
			this->btnEliminarNomeSelecionado->Location = System::Drawing::Point(159, 98);
			this->btnEliminarNomeSelecionado->Name = L"btnEliminarNomeSelecionado";
			this->btnEliminarNomeSelecionado->Size = System::Drawing::Size(273, 23);
			this->btnEliminarNomeSelecionado->TabIndex = 10;
			this->btnEliminarNomeSelecionado->Text = L"Eliminar Nome Digitado na TextBox";
			this->btnEliminarNomeSelecionado->UseVisualStyleBackColor = true;
			// 
			// btnEliminarUltimaLinha
			// 
			this->btnEliminarUltimaLinha->Location = System::Drawing::Point(159, 63);
			this->btnEliminarUltimaLinha->Name = L"btnEliminarUltimaLinha";
			this->btnEliminarUltimaLinha->Size = System::Drawing::Size(128, 23);
			this->btnEliminarUltimaLinha->TabIndex = 9;
			this->btnEliminarUltimaLinha->Text = L"Eliminar a Ultima Linha";
			this->btnEliminarUltimaLinha->UseVisualStyleBackColor = true;
			this->btnEliminarUltimaLinha->Click += gcnew System::EventHandler(this, &Form1::btnEliminarUltimaLinha_Click);
			// 
			// btnEliminarPrimeiraLinha
			// 
			this->btnEliminarPrimeiraLinha->Location = System::Drawing::Point(16, 63);
			this->btnEliminarPrimeiraLinha->Name = L"btnEliminarPrimeiraLinha";
			this->btnEliminarPrimeiraLinha->Size = System::Drawing::Size(128, 23);
			this->btnEliminarPrimeiraLinha->TabIndex = 8;
			this->btnEliminarPrimeiraLinha->Text = L"Eliminar a 1ª Linha";
			this->btnEliminarPrimeiraLinha->UseVisualStyleBackColor = true;
			this->btnEliminarPrimeiraLinha->Click += gcnew System::EventHandler(this, &Form1::btnEliminarPrimeiraLinha_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(146, 16);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(204, 13);
			this->label2->TabIndex = 7;
			this->label2->Text = L"SEGUNDA PARTE DO EXERCÍCIO";
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(732, 352);
			this->Controls->Add(this->groupBox2);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->dataGridView1);
			this->Name = L"Form1";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Exercícios com Data Grid Views";
			this->Load += gcnew System::EventHandler(this, &Form1::Form1_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->groupBox2->ResumeLayout(false);
			this->groupBox2->PerformLayout();
			this->ResumeLayout(false);

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
private: System::Void Form1_Load(System::Object^ sender, System::EventArgs^ e) 
{

}


private: System::Void btnEliminarPrimeiraLinha_Click(System::Object^ sender, System::EventArgs^ e) 
{
	dataGridView1->Rows->RemoveAt(0);
}


private: System::Void btnEliminaTudo_Click(System::Object^ sender, System::EventArgs^ e) 
{
	dataGridView1->Rows->Clear();
}


private: System::Void btnEliminarUltimaLinha_Click(System::Object^ sender, System::EventArgs^ e) 
{
	//Ainda não está pronto------ Fazer o exercicio 16
	//dataGridView1->Rows->RemoveAt(DataGridViewCell->)
}


};
}
