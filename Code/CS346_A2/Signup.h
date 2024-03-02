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

	public:







	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::DataGridViewCheckBoxColumn^  Column0;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column2;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column3;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column4;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column5;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column6;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column7;

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
			System::Windows::Forms::DataGridViewCellStyle^  dataGridViewCellStyle1 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->Column0 = (gcnew System::Windows::Forms::DataGridViewCheckBoxColumn());
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
			this->panel1->Controls->Add(this->dataGridView1);
			this->panel1->Location = System::Drawing::Point(2, 2);
			this->panel1->Margin = System::Windows::Forms::Padding(2);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(741, 536);
			this->panel1->TabIndex = 2;
			this->panel1->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &Signup::panel1_Paint);
			// 
			// button2
			// 
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button2->Location = System::Drawing::Point(386, 421);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(134, 43);
			this->button2->TabIndex = 4;
			this->button2->Text = L"Reject";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &Signup::button2_Click);
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->Location = System::Drawing::Point(216, 421);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(140, 43);
			this->button1->TabIndex = 3;
			this->button1->Text = L"Approve";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Signup::button1_Click);
			// 
			// dataGridView1
			// 
			this->dataGridView1->BackgroundColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(177)),
				static_cast<System::Int32>(static_cast<System::Byte>(212)), static_cast<System::Int32>(static_cast<System::Byte>(214)));
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(8) {
				this->Column0,
					this->Column1, this->Column2, this->Column3, this->Column4, this->Column5, this->Column6, this->Column7
			});
			this->dataGridView1->Location = System::Drawing::Point(3, 0);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->RowHeadersVisible = false;
			this->dataGridView1->Size = System::Drawing::Size(735, 402);
			this->dataGridView1->TabIndex = 0;
			// 
			// Column0
			// 
			this->Column0->HeaderText = L"";
			this->Column0->Name = L"Column0";
			this->Column0->Resizable = System::Windows::Forms::DataGridViewTriState::True;
			this->Column0->SortMode = System::Windows::Forms::DataGridViewColumnSortMode::Automatic;
			this->Column0->Width = 60;
			// 
			// Column1
			// 
			dataGridViewCellStyle1->SelectionForeColor = System::Drawing::Color::Transparent;
			this->Column1->DefaultCellStyle = dataGridViewCellStyle1;
			this->Column1->HeaderText = L"Name";
			this->Column1->Name = L"Column1";
			// 
			// Column2
			// 
			this->Column2->HeaderText = L"DOB";
			this->Column2->Name = L"Column2";
			this->Column2->Width = 95;
			// 
			// Column3
			// 
			this->Column3->HeaderText = L"Contact";
			this->Column3->Name = L"Column3";
			this->Column3->Width = 95;
			// 
			// Column4
			// 
			this->Column4->HeaderText = L"Address";
			this->Column4->Name = L"Column4";
			this->Column4->Width = 95;
			// 
			// Column5
			// 
			this->Column5->HeaderText = L"Email";
			this->Column5->Name = L"Column5";
			this->Column5->Width = 95;
			// 
			// Column6
			// 
			this->Column6->HeaderText = L"Approval Status";
			this->Column6->Name = L"Column6";
			this->Column6->Width = 95;
			// 
			// Column7
			// 
			this->Column7->HeaderText = L"Designation";
			this->Column7->Name = L"Column7";
			this->Column7->Width = 95;
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
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->ResumeLayout(false);

		}

#pragma endregion
	private: System::Void Signup_Load(System::Object^  sender, System::EventArgs^  e) {
				 dataGridView1->AllowUserToAddRows = false;


				 String^ query = "select * from [dbo].[signup]";
				 //cmd->Parameters->AddWithValue("@sem", this->Current_Semester);

				 SqlDataReader^ dr = DatabaseHelper::ExecuteQuery(query);

				 //int User_id = 0;

				 while (dr->Read()){
					 DateTime date = DateTime::Now;
					 // User_id++;
					 // Extracting values from the database result set and assigning them to variables
					 name = dr->GetString(0);
					 date = dr->GetDateTime(1);
					 dob = date.ToString("yyyy-MM-dd");
					 contact = dr->GetString(2);
					 address = dr->GetString(3);
					 email = dr->GetString(4);
					 approval_status = dr->GetString(5);
					 user_type = dr->GetString(6);

					 int rowIndex = this->dataGridView1->Rows->Add(false, name, dob, contact, address, email, approval_status, user_type);
					 // int rowIndex = this->dataGridView1->Rows->Add(User_id,name, dob, contact, address, email, approval_status, user_type);

				 }

				 dataGridView1->TabStop = false;
				 dataGridView1->ClearSelection();
	}

#pragma endregion
	public: Form^ globalForm;
	private: System::Void panel1_Paint(System::Object^  sender, System::Windows::Forms::PaintEventArgs^  e) {
	}

	private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {

				 String^ cellValue;
				 for each (DataGridViewRow^ row in dataGridView1->Rows) {
					 DataGridViewCheckBoxCell^ checkBox = dynamic_cast<DataGridViewCheckBoxCell^>(row->Cells[0]);

					 if (checkBox != nullptr && System::Convert::ToBoolean(checkBox->Value)) {
						 cellValue = row->Cells["Column5"]->Value->ToString();
						 // MessageBox::Show("Checked row value: " + cellValue);
						 break; // Exit the loop after the first checked row
					 }
				 }

				 // String^ name = idbox->Text;
				 String^ approve = "Rejected";

				 String^ query = "update [dbo].[signup] set Approval_status='" + approve + "' where Email= @Email";
				 array<SqlParameter^>^ parameters = {
					 gcnew SqlParameter("@Email", cellValue)
				 };

				 SqlDataReader^ dr = DatabaseHelper::ExecuteQuery(query, parameters);
	}
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {

				 // int id = Int32::Parse(idbox->Text);
				 //String^ name = idbox->Text;
				 String^ approve = "Approved";

				 String^ pass_hash = nullptr;


				 String^ cellValue;
				 for each (DataGridViewRow^ row in dataGridView1->Rows) {
					 DataGridViewCheckBoxCell^ checkBox = dynamic_cast<DataGridViewCheckBoxCell^>(row->Cells[0]);

					 if (checkBox != nullptr && System::Convert::ToBoolean(checkBox->Value)) {
						 cellValue = row->Cells["Column5"]->Value->ToString();
						 // MessageBox::Show("Checked row value: " + cellValue);
						 break; // Exit the loop after the first checked row
					 }
				 }

				 String^ query = "update [dbo].[signup] set Approval_status = '" + approve + "' where Email = @Email";
				 array<SqlParameter^>^ parameters = {
					 gcnew SqlParameter("@Email", cellValue)
				 };

				 SqlDataReader^ dr = DatabaseHelper::ExecuteQuery(query, parameters);
				 MessageBox::Show(" Request Approved");
				 dr->Close();

				 query = "select Name, DOB, Contact, Address, Email, Approval_Status, UserType, Password_hash, enrollment_year from [dbo].[signup]  where Email = @Email";
				 array<SqlParameter^>^ parameters2 = {
					 gcnew SqlParameter("@Email", cellValue)
				 };
				 dr = DatabaseHelper::ExecuteQuery(query, parameters2);

				 int User_id = 0;
				 DateTime date;
				 while (dr->Read()){
					 date = DateTime::Now;
					 User_id++;
					 // Extracting values from the database result set and assigning them to variables
					 name = dr->GetString(0);
					 date = dr->GetDateTime(1);
					 dob = date.ToString("yyyy-MM-dd");
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
				 if (user_type == "Student")  user_id = MiscellaneousFunctions::generateUserIdStudent(enrollment_year);
				 if (user_type == "Faculty")  user_id = MiscellaneousFunctions::generateUserIdProf(enrollment_year);

				 query = "insert into [dbo].[auth] values(@UserId,@PassHash,@UserType,@UserType,@Email)";
				 array<SqlParameter^>^ parameters3 = {
					 gcnew SqlParameter("@UserId", user_id),
					 gcnew SqlParameter("@PassHash", pass_hash),
					 gcnew SqlParameter("@UserType", user_type),
					 gcnew SqlParameter("@Email", email)
				 };
				 dr = DatabaseHelper::ExecuteQuery(query, parameters3);
				 dr->Close();

				 if (user_type == "Student")
				 {
					 query = "insert into [dbo].[student] values(@UserId,@Name,@dob,@contact,@enrollment_year,@address,@current_Sem,@email)";
					 if (enrollment_year == "2020")
					 {
						 array<SqlParameter^>^ parameters4 = {
							 gcnew SqlParameter("@UserId", user_id),
							 gcnew SqlParameter("@Name", name),
							 gcnew SqlParameter("@dob", date),
							 gcnew SqlParameter("@contact", contact),
							 gcnew SqlParameter("@enrollment_year", enrollment_year),
							 gcnew SqlParameter("@address", address),
							 gcnew SqlParameter("@current_Sem", 8),
							 gcnew SqlParameter("@email", email)
						 };
						 dr = DatabaseHelper::ExecuteQuery(query, parameters4);
						 dr->Close();
					 }
					 else if (enrollment_year == "2021")
					 {
						 array<SqlParameter^>^ parameters5 = {
							 gcnew SqlParameter("@UserId", user_id),
							 gcnew SqlParameter("@Name", name),
							 gcnew SqlParameter("@dob", date),
							 gcnew SqlParameter("@contact", contact),
							 gcnew SqlParameter("@enrollment_year", enrollment_year),
							 gcnew SqlParameter("@address", address),
							 gcnew SqlParameter("@current_Sem", 6),
							 gcnew SqlParameter("@email", email)
						 };
						 dr = DatabaseHelper::ExecuteQuery(query, parameters5);
						 dr->Close();
					 }
					 else if (enrollment_year == "2022")
					 {
						 array<SqlParameter^>^ parameters6 = {
							 gcnew SqlParameter("@UserId", user_id),
							 gcnew SqlParameter("@Name", name),
							 gcnew SqlParameter("@dob", date),
							 gcnew SqlParameter("@contact", contact),
							 gcnew SqlParameter("@enrollment_year", enrollment_year),
							 gcnew SqlParameter("@address", address),
							 gcnew SqlParameter("@current_Sem", 4),
							 gcnew SqlParameter("@email", email)
						 };
						 dr = DatabaseHelper::ExecuteQuery(query, parameters6);
						 dr->Close();
					 }
					 else if (enrollment_year == "2023")
					 {
						 array<SqlParameter^>^ parameters7 = {
							 gcnew SqlParameter("@UserId", user_id),
							 gcnew SqlParameter("@Name", name),
							 gcnew SqlParameter("@dob", date),
							 gcnew SqlParameter("@contact", contact),
							 gcnew SqlParameter("@enrollment_year", enrollment_year),
							 gcnew SqlParameter("@address", address),
							 gcnew SqlParameter("@current_Sem", 2),
							 gcnew SqlParameter("@email", email)
						 };
						 dr = DatabaseHelper::ExecuteQuery(query, parameters7);
						 dr->Close();
					 }
				 }
				 else
				 {
					 query = "insert into [dbo].[faculty] values(@UserId,@Name,@dob,@contact,@email,@room_num,@enrollment_year,@research_interest,@designation)";
					 array<SqlParameter^>^ parameters8 = {
						 gcnew SqlParameter("@UserId", user_id),
						 gcnew SqlParameter("@Name", name),
						 gcnew SqlParameter("@dob", date),
						 gcnew SqlParameter("@contact", contact),
						 gcnew SqlParameter("@email", email),
						 gcnew SqlParameter("@room_num", NULL),
						 gcnew SqlParameter("@enrollment_year", enrollment_year),
						 gcnew SqlParameter("@research_interest", NULL),
						 gcnew SqlParameter("@designation", "Assistant Professor")

					 };
					 dr = DatabaseHelper::ExecuteQuery(query, parameters8);
					 dr->Close();
				 }
				 MessageBox::Show("Inserted values");

	}
	};
}