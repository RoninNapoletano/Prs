#pragma once

#include "FormClient.h";
#include "FormCommande.h";
#include "FormStock.h";
#include "FormPersonnel.h";
#include "FormStatistique.h";
#include "CLinferface.h";

namespace testWin {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::IO;

	using namespace Prs;




	/// <summary>
	/// Description résumée de MyForm
	/// </summary>
	public ref class FormMenu : public System::Windows::Forms::Form
	{
	public:
		FormMenu(void)
		{
			InitializeComponent();
			//
			//TODO: ajoutez ici le code du constructeur
			//
		}


	protected:
		/// <summary>
		/// Nettoyage des ressources utilisées.
		/// </summary>
		~FormMenu()
		{

			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ btn_Client;
	private: System::Windows::Forms::Button^ btn_Personnel;
	private: System::Windows::Forms::Button^ btn_Commande;
	private: System::Windows::Forms::Button^ btn_Statistique;
	private: System::Windows::Forms::Button^ btn_Stock;
	private: System::Windows::Forms::Panel^ panMenu;
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::DateTimePicker^ dateTimePicker1;
	private: System::Windows::Forms::Button^ butCLOSE;







	protected:





	protected:

	protected:




















	private:
		/// <summary>
		/// Variable nécessaire au concepteur.
		/// </summary>
		System::ComponentModel::Container^ components;


		//CLinterface c;

		//using namespace NS_services;
	//private: CLinterface^ image;

#pragma region Windows Form Designer generated code


		/// <summary>
		/// Méthode requise pour la prise en charge du concepteur - ne modifiez pas
		/// le contenu de cette méthode avec l'éditeur de code.
		/// </summary>
		void InitializeComponent(void)
		{
			this->btn_Client = (gcnew System::Windows::Forms::Button());
			this->btn_Personnel = (gcnew System::Windows::Forms::Button());
			this->btn_Commande = (gcnew System::Windows::Forms::Button());
			this->btn_Statistique = (gcnew System::Windows::Forms::Button());
			this->btn_Stock = (gcnew System::Windows::Forms::Button());
			this->panMenu = (gcnew System::Windows::Forms::Panel());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->dateTimePicker1 = (gcnew System::Windows::Forms::DateTimePicker());
			this->butCLOSE = (gcnew System::Windows::Forms::Button());
			this->panMenu->SuspendLayout();
			this->SuspendLayout();
			// 
			// btn_Client
			// 
			this->btn_Client->FlatAppearance->BorderSize = 0;
			this->btn_Client->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Maroon;
			this->btn_Client->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btn_Client->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn_Client->ForeColor = System::Drawing::Color::White;
			this->btn_Client->Location = System::Drawing::Point(0, 117);
			this->btn_Client->Margin = System::Windows::Forms::Padding(4);
			this->btn_Client->Name = L"btn_Client";
			this->btn_Client->Size = System::Drawing::Size(285, 53);
			this->btn_Client->TabIndex = 0;
			this->btn_Client->Text = L"Gestion des clients";
			this->btn_Client->UseVisualStyleBackColor = true;
			this->btn_Client->Click += gcnew System::EventHandler(this, &FormMenu::btn_Client_Click);
			// 
			// btn_Personnel
			// 
			this->btn_Personnel->FlatAppearance->BorderSize = 0;
			this->btn_Personnel->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Maroon;
			this->btn_Personnel->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btn_Personnel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn_Personnel->ForeColor = System::Drawing::Color::White;
			this->btn_Personnel->Location = System::Drawing::Point(4, 25);
			this->btn_Personnel->Margin = System::Windows::Forms::Padding(4);
			this->btn_Personnel->Name = L"btn_Personnel";
			this->btn_Personnel->Size = System::Drawing::Size(281, 53);
			this->btn_Personnel->TabIndex = 1;
			this->btn_Personnel->Text = L"Gestion du personnel";
			this->btn_Personnel->UseVisualStyleBackColor = true;
			this->btn_Personnel->Click += gcnew System::EventHandler(this, &FormMenu::btn_Personnel_Click);
			// 
			// btn_Commande
			// 
			this->btn_Commande->FlatAppearance->BorderSize = 0;
			this->btn_Commande->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Maroon;
			this->btn_Commande->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btn_Commande->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn_Commande->ForeColor = System::Drawing::Color::White;
			this->btn_Commande->Location = System::Drawing::Point(0, 221);
			this->btn_Commande->Margin = System::Windows::Forms::Padding(4);
			this->btn_Commande->Name = L"btn_Commande";
			this->btn_Commande->Size = System::Drawing::Size(285, 77);
			this->btn_Commande->TabIndex = 2;
			this->btn_Commande->Text = L"Gestion des commandes";
			this->btn_Commande->UseVisualStyleBackColor = true;
			this->btn_Commande->Click += gcnew System::EventHandler(this, &FormMenu::btn_Commande_Click);
			// 
			// btn_Statistique
			// 
			this->btn_Statistique->FlatAppearance->BorderSize = 0;
			this->btn_Statistique->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Maroon;
			this->btn_Statistique->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btn_Statistique->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn_Statistique->ForeColor = System::Drawing::Color::White;
			this->btn_Statistique->Location = System::Drawing::Point(0, 324);
			this->btn_Statistique->Margin = System::Windows::Forms::Padding(4);
			this->btn_Statistique->Name = L"btn_Statistique";
			this->btn_Statistique->Size = System::Drawing::Size(281, 77);
			this->btn_Statistique->TabIndex = 3;
			this->btn_Statistique->Text = L"Gestions des statistiques";
			this->btn_Statistique->UseVisualStyleBackColor = true;
			this->btn_Statistique->Click += gcnew System::EventHandler(this, &FormMenu::btn_Statistique_Click);
			// 
			// btn_Stock
			// 
			this->btn_Stock->FlatAppearance->BorderSize = 0;
			this->btn_Stock->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Maroon;
			this->btn_Stock->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btn_Stock->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn_Stock->ForeColor = System::Drawing::Color::White;
			this->btn_Stock->Location = System::Drawing::Point(0, 434);
			this->btn_Stock->Margin = System::Windows::Forms::Padding(4);
			this->btn_Stock->Name = L"btn_Stock";
			this->btn_Stock->Size = System::Drawing::Size(281, 53);
			this->btn_Stock->TabIndex = 4;
			this->btn_Stock->Text = L"Gestion du stock";
			this->btn_Stock->UseVisualStyleBackColor = true;
			this->btn_Stock->Click += gcnew System::EventHandler(this, &FormMenu::btn_Stock_Click);
			// 
			// panMenu
			// 
			this->panMenu->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(41)), static_cast<System::Int32>(static_cast<System::Byte>(39)),
				static_cast<System::Int32>(static_cast<System::Byte>(40)));
			this->panMenu->Controls->Add(this->btn_Personnel);
			this->panMenu->Controls->Add(this->btn_Stock);
			this->panMenu->Controls->Add(this->btn_Client);
			this->panMenu->Controls->Add(this->btn_Statistique);
			this->panMenu->Controls->Add(this->btn_Commande);
			this->panMenu->Dock = System::Windows::Forms::DockStyle::Left;
			this->panMenu->Location = System::Drawing::Point(0, 0);
			this->panMenu->Name = L"panMenu";
			this->panMenu->Size = System::Drawing::Size(305, 510);
			this->panMenu->TabIndex = 5;
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::Maroon;
			this->panel1->Dock = System::Windows::Forms::DockStyle::Top;
			this->panel1->Location = System::Drawing::Point(305, 0);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(1192, 18);
			this->panel1->TabIndex = 6;
			// 
			// dateTimePicker1
			// 
			this->dateTimePicker1->Location = System::Drawing::Point(1273, 24);
			this->dateTimePicker1->Name = L"dateTimePicker1";
			this->dateTimePicker1->Size = System::Drawing::Size(224, 22);
			this->dateTimePicker1->TabIndex = 7;
			// 
			// butCLOSE
			// 
			this->butCLOSE->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->butCLOSE->Location = System::Drawing::Point(1374, 477);
			this->butCLOSE->Name = L"butCLOSE";
			this->butCLOSE->Size = System::Drawing::Size(123, 33);
			this->butCLOSE->TabIndex = 8;
			this->butCLOSE->Text = L"Close";
			this->butCLOSE->UseVisualStyleBackColor = true;
			this->butCLOSE->Click += gcnew System::EventHandler(this, &FormMenu::button1_Click);
			// 
			// FormMenu
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1497, 510);
			this->Controls->Add(this->butCLOSE);
			this->Controls->Add(this->dateTimePicker1);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->panMenu);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->Margin = System::Windows::Forms::Padding(4);
			this->MaximizeBox = false;
			this->Name = L"FormMenu";
			this->Text = L"Menu Application";
			this->Load += gcnew System::EventHandler(this, &FormMenu::FormMenu_Load);
			this->panMenu->ResumeLayout(false);
			this->ResumeLayout(false);

		}
#pragma endregion

	private: System::Void FormMenu_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void pictureBox4_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void btn_Client_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Hide();
		FormClient^ GClient = gcnew FormClient();
		GClient->Show();
	}
	private: System::Void btn_Personnel_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Hide();
		FormPersonnel^ GCpersonnel = gcnew FormPersonnel();
		GCpersonnel->Show();
	}
	private: System::Void btn_Commande_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Hide();
		FormCommande^ GCcommande = gcnew FormCommande();
		GCcommande->Show();
	}
	private: System::Void btn_Statistique_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Hide();
		FormStatistique^ GCstatistique = gcnew FormStatistique();
		GCstatistique->Show();
	}
	private: System::Void btn_Stock_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Hide();
		FormStock^ GCstock = gcnew FormStock();
		GCstock->Show();
	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		this->Close();
	}
};
}



