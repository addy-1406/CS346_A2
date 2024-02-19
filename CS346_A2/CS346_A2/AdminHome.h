#pragma once

#include "User.h"

namespace CS346_A2 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for AdminHome
	/// </summary>
	public ref class AdminHome : public System::Windows::Forms::Form
	{
	public:
		AdminHome(Form^ rootForm, User^ user)
		{
			InitializeComponent();
			globalForm = rootForm;
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~AdminHome()
		{
			if (components)
			{
				delete components;
			}
		}

	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Panel^  panel1;
	protected:

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
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(41, 572);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(92, 39);
			this->button1->TabIndex = 1;
			this->button1->Text = L"Logout";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &AdminHome::button1_Click);
			// 
			// panel1
			// 
			this->panel1->Location = System::Drawing::Point(214, 48);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(851, 563);
			this->panel1->TabIndex = 2;
			this->panel1->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &AdminHome::panel1_Paint);
			// 
			// AdminHome
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1103, 661);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->button1);
			this->Name = L"AdminHome";
			this->Text = L"AdminHome";
			this->Load += gcnew System::EventHandler(this, &AdminHome::AdminHome_Load);
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void AdminHome_Load(System::Object^  sender, System::EventArgs^  e) {
	}
	public: Form^ globalForm;
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
				 this->Close();
				 globalForm->Show();
	}
	private: System::Void panel1_Paint(System::Object^  sender, System::Windows::Forms::PaintEventArgs^  e) {
	}
	};
}
