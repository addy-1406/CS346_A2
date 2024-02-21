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
	/// Summary for StudentHome
	/// </summary>
	public ref class StudentHome : public System::Windows::Forms::Form
	{
	public:
		StudentHome(Form^ rootForm, User^ User, Panel^ GlobalPanel)
		{
			InitializeComponent();
			globalForm = rootForm;
			user = User;
			globalPanel = GlobalPanel;
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~StudentHome()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Panel^  panel1;
	protected:
	private: System::Windows::Forms::Button^  button1;



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
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// panel1
			// 
			this->panel1->Location = System::Drawing::Point(233, 62);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(851, 563);
			this->panel1->TabIndex = 4;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(60, 586);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(92, 39);
			this->button1->TabIndex = 3;
			this->button1->Text = L"Logout";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &StudentHome::button1_Click);
			// 
			// StudentHome
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1145, 686);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->button1);
			this->Name = L"StudentHome";
			this->Text = L"StudentHome";
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void label1_Click(System::Object^  sender, System::EventArgs^  e) {
	}
	public: Form^ globalForm;
	public: Panel^ globalPanel;
	public: User^ user;
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
				 globalPanel->Controls->Clear();
				 globalPanel->Controls->Add(globalForm);
				 globalForm->Show();
	}
	};
}
