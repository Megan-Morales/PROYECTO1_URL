#pragma once

namespace Proyecto1MeganMorales1221120 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de Playlist
	/// </summary>
	public ref class Playlist : public System::Windows::Forms::Form
	{
	public:
		Playlist(void)
		{
			InitializeComponent();
			//
			//TODO: agregar código de constructor aquí
			//
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
		/// </summary>
		~Playlist()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::OpenFileDialog^ ofdImportar;
	protected:
	private: System::Windows::Forms::Button^ button1;

	private: System::Windows::Forms::GroupBox^ groupBox1;
	private: System::Windows::Forms::ListBox^ listPlaylist;
	private: System::Windows::Forms::ListBox^ listFila;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Button^ btnCancion;

	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Button^ btnArtista;
	private: System::Windows::Forms::Button^ btnDescendente;

	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Button^ btnAscendente;

	private: System::Windows::Forms::GroupBox^ groupBox2;
	private: System::Windows::Forms::Button^ btnAcancion;

	private: System::Windows::Forms::Label^ label5;


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
			this->ofdImportar = (gcnew System::Windows::Forms::OpenFileDialog());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->listPlaylist = (gcnew System::Windows::Forms::ListBox());
			this->listFila = (gcnew System::Windows::Forms::ListBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->btnCancion = (gcnew System::Windows::Forms::Button());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->btnArtista = (gcnew System::Windows::Forms::Button());
			this->btnDescendente = (gcnew System::Windows::Forms::Button());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->btnAscendente = (gcnew System::Windows::Forms::Button());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->btnAcancion = (gcnew System::Windows::Forms::Button());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->groupBox1->SuspendLayout();
			this->groupBox2->SuspendLayout();
			this->SuspendLayout();
			// 
			// ofdImportar
			// 
			this->ofdImportar->FileName = L"openFileDialog1";
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(52, 43);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(126, 42);
			this->button1->TabIndex = 0;
			this->button1->Text = L"Importar playlist";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Playlist::button1_Click);
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->button1);
			this->groupBox1->Font = (gcnew System::Drawing::Font(L"Papyrus", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->groupBox1->Location = System::Drawing::Point(12, 12);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(251, 104);
			this->groupBox1->TabIndex = 2;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Importar playlist";
			// 
			// listPlaylist
			// 
			this->listPlaylist->BackColor = System::Drawing::SystemColors::Control;
			this->listPlaylist->FormattingEnabled = true;
			this->listPlaylist->ItemHeight = 16;
			this->listPlaylist->Location = System::Drawing::Point(281, 213);
			this->listPlaylist->Name = L"listPlaylist";
			this->listPlaylist->Size = System::Drawing::Size(271, 468);
			this->listPlaylist->TabIndex = 3;
			// 
			// listFila
			// 
			this->listFila->FormattingEnabled = true;
			this->listFila->ItemHeight = 16;
			this->listFila->Location = System::Drawing::Point(628, 213);
			this->listFila->Name = L"listFila";
			this->listFila->Size = System::Drawing::Size(271, 84);
			this->listFila->TabIndex = 4;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Papyrus", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(307, 179);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(189, 31);
			this->label1->TabIndex = 5;
			this->label1->Text = L"---- Mi playlist ----";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Papyrus", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(622, 179);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(277, 31);
			this->label2->TabIndex = 6;
			this->label2->Text = L"---- Fila de reprodución ----";
			// 
			// btnCancion
			// 
			this->btnCancion->BackColor = System::Drawing::Color::Honeydew;
			this->btnCancion->Font = (gcnew System::Drawing::Font(L"Papyrus", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnCancion->Location = System::Drawing::Point(25, 65);
			this->btnCancion->Name = L"btnCancion";
			this->btnCancion->Size = System::Drawing::Size(159, 33);
			this->btnCancion->TabIndex = 7;
			this->btnCancion->Text = L"Nombre de la canción";
			this->btnCancion->UseVisualStyleBackColor = false;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Papyrus", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(21, 40);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(181, 22);
			this->label3->TabIndex = 8;
			this->label3->Text = L"Ordenar la playlist por: ";
			this->label3->Click += gcnew System::EventHandler(this, &Playlist::label3_Click);
			// 
			// btnArtista
			// 
			this->btnArtista->BackColor = System::Drawing::Color::Honeydew;
			this->btnArtista->Font = (gcnew System::Drawing::Font(L"Papyrus", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnArtista->Location = System::Drawing::Point(25, 104);
			this->btnArtista->Name = L"btnArtista";
			this->btnArtista->Size = System::Drawing::Size(159, 33);
			this->btnArtista->TabIndex = 9;
			this->btnArtista->Text = L"Nombre del artista";
			this->btnArtista->UseVisualStyleBackColor = false;
			// 
			// btnDescendente
			// 
			this->btnDescendente->BackColor = System::Drawing::Color::Honeydew;
			this->btnDescendente->Font = (gcnew System::Drawing::Font(L"Papyrus", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnDescendente->Location = System::Drawing::Point(25, 223);
			this->btnDescendente->Name = L"btnDescendente";
			this->btnDescendente->Size = System::Drawing::Size(159, 33);
			this->btnDescendente->TabIndex = 12;
			this->btnDescendente->Text = L"Descendente";
			this->btnDescendente->UseVisualStyleBackColor = false;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Papyrus", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(21, 159);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(90, 22);
			this->label4->TabIndex = 11;
			this->label4->Text = L"De forma:  ";
			// 
			// btnAscendente
			// 
			this->btnAscendente->BackColor = System::Drawing::Color::Honeydew;
			this->btnAscendente->Font = (gcnew System::Drawing::Font(L"Papyrus", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnAscendente->Location = System::Drawing::Point(25, 184);
			this->btnAscendente->Name = L"btnAscendente";
			this->btnAscendente->Size = System::Drawing::Size(159, 33);
			this->btnAscendente->TabIndex = 10;
			this->btnAscendente->Text = L"Ascendente";
			this->btnAscendente->UseVisualStyleBackColor = false;
			// 
			// groupBox2
			// 
			this->groupBox2->Controls->Add(this->btnAcancion);
			this->groupBox2->Controls->Add(this->label5);
			this->groupBox2->Controls->Add(this->btnDescendente);
			this->groupBox2->Controls->Add(this->label4);
			this->groupBox2->Controls->Add(this->btnAscendente);
			this->groupBox2->Controls->Add(this->btnArtista);
			this->groupBox2->Controls->Add(this->label3);
			this->groupBox2->Controls->Add(this->btnCancion);
			this->groupBox2->Font = (gcnew System::Drawing::Font(L"Papyrus", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->groupBox2->Location = System::Drawing::Point(21, 213);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Size = System::Drawing::Size(222, 466);
			this->groupBox2->TabIndex = 13;
			this->groupBox2->TabStop = false;
			this->groupBox2->Text = L"Funciones";
			// 
			// btnAcancion
			// 
			this->btnAcancion->BackColor = System::Drawing::Color::Honeydew;
			this->btnAcancion->Font = (gcnew System::Drawing::Font(L"Papyrus", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnAcancion->Location = System::Drawing::Point(25, 417);
			this->btnAcancion->Name = L"btnAcancion";
			this->btnAcancion->Size = System::Drawing::Size(159, 33);
			this->btnAcancion->TabIndex = 14;
			this->btnAcancion->Text = L"Agregar canción";
			this->btnAcancion->UseVisualStyleBackColor = false;
			this->btnAcancion->Click += gcnew System::EventHandler(this, &Playlist::button4_Click);
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Papyrus", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(21, 291);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(131, 22);
			this->label5->TabIndex = 13;
			this->label5->Text = L"Agregar canción:";
			// 
			// Playlist
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::MediumTurquoise;
			this->ClientSize = System::Drawing::Size(1033, 754);
			this->Controls->Add(this->groupBox2);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->listFila);
			this->Controls->Add(this->listPlaylist);
			this->Controls->Add(this->groupBox1);
			this->Name = L"Playlist";
			this->Text = L"Funciones";
			this->groupBox1->ResumeLayout(false);
			this->groupBox2->ResumeLayout(false);
			this->groupBox2->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {

		ofdImportar->Filter = "Archivos separados por coma (csv) | *.csv";
		ofdImportar->FileName = "";

		if (ofdImportar->ShowDialog() == System::Windows::Forms::DialogResult::OK) {
			
			



		}
			


	}
	private: System::Void label3_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
}
};
}
