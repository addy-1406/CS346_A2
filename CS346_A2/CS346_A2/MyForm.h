#pragma once

#include "StudentHome.h"
#include "AdminHome.h"
#include "FacultyHome.h"
#include "Register.h"
#include "User.h"
#include "DatabaseHelper.h"


namespace CS346_A2 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace MySql::Data::MySqlClient;

	/// <summary>
	/// Summary for MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
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
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}

	protected:
	private: System::Windows::Forms::TextBox^  textBox2;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::ComboBox^  comboBox2;
	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Button^  button2;






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
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->comboBox2 = (gcnew System::Windows::Forms::ComboBox());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(462, 161);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(200, 22);
			this->textBox2->TabIndex = 1;
			// 
			// label1
			// 
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(272, 86);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(155, 35);
			this->label1->TabIndex = 2;
			this->label1->Text = L"UserType:";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(272, 151);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(95, 32);
			this->label2->TabIndex = 3;
			this->label2->Text = L"Email:";
			this->label2->Click += gcnew System::EventHandler(this, &MyForm::label2_Click);
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(294, 341);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(133, 49);
			this->button1->TabIndex = 4;
			this->button1->Text = L"Register";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// comboBox2
			// 
			this->comboBox2->FormattingEnabled = true;
			this->comboBox2->Items->AddRange(gcnew cli::array< System::Object^  >(3) { L"Student", L"Faculty", L"Admin" });
			this->comboBox2->Location = System::Drawing::Point(462, 96);
			this->comboBox2->Name = L"comboBox2";
			this->comboBox2->Size = System::Drawing::Size(200, 24);
			this->comboBox2->TabIndex = 6;
			this->comboBox2->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm::comboBox2_SelectedIndexChanged);
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(462, 222);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(200, 22);
			this->textBox1->TabIndex = 7;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(272, 212);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(147, 32);
			this->label3->TabIndex = 8;
			this->label3->Text = L"Password:";
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(520, 341);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(142, 49);
			this->button2->TabIndex = 9;
			this->button2->Text = L"Login";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(955, 541);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->comboBox2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->textBox2);
			this->Name = L"MyForm";
			this->Text = L"Root Page";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void label2_Click(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
				 this->Hide();
				 comboBox2->Text = "";
				 textBox1->Text = "";
				 textBox2->Text = "";
				 Register^ RegisterPage = gcnew Register(this);
				 RegisterPage->ShowDialog();

	}
private: System::Void comboBox2_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
}
		 public: User^ user;
private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
			 String^ userType = comboBox2->Text;
			 String^ email = textBox2->Text;
			 String^ password = textBox1->Text;
			 comboBox2->Text = "";
			 textBox1->Text = "";
			 textBox2->Text = "";

			 try{
				 String^ query = "select Email from auth where email= @Email";
				 array<MySqlParameter^>^ parameters = {
					 gcnew MySqlParameter("@Email", email)
				 };
				 MySqlDataReader^ dr = DatabaseHelper::ExecuteQuery(query, parameters);
				 
				 int c = 0;
				 while (dr->Read()){
					 c++;
				 }
				 dr->Close();
				 if (c != 0){
					 query = "Select * from auth where email= @Email and password_hash = MD5( @Password ) and userType = @UserType";
					 array<MySqlParameter^>^ parameters = {
						 gcnew MySqlParameter("@Email", email),
						 gcnew MySqlParameter("@Password", password),
						 gcnew MySqlParameter("@UserType", userType)
					 };

					 dr = DatabaseHelper::ExecuteQuery(query, parameters);

					 c = 0;
					 while (dr->Read()){
						 user = gcnew User;
						 user->userID = Int32::Parse(dr->GetString(0));
						 user->email = dr->GetString(4);
						 user->userType = dr->GetString(2);
						 c++;
					 }
					 if (c == 0){
						 MessageBox::Show("Invalid password/UserType");
					 }
					 else{
						 this->Hide();
						 if (userType == "Student"){
							 StudentHome^ StudentHomePage = gcnew StudentHome(this, user);
							 StudentHomePage->ShowDialog();
						 }
						 else if (userType == "Faculty"){
							 FacultyHome^ FacultyHomePage = gcnew FacultyHome(this, user);
							 FacultyHomePage->ShowDialog();
						 }
						 else if (userType == "Admin"){
							 AdminHome^ AdminHomePage = gcnew AdminHome(this, user);
							 AdminHomePage->ShowDialog();
						 }
					 }
				 }
				 else{
					 MessageBox::Show("User not found");
				 }	
			 }
			 catch (Exception^ ex){
				 MessageBox::Show(ex->Message);
			 }
			 }
private: System::Void MyForm_Load(System::Object^  sender, System::EventArgs^  e) {
}
};
}
