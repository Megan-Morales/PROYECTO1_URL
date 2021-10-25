#pragma once
#include "Canciones.h"
#include "List.h"
#include <string>
#include "OrdenarPorNombre.h"
#include "OrdneraPorArtista.h"

namespace Proyecto1MeganMorales1221120 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::IO; //Librería utilizada para poder utilizar el FILE

	/// <summary>
	/// Resumen de Playlist
	/// </summary>
	public ref class Playlist : public System::Windows::Forms::Form
	{
	public:
		List<Canciones>* playlist;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::Label^ label12;
	private: System::Windows::Forms::Label^ lbEstado;

	private: System::Windows::Forms::Label^ label13;
	public:
		List<Canciones>* colaReproduccion;
		
		Playlist(void)
		{
			InitializeComponent();
			
			//
			//TODO: agregar código de constructor aquí
			//
			playlist = new List<Canciones>();
			colaReproduccion = new List<Canciones>();
			ocultar();
		}

	protected:
		/// <summary>
		/// 
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





	private: System::Windows::Forms::GroupBox^ groupBox2;
	private: System::Windows::Forms::Button^ btnExportar;
	private: System::Windows::Forms::Button^ btnReproducir;


	private: System::Windows::Forms::GroupBox^ groupBox3;





	private: System::Windows::Forms::Button^ btnAgregarCancion;

	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Button^ btnSincronizar;
	private: System::Windows::Forms::TextBox^ txtNombre;
	private: System::Windows::Forms::TextBox^ txtPosicion;



	private: System::Windows::Forms::Button^ btnEliminar;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::TextBox^ txtArtista;

	private: System::Windows::Forms::Button^ bntSiguiente;
	private: System::Windows::Forms::Button^ btnAnterior;
	private: System::Windows::Forms::Button^ btnReproduccionAleatoria;
	private: System::Windows::Forms::Button^ btnReproduccionSecuencial;
	private: System::Windows::Forms::TextBox^ txtReproducciónActual;
	private: System::Windows::Forms::TextBox^ txtSiguiente;


	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Button^ btnDescendenteArtista;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::Button^ btnDescendenteCancion;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::SaveFileDialog^ saveFileDialog1;



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
			this->btnExportar = (gcnew System::Windows::Forms::Button());
			this->listPlaylist = (gcnew System::Windows::Forms::ListBox());
			this->listFila = (gcnew System::Windows::Forms::ListBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->btnCancion = (gcnew System::Windows::Forms::Button());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->btnArtista = (gcnew System::Windows::Forms::Button());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->btnDescendenteArtista = (gcnew System::Windows::Forms::Button());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->btnReproducir = (gcnew System::Windows::Forms::Button());
			this->btnDescendenteCancion = (gcnew System::Windows::Forms::Button());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->groupBox3 = (gcnew System::Windows::Forms::GroupBox());
			this->lbEstado = (gcnew System::Windows::Forms::Label());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->bntSiguiente = (gcnew System::Windows::Forms::Button());
			this->btnAnterior = (gcnew System::Windows::Forms::Button());
			this->btnReproduccionAleatoria = (gcnew System::Windows::Forms::Button());
			this->btnReproduccionSecuencial = (gcnew System::Windows::Forms::Button());
			this->txtPosicion = (gcnew System::Windows::Forms::TextBox());
			this->btnEliminar = (gcnew System::Windows::Forms::Button());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->txtArtista = (gcnew System::Windows::Forms::TextBox());
			this->txtNombre = (gcnew System::Windows::Forms::TextBox());
			this->btnAgregarCancion = (gcnew System::Windows::Forms::Button());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->btnSincronizar = (gcnew System::Windows::Forms::Button());
			this->txtReproducciónActual = (gcnew System::Windows::Forms::TextBox());
			this->txtSiguiente = (gcnew System::Windows::Forms::TextBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->saveFileDialog1 = (gcnew System::Windows::Forms::SaveFileDialog());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->groupBox1->SuspendLayout();
			this->groupBox2->SuspendLayout();
			this->groupBox3->SuspendLayout();
			this->SuspendLayout();
			// 
			// ofdImportar
			// 
			this->ofdImportar->FileName = L"openFileDialog1";
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(9, 42);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(98, 33);
			this->button1->TabIndex = 0;
			this->button1->Text = L"Importar playlist";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Playlist::button1_Click);
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->btnExportar);
			this->groupBox1->Controls->Add(this->button1);
			this->groupBox1->Font = (gcnew System::Drawing::Font(L"Papyrus", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->groupBox1->Location = System::Drawing::Point(12, 12);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(251, 104);
			this->groupBox1->TabIndex = 2;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Playlist";
			// 
			// btnExportar
			// 
			this->btnExportar->Location = System::Drawing::Point(122, 42);
			this->btnExportar->Name = L"btnExportar";
			this->btnExportar->Size = System::Drawing::Size(112, 33);
			this->btnExportar->TabIndex = 1;
			this->btnExportar->Text = L"Exportar playlist";
			this->btnExportar->UseVisualStyleBackColor = true;
			this->btnExportar->Click += gcnew System::EventHandler(this, &Playlist::btnExportar_Click);
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
			this->listFila->Location = System::Drawing::Point(812, 213);
			this->listFila->Name = L"listFila";
			this->listFila->Size = System::Drawing::Size(271, 468);
			this->listFila->TabIndex = 4;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Papyrus", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(307, 138);
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
			this->label2->Location = System::Drawing::Point(806, 138);
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
			this->btnCancion->Location = System::Drawing::Point(25, 76);
			this->btnCancion->Name = L"btnCancion";
			this->btnCancion->Size = System::Drawing::Size(177, 33);
			this->btnCancion->TabIndex = 7;
			this->btnCancion->Text = L"Nombre de la canción";
			this->btnCancion->UseVisualStyleBackColor = false;
			this->btnCancion->Click += gcnew System::EventHandler(this, &Playlist::btnCancion_Click);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Papyrus", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(6, 27);
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
			this->btnArtista->Location = System::Drawing::Point(25, 115);
			this->btnArtista->Name = L"btnArtista";
			this->btnArtista->Size = System::Drawing::Size(177, 33);
			this->btnArtista->TabIndex = 9;
			this->btnArtista->Text = L"Nombre del artista";
			this->btnArtista->UseVisualStyleBackColor = false;
			this->btnArtista->Click += gcnew System::EventHandler(this, &Playlist::btnArtista_Click);
			// 
			// groupBox2
			// 
			this->groupBox2->Controls->Add(this->btnDescendenteArtista);
			this->groupBox2->Controls->Add(this->label10);
			this->groupBox2->Controls->Add(this->btnReproducir);
			this->groupBox2->Controls->Add(this->btnDescendenteCancion);
			this->groupBox2->Controls->Add(this->label4);
			this->groupBox2->Controls->Add(this->btnArtista);
			this->groupBox2->Controls->Add(this->label3);
			this->groupBox2->Controls->Add(this->btnCancion);
			this->groupBox2->Font = (gcnew System::Drawing::Font(L"Papyrus", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->groupBox2->Location = System::Drawing::Point(12, 253);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Size = System::Drawing::Size(222, 378);
			this->groupBox2->TabIndex = 13;
			this->groupBox2->TabStop = false;
			this->groupBox2->Text = L"Funciones de la playlist";
			// 
			// btnDescendenteArtista
			// 
			this->btnDescendenteArtista->BackColor = System::Drawing::Color::Honeydew;
			this->btnDescendenteArtista->Font = (gcnew System::Drawing::Font(L"Papyrus", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnDescendenteArtista->Location = System::Drawing::Point(25, 215);
			this->btnDescendenteArtista->Name = L"btnDescendenteArtista";
			this->btnDescendenteArtista->Size = System::Drawing::Size(177, 33);
			this->btnDescendenteArtista->TabIndex = 16;
			this->btnDescendenteArtista->Text = L"Nombre del artista";
			this->btnDescendenteArtista->UseVisualStyleBackColor = false;
			this->btnDescendenteArtista->Click += gcnew System::EventHandler(this, &Playlist::btnDescendenteArtista_Click);
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Font = (gcnew System::Drawing::Font(L"Papyrus", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label10->Location = System::Drawing::Point(6, 151);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(183, 22);
			this->label10->TabIndex = 14;
			this->label10->Text = L"Descendentemente por:";
			// 
			// btnReproducir
			// 
			this->btnReproducir->BackColor = System::Drawing::Color::Honeydew;
			this->btnReproducir->Font = (gcnew System::Drawing::Font(L"Papyrus", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnReproducir->Location = System::Drawing::Point(25, 303);
			this->btnReproducir->Name = L"btnReproducir";
			this->btnReproducir->Size = System::Drawing::Size(177, 33);
			this->btnReproducir->TabIndex = 13;
			this->btnReproducir->Text = L"-- Reproducir  --";
			this->btnReproducir->UseVisualStyleBackColor = false;
			this->btnReproducir->Click += gcnew System::EventHandler(this, &Playlist::btnReproducir_Click);
			// 
			// btnDescendenteCancion
			// 
			this->btnDescendenteCancion->BackColor = System::Drawing::Color::Honeydew;
			this->btnDescendenteCancion->Font = (gcnew System::Drawing::Font(L"Papyrus", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnDescendenteCancion->Location = System::Drawing::Point(25, 176);
			this->btnDescendenteCancion->Name = L"btnDescendenteCancion";
			this->btnDescendenteCancion->Size = System::Drawing::Size(177, 33);
			this->btnDescendenteCancion->TabIndex = 15;
			this->btnDescendenteCancion->Text = L"Nombre de la canción";
			this->btnDescendenteCancion->UseVisualStyleBackColor = false;
			this->btnDescendenteCancion->Click += gcnew System::EventHandler(this, &Playlist::btnDescendenteCancion_Click);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Papyrus", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(0, 51);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(174, 22);
			this->label4->TabIndex = 11;
			this->label4->Text = L"Ascendentemente por:";
			// 
			// groupBox3
			// 
			this->groupBox3->Controls->Add(this->lbEstado);
			this->groupBox3->Controls->Add(this->label13);
			this->groupBox3->Controls->Add(this->bntSiguiente);
			this->groupBox3->Controls->Add(this->btnAnterior);
			this->groupBox3->Controls->Add(this->btnReproduccionAleatoria);
			this->groupBox3->Controls->Add(this->btnReproduccionSecuencial);
			this->groupBox3->Controls->Add(this->txtPosicion);
			this->groupBox3->Controls->Add(this->btnEliminar);
			this->groupBox3->Controls->Add(this->label6);
			this->groupBox3->Controls->Add(this->label5);
			this->groupBox3->Controls->Add(this->txtArtista);
			this->groupBox3->Controls->Add(this->txtNombre);
			this->groupBox3->Controls->Add(this->btnAgregarCancion);
			this->groupBox3->Controls->Add(this->label8);
			this->groupBox3->Font = (gcnew System::Drawing::Font(L"Papyrus", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->groupBox3->Location = System::Drawing::Point(1117, 213);
			this->groupBox3->Name = L"groupBox3";
			this->groupBox3->Size = System::Drawing::Size(222, 466);
			this->groupBox3->TabIndex = 15;
			this->groupBox3->TabStop = false;
			this->groupBox3->Text = L"Funciones de la fila de reproducción";
			// 
			// lbEstado
			// 
			this->lbEstado->AutoSize = true;
			this->lbEstado->Font = (gcnew System::Drawing::Font(L"Papyrus", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbEstado->Location = System::Drawing::Point(74, 296);
			this->lbEstado->Name = L"lbEstado";
			this->lbEstado->Size = System::Drawing::Size(66, 22);
			this->lbEstado->TabIndex = 26;
			this->lbEstado->Text = L"Estado";
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Font = (gcnew System::Drawing::Font(L"Papyrus", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label13->Location = System::Drawing::Point(6, 274);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(210, 22);
			this->label13->TabIndex = 25;
			this->label13->Text = L"Estado de la reproducción: ";
			// 
			// bntSiguiente
			// 
			this->bntSiguiente->BackColor = System::Drawing::Color::Honeydew;
			this->bntSiguiente->Font = (gcnew System::Drawing::Font(L"Papyrus", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->bntSiguiente->Location = System::Drawing::Point(133, 397);
			this->bntSiguiente->Name = L"bntSiguiente";
			this->bntSiguiente->Size = System::Drawing::Size(70, 33);
			this->bntSiguiente->TabIndex = 24;
			this->bntSiguiente->Text = L"-->";
			this->bntSiguiente->UseVisualStyleBackColor = false;
			// 
			// btnAnterior
			// 
			this->btnAnterior->BackColor = System::Drawing::Color::Honeydew;
			this->btnAnterior->Font = (gcnew System::Drawing::Font(L"Papyrus", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnAnterior->Location = System::Drawing::Point(26, 397);
			this->btnAnterior->Name = L"btnAnterior";
			this->btnAnterior->Size = System::Drawing::Size(70, 33);
			this->btnAnterior->TabIndex = 23;
			this->btnAnterior->Text = L"<--";
			this->btnAnterior->UseVisualStyleBackColor = false;
			// 
			// btnReproduccionAleatoria
			// 
			this->btnReproduccionAleatoria->BackColor = System::Drawing::Color::Honeydew;
			this->btnReproduccionAleatoria->Font = (gcnew System::Drawing::Font(L"Papyrus", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnReproduccionAleatoria->Location = System::Drawing::Point(13, 358);
			this->btnReproduccionAleatoria->Name = L"btnReproduccionAleatoria";
			this->btnReproduccionAleatoria->Size = System::Drawing::Size(190, 33);
			this->btnReproduccionAleatoria->TabIndex = 22;
			this->btnReproduccionAleatoria->Text = L"Reproducción aleatoria";
			this->btnReproduccionAleatoria->UseVisualStyleBackColor = false;
			// 
			// btnReproduccionSecuencial
			// 
			this->btnReproduccionSecuencial->BackColor = System::Drawing::Color::Honeydew;
			this->btnReproduccionSecuencial->Font = (gcnew System::Drawing::Font(L"Papyrus", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnReproduccionSecuencial->Location = System::Drawing::Point(13, 319);
			this->btnReproduccionSecuencial->Name = L"btnReproduccionSecuencial";
			this->btnReproduccionSecuencial->Size = System::Drawing::Size(190, 33);
			this->btnReproduccionSecuencial->TabIndex = 14;
			this->btnReproduccionSecuencial->Text = L"Reproducción secuencial";
			this->btnReproduccionSecuencial->UseVisualStyleBackColor = false;
			// 
			// txtPosicion
			// 
			this->txtPosicion->Location = System::Drawing::Point(159, 218);
			this->txtPosicion->Name = L"txtPosicion";
			this->txtPosicion->Size = System::Drawing::Size(44, 31);
			this->txtPosicion->TabIndex = 21;
			// 
			// btnEliminar
			// 
			this->btnEliminar->BackColor = System::Drawing::Color::Honeydew;
			this->btnEliminar->Font = (gcnew System::Drawing::Font(L"Papyrus", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnEliminar->Location = System::Drawing::Point(26, 204);
			this->btnEliminar->Name = L"btnEliminar";
			this->btnEliminar->Size = System::Drawing::Size(127, 64);
			this->btnEliminar->TabIndex = 20;
			this->btnEliminar->Text = L"Eliminar la canción número: ";
			this->btnEliminar->UseVisualStyleBackColor = false;
			this->btnEliminar->Click += gcnew System::EventHandler(this, &Playlist::btnEliminar_Click);
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Papyrus", 7.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->Location = System::Drawing::Point(7, 125);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(52, 19);
			this->label6->TabIndex = 19;
			this->label6->Text = L"Artista:";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Papyrus", 7.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(7, 88);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(58, 19);
			this->label5->TabIndex = 18;
			this->label5->Text = L"Nombre:";
			// 
			// txtArtista
			// 
			this->txtArtista->Location = System::Drawing::Point(78, 119);
			this->txtArtista->Name = L"txtArtista";
			this->txtArtista->Size = System::Drawing::Size(125, 31);
			this->txtArtista->TabIndex = 17;
			// 
			// txtNombre
			// 
			this->txtNombre->Location = System::Drawing::Point(78, 82);
			this->txtNombre->Name = L"txtNombre";
			this->txtNombre->Size = System::Drawing::Size(125, 31);
			this->txtNombre->TabIndex = 16;
			// 
			// btnAgregarCancion
			// 
			this->btnAgregarCancion->BackColor = System::Drawing::Color::Honeydew;
			this->btnAgregarCancion->Font = (gcnew System::Drawing::Font(L"Papyrus", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnAgregarCancion->Location = System::Drawing::Point(26, 165);
			this->btnAgregarCancion->Name = L"btnAgregarCancion";
			this->btnAgregarCancion->Size = System::Drawing::Size(177, 33);
			this->btnAgregarCancion->TabIndex = 9;
			this->btnAgregarCancion->Text = L"Agregar canción";
			this->btnAgregarCancion->UseVisualStyleBackColor = false;
			this->btnAgregarCancion->Click += gcnew System::EventHandler(this, &Playlist::btnAgregarCancion_Click);
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Papyrus", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label8->Location = System::Drawing::Point(22, 57);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(131, 22);
			this->label8->TabIndex = 8;
			this->label8->Text = L"Agregar canción:";
			// 
			// btnSincronizar
			// 
			this->btnSincronizar->BackColor = System::Drawing::Color::Honeydew;
			this->btnSincronizar->Font = (gcnew System::Drawing::Font(L"Papyrus", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnSincronizar->Location = System::Drawing::Point(610, 416);
			this->btnSincronizar->Name = L"btnSincronizar";
			this->btnSincronizar->Size = System::Drawing::Size(159, 93);
			this->btnSincronizar->TabIndex = 15;
			this->btnSincronizar->Text = L"Sincronizar fila de reproducción con la playlist";
			this->btnSincronizar->UseVisualStyleBackColor = false;
			// 
			// txtReproducciónActual
			// 
			this->txtReproducciónActual->Location = System::Drawing::Point(434, 65);
			this->txtReproducciónActual->Name = L"txtReproducciónActual";
			this->txtReproducciónActual->Size = System::Drawing::Size(349, 22);
			this->txtReproducciónActual->TabIndex = 16;
			// 
			// txtSiguiente
			// 
			this->txtSiguiente->Location = System::Drawing::Point(926, 65);
			this->txtSiguiente->Name = L"txtSiguiente";
			this->txtSiguiente->Size = System::Drawing::Size(253, 22);
			this->txtSiguiente->TabIndex = 17;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Papyrus", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->Location = System::Drawing::Point(469, 24);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(300, 38);
			this->label7->TabIndex = 14;
			this->label7->Text = L"Canción en reproducción";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"Papyrus", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label9->Location = System::Drawing::Point(986, 24);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(138, 38);
			this->label9->TabIndex = 18;
			this->label9->Text = L"Siguiente:";
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::Honeydew;
			this->button2->Font = (gcnew System::Drawing::Font(L"Papyrus", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button2->Location = System::Drawing::Point(1117, 112);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(205, 47);
			this->button2->TabIndex = 19;
			this->button2->Text = L"Iniciar fila de reproducción";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &Playlist::button2_Click);
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Font = (gcnew System::Drawing::Font(L"Papyrus", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label11->Location = System::Drawing::Point(285, 179);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(247, 31);
			this->label11->TabIndex = 20;
			this->label11->Text = L"-- Canción --- Artista --";
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Font = (gcnew System::Drawing::Font(L"Papyrus", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label12->Location = System::Drawing::Point(827, 179);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(247, 31);
			this->label12->TabIndex = 21;
			this->label12->Text = L"-- Canción --- Artista --";
			// 
			// Playlist
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::MediumTurquoise;
			this->ClientSize = System::Drawing::Size(1573, 725);
			this->Controls->Add(this->label12);
			this->Controls->Add(this->label11);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->txtSiguiente);
			this->Controls->Add(this->txtReproducciónActual);
			this->Controls->Add(this->btnSincronizar);
			this->Controls->Add(this->groupBox3);
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
			this->groupBox3->ResumeLayout(false);
			this->groupBox3->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

		private: void restablecerPlaylist() {
	
			playlist->clear();
			listPlaylist->Items->Clear();
		
		}
		
		void ocultar() {
			label9->Hide();
			txtSiguiente->Hide();
			label2->Hide();
			btnSincronizar->Hide();
			listFila->Hide();
			groupBox3->Hide();
			label12->Hide();
		}
		

	   void MarshalString(String^ s, string& os) {
		   using namespace Runtime::InteropServices;
		   const char* chars =
			   (const char*)(Marshal::StringToHGlobalAnsi(s)).ToPointer();
		   os = chars;
		   Marshal::FreeHGlobal(IntPtr((void*)chars));
	   }

	private: void llenarListBox() {
		
		int contador=0;
		while (playlist->get(contador)!=nullptr) {
			
			string Cancion;
			string Artista;
			Cancion=playlist->get(contador)->getName();
			Artista =playlist->get(contador)->getArtist();
			String^ cancion= gcnew String(Cancion.c_str());
			String^ artista = gcnew String(Artista.c_str());
			listPlaylist->Items->Add(contador + " - " + cancion + " - "+ artista);
			contador++;
		}	
	}

	private: void llenarListBox2() {

		int contador = 0;
		while (colaReproduccion->get(contador) != nullptr) {

			string Cancion;
			string Artista;
			Cancion = colaReproduccion->get(contador)->getName();
			Artista = colaReproduccion->get(contador)->getArtist();
			String^ cancion = gcnew String(Cancion.c_str());
			String^ artista = gcnew String(Artista.c_str());
			listFila->Items->Add(contador + " - " + cancion + " - " + artista);
			contador++;
		}

	}
	
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {

		
		ofdImportar->Filter = "Archivos separados por coma (csv) | *.csv";
		ofdImportar->FileName = "";

		if (ofdImportar->ShowDialog() == System::Windows::Forms::DialogResult::OK) {
			
			restablecerPlaylist();

			//Se utiliza el objeto File para leer el archivo solo cuando el FileName es correcto
			//Importante haber llamado al namespace System::IO antes de usar File

			array<String^>^ archivoLineas = File::ReadAllLines(ofdImportar->FileName);

			if (archivoLineas->Length > 0) {
				//LLenar list playlist
				for (int i = 0; i < archivoLineas->Length; i++) {
					array<String^>^ columnaArchivo = archivoLineas[i]->Split(',');
					int j = 0;

					while (j < columnaArchivo->Length) {
						array<String^>^ nomCancionArtista = columnaArchivo[j]->Split('-');
							
						if (nomCancionArtista->Length >= 2) {
							string nameCancion;
							string nameArtista;
							MarshalString(nomCancionArtista[0], nameCancion);
							MarshalString(nomCancionArtista[1], nameArtista);
							if (nameArtista=="") {
								Canciones* cancion = new Canciones(nameCancion, "Desconocido");
								playlist->add(cancion);
							}
							else {
								Canciones* cancion = new Canciones(nameCancion, nameArtista);
								playlist->add(cancion);
							}
							
						}
						else if (nomCancionArtista->Length == 1) {
							
							string nameCancion;
							
							if (nomCancionArtista[0] == "" ) {}
							else {
								MarshalString(nomCancionArtista[0], nameCancion);
								Canciones* cancion = new Canciones(nameCancion, "Desconocido");
								playlist->add(cancion);
							}
						}
						j++;
					}
				}
				llenarListBox();		
			}
		}
		else {
			MessageBox::Show("No se seleccionó ningún archivo"
				, "Archivo no seleccionado"
				, MessageBoxButtons::OK
				, MessageBoxIcon::Exclamation);
		}
	}
private: System::Void label3_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void btnCancion_Click(System::Object^ sender, System::EventArgs^ e) {

	playlist->bubbleSort(new OrdenarPorNombre(),0);
	listPlaylist->Items->Clear();
	llenarListBox();



}
private: System::Void btnArtista_Click(System::Object^ sender, System::EventArgs^ e) {
	playlist->bubbleSort(new OrdenarPorArtista(),0);
	listPlaylist->Items->Clear();
	llenarListBox();
}
private: System::Void btnDescendenteCancion_Click(System::Object^ sender, System::EventArgs^ e) {
	playlist->bubbleSort(new OrdenarPorNombre(), 1);
	listPlaylist->Items->Clear();
	llenarListBox();
}
private: System::Void btnDescendenteArtista_Click(System::Object^ sender, System::EventArgs^ e) {
		playlist->bubbleSort(new OrdenarPorArtista(), 1);
		listPlaylist->Items->Clear();
		llenarListBox();
}
private: System::Void btnReproducir_Click(System::Object^ sender, System::EventArgs^ e) {
		
		if (!playlist->isEmpty()) {
			string Cancion;
			string Artista;
			Cancion = playlist->get(0)->getName();
			Artista = playlist->get(0)->getArtist();
			String^ cancion = gcnew String(Cancion.c_str());
			String^ artista = gcnew String(Artista.c_str());

			txtReproducciónActual->Text = (cancion + " - " + artista);
			playlist->RemoveAt(0);
			listPlaylist->Items->Clear();
			llenarListBox();
		}
		else {

			if (!colaReproduccion->isEmpty()) {
				for (int i = (colaReproduccion->getSize()-1); i>=0; i--) {
					playlist->add(colaReproduccion->get(i));
				}
				llenarListBox();
			}
			else {
				
				MessageBox::Show("No se seleccionó ningún archivo"
					, "Archivo no seleccionado"
					, MessageBoxButtons::OK
					, MessageBoxIcon::Exclamation);
			}	
		}
}
private: System::Void btnExportar_Click(System::Object^ sender, System::EventArgs^ e) {

		saveFileDialog1->Filter = "Archivos separados por coma (csv) | *.csv";
		
		if (saveFileDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK) {
			String^ playListActual;
			for (int i = 1; i < playlist->getSize(); i++) {
				playListActual += ""+ listPlaylist->Items[i]+",";
			}

			File::WriteAllText(saveFileDialog1->FileName, playListActual);
			MessageBox::Show("Archivo guardado exitosamente"
				, "Operación exitosa"
				, MessageBoxButtons::OK
				, MessageBoxIcon::Information);
		}
}
private: System::Void btnAgregarCancion_Click(System::Object^ sender, System::EventArgs^ e) {

		String^ nombre;
		String^ artista;
		string Nombre;
		string Artista;
		nombre = txtNombre->Text;
		artista = txtArtista->Text;
		MarshalString(nombre, Nombre);
		MarshalString(artista, Artista);
		Canciones* cancion = new Canciones(Nombre, Artista);
		colaReproduccion->add(cancion);
		listFila->Items->Clear();
		llenarListBox2();
}
private: System::Void btnEliminar_Click(System::Object^ sender, System::EventArgs^ e) {

		int posicion = Convert::ToInt32(txtPosicion->Text);
		colaReproduccion->RemoveAt(posicion);
		listFila->Items->Clear();
		llenarListBox2();

}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		label9->Show();
		txtSiguiente->Show();
		label2->Show();
		btnSincronizar->Show();
		listFila-> Show();
		groupBox3->Show();
		label12->Show();
}
};
}
