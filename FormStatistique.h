#pragma once

//#include "CLinferface.h";

namespace Prs {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Description résumée de FormStatistique
	/// </summary>
	public ref class FormStatistique : public System::Windows::Forms::Form
	{
	public:
		FormStatistique(void)
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
		~FormStatistique()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TabControl^ tabControl1;
	protected:
	private: System::Windows::Forms::TabPage^ tabPage1;
	private: System::Windows::Forms::TabPage^ tabPage2;
	private: System::Windows::Forms::TabPage^ tabPage3;
	private: System::Windows::Forms::Panel^ panel3;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Panel^ panel2;
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::Panel^ panel5;

	private: System::Windows::Forms::Panel^ panel4;
	private: System::Windows::Forms::Button^ button8;
	private: System::Windows::Forms::Button^ button7;
	private: System::Windows::Forms::Button^ button6;
	private: System::Windows::Forms::Panel^ panel7;
	private: System::Windows::Forms::RadioButton^ radioButton11;
	private: System::Windows::Forms::RadioButton^ radioButton10;
	private: System::Windows::Forms::RadioButton^ radioButton9;
	private: System::Windows::Forms::Panel^ panel8;
	private: System::Windows::Forms::RadioButton^ radioButton6;
	private: System::Windows::Forms::RadioButton^ radioButton5;
	private: System::Windows::Forms::RadioButton^ radioButton4;
	private: System::Windows::Forms::Panel^ panel9;
	private: System::Windows::Forms::RadioButton^ radioButton8;
	private: System::Windows::Forms::RadioButton^ radioButton7;
	private: System::Windows::Forms::Panel^ panel6;
	private: System::Windows::Forms::RadioButton^ radioButton3;
	private: System::Windows::Forms::RadioButton^ radioButton1;
	private: System::Windows::Forms::RadioButton^ radioButton2;
	private: System::Windows::Forms::DataGridView^ dataGridView1;
	private: System::Windows::Forms::DataGridView^ dataGridView2;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::Button^ button9;
	private: System::Windows::Forms::Label^ label8;

	private:
		/// <summary>
		/// Variable nécessaire au concepteur.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Méthode requise pour la prise en charge du concepteur - ne modifiez pas
		/// le contenu de cette méthode avec l'éditeur de code.
		/// </summary>
		void InitializeComponent(void)
		{
			this->tabControl1 = (gcnew System::Windows::Forms::TabControl());
			this->tabPage1 = (gcnew System::Windows::Forms::TabPage());
			this->panel3 = (gcnew System::Windows::Forms::Panel());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->tabPage2 = (gcnew System::Windows::Forms::TabPage());
			this->panel5 = (gcnew System::Windows::Forms::Panel());
			this->dataGridView2 = (gcnew System::Windows::Forms::DataGridView());
			this->panel4 = (gcnew System::Windows::Forms::Panel());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->tabPage3 = (gcnew System::Windows::Forms::TabPage());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->panel7 = (gcnew System::Windows::Forms::Panel());
			this->radioButton11 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton10 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton9 = (gcnew System::Windows::Forms::RadioButton());
			this->panel8 = (gcnew System::Windows::Forms::Panel());
			this->radioButton6 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton5 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton4 = (gcnew System::Windows::Forms::RadioButton());
			this->panel9 = (gcnew System::Windows::Forms::Panel());
			this->radioButton8 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton7 = (gcnew System::Windows::Forms::RadioButton());
			this->panel6 = (gcnew System::Windows::Forms::Panel());
			this->radioButton3 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton1 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton2 = (gcnew System::Windows::Forms::RadioButton());
			this->tabControl1->SuspendLayout();
			this->tabPage1->SuspendLayout();
			this->panel3->SuspendLayout();
			this->panel2->SuspendLayout();
			this->panel1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->tabPage2->SuspendLayout();
			this->panel5->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView2))->BeginInit();
			this->panel4->SuspendLayout();
			this->tabPage3->SuspendLayout();
			this->panel7->SuspendLayout();
			this->panel8->SuspendLayout();
			this->panel9->SuspendLayout();
			this->panel6->SuspendLayout();
			this->SuspendLayout();
			// 
			// tabControl1
			// 
			this->tabControl1->Controls->Add(this->tabPage1);
			this->tabControl1->Controls->Add(this->tabPage2);
			this->tabControl1->Controls->Add(this->tabPage3);
			this->tabControl1->Location = System::Drawing::Point(128, 41);
			this->tabControl1->Name = L"tabControl1";
			this->tabControl1->SelectedIndex = 0;
			this->tabControl1->Size = System::Drawing::Size(2305, 934);
			this->tabControl1->TabIndex = 0;
			// 
			// tabPage1
			// 
			this->tabPage1->Controls->Add(this->panel3);
			this->tabPage1->Controls->Add(this->panel2);
			this->tabPage1->Controls->Add(this->panel1);
			this->tabPage1->Location = System::Drawing::Point(10, 48);
			this->tabPage1->Name = L"tabPage1";
			this->tabPage1->Padding = System::Windows::Forms::Padding(3);
			this->tabPage1->Size = System::Drawing::Size(2285, 876);
			this->tabPage1->TabIndex = 0;
			this->tabPage1->Text = L"calculer";
			this->tabPage1->UseVisualStyleBackColor = true;
			// 
			// panel3
			// 
			this->panel3->Controls->Add(this->textBox1);
			this->panel3->Controls->Add(this->label6);
			this->panel3->Controls->Add(this->label5);
			this->panel3->Controls->Add(this->label4);
			this->panel3->Controls->Add(this->label3);
			this->panel3->Controls->Add(this->label2);
			this->panel3->Controls->Add(this->label1);
			this->panel3->Controls->Add(this->button5);
			this->panel3->Controls->Add(this->button4);
			this->panel3->Controls->Add(this->button3);
			this->panel3->Controls->Add(this->button2);
			this->panel3->Controls->Add(this->button1);
			this->panel3->Location = System::Drawing::Point(6, 6);
			this->panel3->Name = L"panel3";
			this->panel3->Size = System::Drawing::Size(2260, 278);
			this->panel3->TabIndex = 7;
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(941, 90);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(233, 38);
			this->textBox1->TabIndex = 11;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(796, 90);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(139, 32);
			this->label6->TabIndex = 10;
			this->label6->Text = L"ID client : ";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(1908, 22);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(202, 32);
			this->label5->TabIndex = 9;
			this->label5->Text = L"val achat stock";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(1376, 22);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(298, 32);
			this->label4->TabIndex = 8;
			this->label4->Text = L"Val commerciale stock";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(865, 22);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(309, 32);
			this->label3->TabIndex = 7;
			this->label3->Text = L"total achat pour 1 client";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(521, 22);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(121, 32);
			this->label2->TabIndex = 6;
			this->label2->Text = L"CA mois";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(56, 22);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(187, 32);
			this->label1->TabIndex = 5;
			this->label1->Text = L"panier moyen";
			// 
			// button5
			// 
			this->button5->Location = System::Drawing::Point(1914, 154);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(227, 87);
			this->button5->TabIndex = 4;
			this->button5->Text = L"CALCULER";
			this->button5->UseVisualStyleBackColor = true;
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(1415, 154);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(227, 87);
			this->button4->TabIndex = 3;
			this->button4->Text = L"CALCULER";
			this->button4->UseVisualStyleBackColor = true;
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(911, 154);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(227, 87);
			this->button3->TabIndex = 2;
			this->button3->Text = L"CALCULER";
			this->button3->UseVisualStyleBackColor = true;
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(484, 154);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(227, 87);
			this->button2->TabIndex = 1;
			this->button2->Text = L"CALCULER";
			this->button2->UseVisualStyleBackColor = true;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(36, 154);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(227, 87);
			this->button1->TabIndex = 0;
			this->button1->Text = L"CALCULER";
			this->button1->UseVisualStyleBackColor = true;
			// 
			// panel2
			// 
			this->panel2->Controls->Add(this->label7);
			this->panel2->Controls->Add(this->textBox2);
			this->panel2->Location = System::Drawing::Point(6, 720);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(2260, 138);
			this->panel2->TabIndex = 6;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(736, 62);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(199, 32);
			this->label7->TabIndex = 1;
			this->label7->Text = L"RESULTAT  = ";
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(1036, 59);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(459, 38);
			this->textBox2->TabIndex = 0;
			// 
			// panel1
			// 
			this->panel1->Controls->Add(this->dataGridView1);
			this->panel1->Location = System::Drawing::Point(6, 302);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(2260, 412);
			this->panel1->TabIndex = 5;
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Location = System::Drawing::Point(3, 0);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->RowHeadersWidth = 102;
			this->dataGridView1->RowTemplate->Height = 40;
			this->dataGridView1->Size = System::Drawing::Size(2254, 409);
			this->dataGridView1->TabIndex = 8;
			// 
			// tabPage2
			// 
			this->tabPage2->Controls->Add(this->panel5);
			this->tabPage2->Controls->Add(this->panel4);
			this->tabPage2->Location = System::Drawing::Point(10, 48);
			this->tabPage2->Name = L"tabPage2";
			this->tabPage2->Padding = System::Windows::Forms::Padding(3);
			this->tabPage2->Size = System::Drawing::Size(2285, 876);
			this->tabPage2->TabIndex = 1;
			this->tabPage2->Text = L"identifier";
			this->tabPage2->UseVisualStyleBackColor = true;
			// 
			// panel5
			// 
			this->panel5->Controls->Add(this->dataGridView2);
			this->panel5->Location = System::Drawing::Point(10, 336);
			this->panel5->Name = L"panel5";
			this->panel5->Size = System::Drawing::Size(2272, 534);
			this->panel5->TabIndex = 1;
			// 
			// dataGridView2
			// 
			this->dataGridView2->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView2->Location = System::Drawing::Point(4, 4);
			this->dataGridView2->Name = L"dataGridView2";
			this->dataGridView2->RowHeadersWidth = 102;
			this->dataGridView2->RowTemplate->Height = 40;
			this->dataGridView2->Size = System::Drawing::Size(2265, 527);
			this->dataGridView2->TabIndex = 0;
			// 
			// panel4
			// 
			this->panel4->Controls->Add(this->button8);
			this->panel4->Controls->Add(this->button7);
			this->panel4->Controls->Add(this->button6);
			this->panel4->Location = System::Drawing::Point(7, 7);
			this->panel4->Name = L"panel4";
			this->panel4->Size = System::Drawing::Size(2272, 238);
			this->panel4->TabIndex = 0;
			// 
			// button8
			// 
			this->button8->Location = System::Drawing::Point(1655, 61);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(442, 102);
			this->button8->TabIndex = 2;
			this->button8->Text = L"articles inferieur au seuil de reaprovisionnnement";
			this->button8->UseVisualStyleBackColor = true;
			// 
			// button7
			// 
			this->button7->Location = System::Drawing::Point(902, 61);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(442, 102);
			this->button7->TabIndex = 1;
			this->button7->Text = L"10 pires articles";
			this->button7->UseVisualStyleBackColor = true;
			// 
			// button6
			// 
			this->button6->Location = System::Drawing::Point(138, 61);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(442, 102);
			this->button6->TabIndex = 0;
			this->button6->Text = L"10 meilleurs articles";
			this->button6->UseVisualStyleBackColor = true;
			// 
			// tabPage3
			// 
			this->tabPage3->Controls->Add(this->textBox3);
			this->tabPage3->Controls->Add(this->button9);
			this->tabPage3->Controls->Add(this->label8);
			this->tabPage3->Controls->Add(this->panel7);
			this->tabPage3->Controls->Add(this->panel8);
			this->tabPage3->Controls->Add(this->panel9);
			this->tabPage3->Controls->Add(this->panel6);
			this->tabPage3->Location = System::Drawing::Point(10, 48);
			this->tabPage3->Name = L"tabPage3";
			this->tabPage3->Padding = System::Windows::Forms::Padding(3);
			this->tabPage3->Size = System::Drawing::Size(2285, 876);
			this->tabPage3->TabIndex = 2;
			this->tabPage3->Text = L"simuler";
			this->tabPage3->UseVisualStyleBackColor = true;
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(1593, 226);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(264, 38);
			this->textBox3->TabIndex = 4;
			// 
			// button9
			// 
			this->button9->Location = System::Drawing::Point(894, 186);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(303, 117);
			this->button9->TabIndex = 3;
			this->button9->Text = L"CALCULER";
			this->button9->UseVisualStyleBackColor = true;
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(145, 226);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(390, 64);
			this->label8->TabIndex = 2;
			this->label8->Text = L"choisir les differentes options \n a rajouter a la valeur d\'achat";
			// 
			// panel7
			// 
			this->panel7->Controls->Add(this->radioButton11);
			this->panel7->Controls->Add(this->radioButton10);
			this->panel7->Controls->Add(this->radioButton9);
			this->panel7->Location = System::Drawing::Point(1806, 445);
			this->panel7->Name = L"panel7";
			this->panel7->Size = System::Drawing::Size(444, 405);
			this->panel7->TabIndex = 1;
			// 
			// radioButton11
			// 
			this->radioButton11->AutoSize = true;
			this->radioButton11->Location = System::Drawing::Point(93, 295);
			this->radioButton11->Name = L"radioButton11";
			this->radioButton11->Size = System::Drawing::Size(228, 36);
			this->radioButton11->TabIndex = 3;
			this->radioButton11->TabStop = true;
			this->radioButton11->Text = L"demarque 5%";
			this->radioButton11->UseVisualStyleBackColor = true;
			// 
			// radioButton10
			// 
			this->radioButton10->AutoSize = true;
			this->radioButton10->Location = System::Drawing::Point(93, 184);
			this->radioButton10->Name = L"radioButton10";
			this->radioButton10->Size = System::Drawing::Size(228, 36);
			this->radioButton10->TabIndex = 2;
			this->radioButton10->TabStop = true;
			this->radioButton10->Text = L"demarque 3%";
			this->radioButton10->UseVisualStyleBackColor = true;
			// 
			// radioButton9
			// 
			this->radioButton9->AutoSize = true;
			this->radioButton9->Location = System::Drawing::Point(93, 84);
			this->radioButton9->Name = L"radioButton9";
			this->radioButton9->Size = System::Drawing::Size(228, 36);
			this->radioButton9->TabIndex = 1;
			this->radioButton9->TabStop = true;
			this->radioButton9->Text = L"demarque 2%";
			this->radioButton9->UseVisualStyleBackColor = true;
			// 
			// panel8
			// 
			this->panel8->Controls->Add(this->radioButton6);
			this->panel8->Controls->Add(this->radioButton5);
			this->panel8->Controls->Add(this->radioButton4);
			this->panel8->Location = System::Drawing::Point(691, 453);
			this->panel8->Name = L"panel8";
			this->panel8->Size = System::Drawing::Size(444, 405);
			this->panel8->TabIndex = 1;
			// 
			// radioButton6
			// 
			this->radioButton6->AutoSize = true;
			this->radioButton6->Location = System::Drawing::Point(48, 287);
			this->radioButton6->Name = L"radioButton6";
			this->radioButton6->Size = System::Drawing::Size(364, 36);
			this->radioButton6->TabIndex = 3;
			this->radioButton6->TabStop = true;
			this->radioButton6->Text = L"marge commerciale 15%";
			this->radioButton6->UseVisualStyleBackColor = true;
			// 
			// radioButton5
			// 
			this->radioButton5->AutoSize = true;
			this->radioButton5->Location = System::Drawing::Point(48, 176);
			this->radioButton5->Name = L"radioButton5";
			this->radioButton5->Size = System::Drawing::Size(364, 36);
			this->radioButton5->TabIndex = 2;
			this->radioButton5->TabStop = true;
			this->radioButton5->Text = L"marge commerciale 10%";
			this->radioButton5->UseVisualStyleBackColor = true;
			// 
			// radioButton4
			// 
			this->radioButton4->AutoSize = true;
			this->radioButton4->Location = System::Drawing::Point(48, 76);
			this->radioButton4->Name = L"radioButton4";
			this->radioButton4->Size = System::Drawing::Size(348, 36);
			this->radioButton4->TabIndex = 1;
			this->radioButton4->TabStop = true;
			this->radioButton4->Text = L"marge commerciale 5%";
			this->radioButton4->UseVisualStyleBackColor = true;
			// 
			// panel9
			// 
			this->panel9->Controls->Add(this->radioButton8);
			this->panel9->Controls->Add(this->radioButton7);
			this->panel9->Location = System::Drawing::Point(1250, 453);
			this->panel9->Name = L"panel9";
			this->panel9->Size = System::Drawing::Size(444, 397);
			this->panel9->TabIndex = 1;
			// 
			// radioButton8
			// 
			this->radioButton8->AutoSize = true;
			this->radioButton8->Location = System::Drawing::Point(49, 238);
			this->radioButton8->Name = L"radioButton8";
			this->radioButton8->Size = System::Drawing::Size(369, 36);
			this->radioButton8->TabIndex = 2;
			this->radioButton8->TabStop = true;
			this->radioButton8->Text = L"remise commerciale 10%";
			this->radioButton8->UseVisualStyleBackColor = true;
			// 
			// radioButton7
			// 
			this->radioButton7->AutoSize = true;
			this->radioButton7->Location = System::Drawing::Point(49, 116);
			this->radioButton7->Name = L"radioButton7";
			this->radioButton7->Size = System::Drawing::Size(353, 36);
			this->radioButton7->TabIndex = 1;
			this->radioButton7->TabStop = true;
			this->radioButton7->Text = L"remise commerciale 5%";
			this->radioButton7->UseVisualStyleBackColor = true;
			// 
			// panel6
			// 
			this->panel6->Controls->Add(this->radioButton3);
			this->panel6->Controls->Add(this->radioButton1);
			this->panel6->Controls->Add(this->radioButton2);
			this->panel6->Location = System::Drawing::Point(125, 453);
			this->panel6->Name = L"panel6";
			this->panel6->Size = System::Drawing::Size(444, 397);
			this->panel6->TabIndex = 0;
			// 
			// radioButton3
			// 
			this->radioButton3->AutoSize = true;
			this->radioButton3->Location = System::Drawing::Point(113, 287);
			this->radioButton3->Name = L"radioButton3";
			this->radioButton3->Size = System::Drawing::Size(130, 36);
			this->radioButton3->TabIndex = 2;
			this->radioButton3->TabStop = true;
			this->radioButton3->Text = L"TVA 3";
			this->radioButton3->UseVisualStyleBackColor = true;
			// 
			// radioButton1
			// 
			this->radioButton1->AutoSize = true;
			this->radioButton1->Location = System::Drawing::Point(113, 76);
			this->radioButton1->Name = L"radioButton1";
			this->radioButton1->Size = System::Drawing::Size(130, 36);
			this->radioButton1->TabIndex = 0;
			this->radioButton1->TabStop = true;
			this->radioButton1->Text = L"TVA 1";
			this->radioButton1->UseVisualStyleBackColor = true;
			// 
			// radioButton2
			// 
			this->radioButton2->AutoSize = true;
			this->radioButton2->Location = System::Drawing::Point(113, 176);
			this->radioButton2->Name = L"radioButton2";
			this->radioButton2->Size = System::Drawing::Size(130, 36);
			this->radioButton2->TabIndex = 1;
			this->radioButton2->TabStop = true;
			this->radioButton2->Text = L"TVA 2";
			this->radioButton2->UseVisualStyleBackColor = true;
			// 
			// FormStatistique
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(16, 31);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(2485, 1462);
			this->Controls->Add(this->tabControl1);
			this->Margin = System::Windows::Forms::Padding(8, 7, 8, 7);
			this->Name = L"FormStatistique";
			this->Text = L"Gestion Statistique";
			this->tabControl1->ResumeLayout(false);
			this->tabPage1->ResumeLayout(false);
			this->panel3->ResumeLayout(false);
			this->panel3->PerformLayout();
			this->panel2->ResumeLayout(false);
			this->panel2->PerformLayout();
			this->panel1->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->tabPage2->ResumeLayout(false);
			this->panel5->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView2))->EndInit();
			this->panel4->ResumeLayout(false);
			this->tabPage3->ResumeLayout(false);
			this->tabPage3->PerformLayout();
			this->panel7->ResumeLayout(false);
			this->panel7->PerformLayout();
			this->panel8->ResumeLayout(false);
			this->panel8->PerformLayout();
			this->panel9->ResumeLayout(false);
			this->panel9->PerformLayout();
			this->panel6->ResumeLayout(false);
			this->panel6->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion

	};
}
