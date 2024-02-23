#pragma once

#include "User.h"
#include "DatabaseHelper.h"

namespace CS346_A2 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Data::SqlClient;


	/// <summary>
	/// Summary for Grade
	/// </summary>
	public ref class Grade : public System::Windows::Forms::Form
	{
	public:

		User^ admin;
		String^ user_id = "";
		String^ course_id = "";
		String^ grade = "";
		String^ approval_status = "";
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column1;
	public:
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column2;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column3;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column4;


	public:

		Grade(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}


	private: System::Windows::Forms::DataGridView^  dataGridView1;


	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~Grade()
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
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->Column1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column2 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column3 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column4 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->panel1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->SuspendLayout();
			// 
			// panel1
			// 
			this->panel1->Controls->Add(this->dataGridView1);
			this->panel1->Location = System::Drawing::Point(2, 2);
			this->panel1->Margin = System::Windows::Forms::Padding(2);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(627, 411);
			this->panel1->TabIndex = 2;
			this->panel1->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &Grade::panel1_Paint);
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(4) {
				this->Column1,
					this->Column2, this->Column3, this->Column4
			});
			this->dataGridView1->Location = System::Drawing::Point(0, 0);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->Size = System::Drawing::Size(625, 410);
			this->dataGridView1->TabIndex = 0;
			// 
			// Column1
			// 
			this->Column1->HeaderText = L"Column1";
			this->Column1->Name = L"Column1";
			this->Column1->Width = 145;
			// 
			// Column2
			// 
			this->Column2->HeaderText = L"Column2";
			this->Column2->Name = L"Column2";
			this->Column2->Width = 145;
			// 
			// Column3
			// 
			this->Column3->HeaderText = L"Column3";
			this->Column3->Name = L"Column3";
			this->Column3->Width = 145;
			// 
			// Column4
			// 
			this->Column4->HeaderText = L"Column4";
			this->Column4->Name = L"Column4";
			this->Column4->Width = 145;
			// 
			// Grade
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(742, 549);
			this->Controls->Add(this->panel1);
			this->Margin = System::Windows::Forms::Padding(2);
			this->Name = L"Grade";
			this->Text = L"Grade";
			this->Load += gcnew System::EventHandler(this, &Grade::Grade_Load);
			this->panel1->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->ResumeLayout(false);

		}

#pragma endregion
	private: System::Void Grade_Load(System::Object^  sender, System::EventArgs^  e) {

				 String^ query = "select User_ID , CourseCode, Grade, Approval_Status from [dbo].[grade]";
				 //cmd->Parameters->AddWithValue("@sem", this->Current_Semester);

				 SqlDataReader^ dr = DatabaseHelper::ExecuteQuery(query);;



				 while (dr->Read()){
					 // Extracting values from the database result set and assigning them to variables
					 user_id = dr->GetString(0);

					 course_id = dr->GetString(1);
					 grade = dr->GetString(2);
					 approval_status = dr->GetString(3);




					 int rowIndex = this->dataGridView1->Rows->Add(user_id, course_id, grade, approval_status);


					 // Now you have extracted all the values and assigned them to the respective variables
				 }
	}

#pragma endregion
	public: Form^ globalForm;
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
				 this->Close();
				 globalForm->Show();
	}
	private: System::Void panel1_Paint(System::Object^  sender, System::Windows::Forms::PaintEventArgs^  e) {
	}

	};
}

