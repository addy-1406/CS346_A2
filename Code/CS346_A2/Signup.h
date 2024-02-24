#pragma once

#include "User.h"
#include "MiscellaneousFunctions.h"
#include "DatabaseHelper.h"
#include <cstdlib>

namespace CS346_A2 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	//using namespace MySql::Data::MySqlClient;
	using namespace System::Data::SqlClient;


	/// <summary>
	/// Summary for Signup
	/// </summary>
	public ref class Signup : public System::Windows::Forms::Form
	{
	private: System::Windows::Forms::DataGridView^  dataGridView1;
	public:
		User^ admin;
		String^ name = "";
		String^ dob = "";
		String^ contact = "";
		String^ address = "";
		String^ email = "";
		String^ approval_status = "";
		String^ enrollment_year = "";
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column0;
	public:
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column2;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column3;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column4;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column5;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column6;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column7;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::TextBox^  idbox;

	private: System::Windows::Forms::TextBox^  textBox1;
			 String^ user_type = "";


	public:


	public:


	public:

		Signup(void)
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
		~Signup()
		{
			if (components)
			{
				delete components;
			}
		}


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
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->idbox = (gcnew System::Windows::Forms::TextBox());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->Column0 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column2 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column3 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column4 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column5 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column6 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column7 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->panel1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->SuspendLayout();
			// 
			// panel1
			// 
			this->panel1->Controls->Add(this->button2);
			this->panel1->Controls->Add(this->button1);
			this->panel1->Controls->Add(this->idbox);
			this->panel1->Controls->Add(this->textBox1);
			this->panel1->Controls->Add(this->dataGridView1);
			this->panel1->Location = System::Drawing::Point(2, 2);
			this->panel1->Margin = System::Windows::Forms::Padding(2);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(627, 411);
			this->panel1->TabIndex = 2;
			this->panel1->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &Signup::panel1_Paint);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(314, 375);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(96, 20);
			this->button2->TabIndex = 4;
			this->button2->Text = L"Reject";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &Signup::button2_Click);
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(314, 340);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(96, 20);
			this->button1->TabIndex = 3;
			this->button1->Text = L"Approve";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Signup::button1_Click);
			// 
			// idbox
			// 
			this->idbox->Location = System::Drawing::Point(185, 366);
			this->idbox->Name = L"idbox";
			this->idbox->Size = System::Drawing::Size(108, 20);
			this->idbox->TabIndex = 2;
			// 
			// textBox1
			// 
			this->textBox1->BackColor = System::Drawing::SystemColors::Control;
			this->textBox1->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox1->Location = System::Drawing::Point(38, 366);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(141, 13);
			this->textBox1->TabIndex = 1;
			this->textBox1->Text = L"Enter ID to Approve/Reject:";
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(8) {
				this->Column0,
					this->Column1, this->Column2, this->Column3, this->Column4, this->Column5, this->Column6, this->Column7
			});
			this->dataGridView1->Location = System::Drawing::Point(0, 0);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->Size = System::Drawing::Size(627, 334);
			this->dataGridView1->TabIndex = 0;
			// 
			// Column0
			// 
			this->Column0->HeaderText = L"Column8";
			this->Column0->Name = L"Column0";
			this->Column0->Width = 60;
			// 
			// Column1
			// 
			this->Column1->HeaderText = L"Column1";
			this->Column1->Name = L"Column1";
			this->Column1->Width = 85;
			// 
			// Column2
			// 
			this->Column2->HeaderText = L"Column2";
			this->Column2->Name = L"Column2";
			this->Column2->Width = 75;
			// 
			// Column3
			// 
			this->Column3->HeaderText = L"Column3";
			this->Column3->Name = L"Column3";
			this->Column3->Width = 75;
			// 
			// Column4
			// 
			this->Column4->HeaderText = L"Column4";
			this->Column4->Name = L"Column4";
			this->Column4->Width = 80;
			// 
			// Column5
			// 
			this->Column5->HeaderText = L"Column5";
			this->Column5->Name = L"Column5";
			this->Column5->Width = 75;
			// 
			// Column6
			// 
			this->Column6->HeaderText = L"Column6";
			this->Column6->Name = L"Column6";
			this->Column6->Width = 75;
			// 
			// Column7
			// 
			this->Column7->HeaderText = L"Column7";
			this->Column7->Name = L"Column7";
			this->Column7->Width = 75;
			// 
			// Signup
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(742, 549);
			this->Controls->Add(this->panel1);
			this->Margin = System::Windows::Forms::Padding(2);
			this->Name = L"Signup";
			this->Text = L"Signup";
			this->Load += gcnew System::EventHandler(this, &Signup::Signup_Load);
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->ResumeLayout(false);

		}

#pragma endregion
	private: System::Void Signup_Load(System::Object^  sender, System::EventArgs^  e) {

				 String^ query = "select * from [dbo].[signup]";
				 //cmd->Parameters->AddWithValue("@sem", this->Current_Semester);

				 SqlDataReader^ dr = DatabaseHelper::ExecuteQuery(query);

				 int User_id = 0;

				 while (dr->Read()){
					 DateTime date = DateTime::Now;
					 User_id++;
					 // Extracting values from the database result set and assigning them to variables
					 name = dr->GetString(0);
					 date = dr->GetDateTime(1);
					 dob = date.ToString("yyyy-mm-dd");
					 contact = dr->GetString(2);
					 address = dr->GetString(3);
					 email = dr->GetString(4);
					 approval_status = dr->GetString(5);
					 user_type = dr->GetString(6);




					int rowIndex = this->dataGridView1->Rows->Add(User_id, name, dob, contact, address, email, approval_status, user_type);



					 // Now you have extracted all the values and assigned them to the respective variables
				 }
	}

#pragma endregion
	public: Form^ globalForm;
	private: System::Void panel1_Paint(System::Object^  sender, System::Windows::Forms::PaintEventArgs^  e) {
	}

	private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {

				 // int id = Int32::Parse(idbox->Text);
				 String^ name = idbox->Text;
				 String^ approve = "Rejected";

				 String^ query = "update [dbo].[signup] set Approval_status='" + approve + "' where Name= @Name";
				 array<SqlParameter^>^ parameters = {
					 gcnew SqlParameter("@Name", name)
				 };

				 SqlDataReader^ dr = DatabaseHelper::ExecuteQuery(query, parameters);
	}
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {

				 // int id = Int32::Parse(idbox->Text);
				 String^ name = idbox->Text;
				 String^ approve = "Approved";

				 String^ pass_hash = nullptr;


				 String^ query = "update [dbo].[signup] set Approval_status = '" + approve + "' where Name = @Name";
				 array<SqlParameter^>^ parameters = {
					 gcnew SqlParameter("@Name", name)
				 };

				 SqlDataReader^ dr = DatabaseHelper::ExecuteQuery(query, parameters);
				 MessageBox::Show(" Request Approved");
				 dr->Close();

				 query = "select Name, DOB, Contact, Address, Email, Approval_Status, UserType, Password_hash, enrollment_year from [dbo].[signup]  where Name = @Name";
				 array<SqlParameter^>^ parameters2 = {
					 gcnew SqlParameter("@Name", name)
				 };
				 dr = DatabaseHelper::ExecuteQuery(query, parameters2);

				 int User_id = 0;
				 while (dr->Read()){
					 DateTime date = DateTime::Now;
					 User_id++;
					 // Extracting values from the database result set and assigning them to variables
					 name = dr->GetString(0);
					 date = dr->GetDateTime(1);
					 dob = date.ToString("yyyy-mm-dd");
					 contact = dr->GetString(2);
					 address = dr->GetString(3);
					 email = dr->GetString(4);
					 approval_status = dr->GetString(5);
					 user_type = dr->GetString(6);
					 pass_hash = dr->GetString(7);
					 enrollment_year = dr->GetString(8);
				 }

				 dr->Close();

				 String^ user_id;
				 if(user_type == "Student")  user_id = MiscellaneousFunctions::generateUserIdStudent(enrollment_year);
				 if(user_type == "Faculty")  user_id = MiscellaneousFunctions::generateUserIdProf(enrollment_year);

				 query =  "insert into [dbo].[auth] values(@UserId,@PassHash,@UserType,@UserType,@Email)";
				 array<SqlParameter^>^ parameters3 = {
					 gcnew SqlParameter("@UserId", user_id),
					 gcnew SqlParameter("@PassHash", pass_hash),
					 gcnew SqlParameter("@UserType", user_type),
					 gcnew SqlParameter("@Email", email)
				 };
				 dr = DatabaseHelper::ExecuteQuery(query, parameters3);
				 MessageBox::Show("Inserted values"); 

	}
};
}
