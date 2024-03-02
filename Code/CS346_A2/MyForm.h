#pragma once

#include <comdef.h>
#include "StudentHome.h"
#include "AdminHome.h"
#include "FacultyHome.h"
#include "Register.h"
#include "User.h"
#include "DatabaseHelper.h"
#include <windows.h>
#include <sqlext.h>
#include <sqltypes.h>
#include <sql.h>
#include <vcclr.h>

#define SQL_RESULT_LEN 240
#define SQL_RETURN_CODE_LEN 1000


using namespace std;


namespace CS346_A2 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Data::SqlClient;


	/// <summary>
	/// Summary for MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(Panel^ GlobalPanel, Form^ global_form)
		{
			InitializeComponent();
			OuterOuterPanel = GlobalPanel;
			//
			//TODO: Add the constructor code here
			//
			Global_form = global_form;
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



	private: System::Windows::Forms::ComboBox^  comboBox2;
	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::TextBox^  textBox2;

	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Button^  button1;

	private: System::Windows::Forms::PictureBox^  pictureBox2;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::Label^  label8;
	private: System::Windows::Forms::PictureBox^  pictureBox1;
	private: System::Windows::Forms::Label^  label1;









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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->comboBox2 = (gcnew System::Windows::Forms::ComboBox());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// textBox2
			// 
			this->textBox2->Font = (gcnew System::Drawing::Font(L"Segoe UI Symbol", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox2->Location = System::Drawing::Point(318, 417);
			this->textBox2->Name = L"textBox2";
			this->textBox2->PasswordChar = '*';
			this->textBox2->Size = System::Drawing::Size(319, 30);
			this->textBox2->TabIndex = 1;
			// 
			// comboBox2
			// 
			this->comboBox2->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->comboBox2->Font = (gcnew System::Drawing::Font(L"Segoe UI Symbol", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->comboBox2->FormattingEnabled = true;
			this->comboBox2->Items->AddRange(gcnew cli::array< System::Object^  >(3) { L"Student", L"Faculty", L"Admin" });
			this->comboBox2->Location = System::Drawing::Point(317, 260);
			this->comboBox2->Name = L"comboBox2";
			this->comboBox2->Size = System::Drawing::Size(319, 31);
			this->comboBox2->TabIndex = 6;
			this->comboBox2->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm::comboBox2_SelectedIndexChanged);
			// 
			// textBox1
			// 
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Segoe UI Symbol", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox1->Location = System::Drawing::Point(318, 339);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(319, 30);
			this->textBox1->TabIndex = 7;
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(20)), static_cast<System::Int32>(static_cast<System::Byte>(93)),
				static_cast<System::Int32>(static_cast<System::Byte>(160)));
			this->button2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button2->Font = (gcnew System::Drawing::Font(L"Segoe UI Symbol", 12, System::Drawing::FontStyle::Bold));
			this->button2->ForeColor = System::Drawing::Color::White;
			this->button2->Location = System::Drawing::Point(318, 488);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(142, 49);
			this->button2->TabIndex = 9;
			this->button2->Text = L"Login";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// pictureBox2
			// 
			this->pictureBox2->BackColor = System::Drawing::Color::White;
			this->pictureBox2->Location = System::Drawing::Point(280, 204);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(397, 438);
			this->pictureBox2->TabIndex = 11;
			this->pictureBox2->TabStop = false;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->BackColor = System::Drawing::Color::White;
			this->label4->Font = (gcnew System::Drawing::Font(L"Segoe UI Symbol", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->ForeColor = System::Drawing::SystemColors::ControlText;
			this->label4->Location = System::Drawing::Point(313, 237);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(72, 20);
			this->label4->TabIndex = 12;
			this->label4->Text = L"User Role";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->BackColor = System::Drawing::Color::White;
			this->label5->Font = (gcnew System::Drawing::Font(L"Segoe UI Symbol", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->ForeColor = System::Drawing::SystemColors::ControlText;
			this->label5->Location = System::Drawing::Point(313, 316);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(46, 20);
			this->label5->TabIndex = 13;
			this->label5->Text = L"Email";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->BackColor = System::Drawing::Color::White;
			this->label6->Font = (gcnew System::Drawing::Font(L"Segoe UI Symbol", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->ForeColor = System::Drawing::SystemColors::ControlText;
			this->label6->Location = System::Drawing::Point(314, 394);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(71, 20);
			this->label6->TabIndex = 14;
			this->label6->Text = L"Password";
			this->label6->Click += gcnew System::EventHandler(this, &MyForm::label6_Click);
			// 
			// label8
			// 
			this->label8->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(20)), static_cast<System::Int32>(static_cast<System::Byte>(93)),
				static_cast<System::Int32>(static_cast<System::Byte>(160)));
			this->label8->Font = (gcnew System::Drawing::Font(L"Segoe UI Symbol", 19.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label8->ForeColor = System::Drawing::Color::OldLace;
			this->label8->Location = System::Drawing::Point(280, 140);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(397, 73);
			this->label8->TabIndex = 20;
			this->label8->Text = L"USER LOGIN";
			this->label8->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(20)), static_cast<System::Int32>(static_cast<System::Byte>(93)),
				static_cast<System::Int32>(static_cast<System::Byte>(160)));
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button1->Font = (gcnew System::Drawing::Font(L"Segoe UI Symbol", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->ForeColor = System::Drawing::Color::White;
			this->button1->Location = System::Drawing::Point(479, 488);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(157, 49);
			this->button1->TabIndex = 26;
			this->button1->Text = L"Reset";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click_1);
			// 
			// pictureBox1
			// 
			this->pictureBox1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.BackgroundImage")));
			this->pictureBox1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pictureBox1->Location = System::Drawing::Point(3, -3);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(961, 107);
			this->pictureBox1->TabIndex = 27;
			this->pictureBox1->TabStop = false;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::White;
			this->label1->Font = (gcnew System::Drawing::Font(L"Segoe UI Symbol", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::Red;
			this->label1->Location = System::Drawing::Point(314, 565);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(0, 20);
			this->label1->TabIndex = 28;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(177)), static_cast<System::Int32>(static_cast<System::Byte>(212)),
				static_cast<System::Int32>(static_cast<System::Byte>(224)));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(954, 673);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->comboBox2);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->pictureBox2);
			this->Name = L"MyForm";
			this->Text = L"Root Page";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

	public: Panel^ OuterOuterPanel;
	private: System::Void label2_Click(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
				 this->Hide();
				 comboBox2->Text = "";
				 textBox1->Text = "";
				 textBox2->Text = "";
				 Register^ RegisterPage = gcnew Register();
				 RegisterPage->ShowDialog();

	}
private: System::Void comboBox2_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
}
		 public: User^ user;
		 public: Form^ Global_form;

		 
private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
			 String^ userType = comboBox2->Text;
			 String^ email = textBox1->Text;
			 String^ password = textBox2->Text;
			 String^ password_hash = MiscellaneousFunctions::ComputeMD5Hash(password);
			 comboBox2->Text = "";
			 textBox1->Text = "";
			 textBox2->Text = "";
			 label1->Text = "";

			 try{
				 String^ query = "select Email from auth where email= @Email";
				 array<SqlParameter^>^ parameters = {
					 gcnew SqlParameter("@Email", email)
				 };
				 SqlDataReader^ dr = DatabaseHelper::ExecuteQuery(query, parameters);
				 
				 int c = 0;
				 while (dr->Read()){
					 c++;
				 }
				 dr->Close();
				 if (c != 0){

					 query = "Select * FROM [dbo].[auth] WHERE email = @Email AND password_hash = @Password AND userType = @UserType;";
					 array<SqlParameter^>^ parameters = {
						 gcnew SqlParameter("@Email", email),
						 gcnew SqlParameter("@Password", password_hash),
						 gcnew SqlParameter("@UserType", userType)
					 };

					 dr = DatabaseHelper::ExecuteQuery(query, parameters);

					 c = 0;
					 while (dr->Read()){
						 user = gcnew User;	
						 user->userID = dr->GetInt32(0);
						 user->email = dr->GetString(4);
						 user->userType = dr->GetString(2);
						 c++;	
					 }
					 if (c == 0){
						 label1->Text = "Invalid password or User Role";
					 }
					 else{
						 Form^ ToShow;
						 if (userType == "Student"){
							 ToShow = gcnew StudentHome(Global_form, user, OuterOuterPanel);
						 }
						 else if (userType == "Faculty"){
							 ToShow = gcnew FacultyHome(Global_form, user, OuterOuterPanel);
						 }
						 else if (userType == "Admin"){
							 ToShow = gcnew AdminHome(Global_form, user,OuterOuterPanel);
						 }
						 ToShow->ControlBox = false; // Hide the control box
						 ToShow->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None; // Remove the border

						 // Set its properties
						 ToShow->TopLevel = false;
						 ToShow->AutoScroll = true;
						 ToShow->Dock = DockStyle::Fill;

						 // Add it to the panel
						 OuterOuterPanel->Controls->Clear();
						 OuterOuterPanel->Controls->Add(ToShow);
						 ToShow->Show();
					 }
				 }
				 else{
					 label1->Text = "User not registered";
				 }	
			 }
			 catch (Exception^ ex){
				 MessageBox::Show(ex->Message);
			 }
			 }
private: System::Void MyForm_Load(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void label6_Click(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {

}

private: System::Void label1_Click(System::Object^  sender, System::EventArgs^  e) {


				
}
private: System::Void button1_Click_1(System::Object^  sender, System::EventArgs^  e) {
		comboBox2->Text = "";
		textBox1->Text = "";
		textBox2->Text = "";
		label1->Text = "";
}
};
}

