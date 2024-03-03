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

	/// <summary>
	/// Summary for Course_EnrollPage
	/// </summary>
	public ref class Course_EnrollPage : public System::Windows::Forms::Form
	{
	public:
		Course_EnrollPage(User^ User)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
			user = User;
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~Course_EnrollPage()
		{
			if (components)
			{
				delete components;
			}
		}

	private: System::Windows::Forms::DataGridView^  dataGridView1;









	private: System::Windows::Forms::Label^  label2;









	private: System::Windows::Forms::DataGridView^  dataGridView2;

















	private: System::Windows::Forms::DataGridView^  dataGridView3;

























	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column2;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column3;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column4;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column8;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column5;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column6;
	private: System::Windows::Forms::DataGridViewButtonColumn^  Column7;
	private: System::Windows::Forms::DataGridViewButtonColumn^  Column9;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  dataGridViewTextBoxColumn1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  dataGridViewTextBoxColumn2;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  dataGridViewTextBoxColumn3;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  dataGridViewTextBoxColumn4;
	private: System::Windows::Forms::DataGridViewComboBoxColumn^  dataGridViewComboBoxColumn1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  dataGridViewTextBoxColumn7;
	private: System::Windows::Forms::DataGridViewButtonColumn^  dataGridViewButtonColumn1;
	private: System::Windows::Forms::DataGridViewButtonColumn^  dataGridViewButtonColumn2;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  dataGridViewTextBoxColumn5;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  dataGridViewTextBoxColumn6;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  dataGridViewTextBoxColumn8;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  dataGridViewTextBoxColumn9;
	private: System::Windows::Forms::DataGridViewComboBoxColumn^  dataGridViewComboBoxColumn2;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  dataGridViewTextBoxColumn10;
	private: System::Windows::Forms::DataGridViewButtonColumn^  dataGridViewButtonColumn3;
	private: System::Windows::Forms::DataGridViewButtonColumn^  dataGridViewButtonColumn4;





















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
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->dataGridView2 = (gcnew System::Windows::Forms::DataGridView());
			this->dataGridView3 = (gcnew System::Windows::Forms::DataGridView());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->dataGridViewTextBoxColumn5 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn6 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn8 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn9 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewComboBoxColumn2 = (gcnew System::Windows::Forms::DataGridViewComboBoxColumn());
			this->dataGridViewTextBoxColumn10 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewButtonColumn3 = (gcnew System::Windows::Forms::DataGridViewButtonColumn());
			this->dataGridViewButtonColumn4 = (gcnew System::Windows::Forms::DataGridViewButtonColumn());
			this->dataGridViewTextBoxColumn1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn2 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn3 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn4 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewComboBoxColumn1 = (gcnew System::Windows::Forms::DataGridViewComboBoxColumn());
			this->dataGridViewTextBoxColumn7 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewButtonColumn1 = (gcnew System::Windows::Forms::DataGridViewButtonColumn());
			this->dataGridViewButtonColumn2 = (gcnew System::Windows::Forms::DataGridViewButtonColumn());
			this->Column1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column2 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column3 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column4 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column8 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column5 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column6 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column7 = (gcnew System::Windows::Forms::DataGridViewButtonColumn());
			this->Column9 = (gcnew System::Windows::Forms::DataGridViewButtonColumn());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView3))->BeginInit();
			this->SuspendLayout();
			// 
			// dataGridView1
			// 
			this->dataGridView1->AllowUserToAddRows = false;
			this->dataGridView1->AllowUserToResizeColumns = false;
			this->dataGridView1->AllowUserToResizeRows = false;
			this->dataGridView1->BackgroundColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(177)),
				static_cast<System::Int32>(static_cast<System::Byte>(212)), static_cast<System::Int32>(static_cast<System::Byte>(224)));
			this->dataGridView1->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->dataGridView1->CellBorderStyle = System::Windows::Forms::DataGridViewCellBorderStyle::None;
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(9) {
				this->Column1,
					this->Column2, this->Column3, this->Column4, this->Column8, this->Column5, this->Column6, this->Column7, this->Column9
			});
			this->dataGridView1->Location = System::Drawing::Point(62, 74);
			this->dataGridView1->Margin = System::Windows::Forms::Padding(4);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->RowHeadersVisible = false;
			this->dataGridView1->Size = System::Drawing::Size(803, 143);
			this->dataGridView1->TabIndex = 1;
			this->dataGridView1->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &Course_EnrollPage::dataGridView1_CellContentClick);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Segoe UI Symbol", 12, System::Drawing::FontStyle::Bold));
			this->label2->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(12)), static_cast<System::Int32>(static_cast<System::Byte>(45)),
				static_cast<System::Int32>(static_cast<System::Byte>(72)));
			this->label2->Location = System::Drawing::Point(57, 39);
			this->label2->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(209, 28);
			this->label2->TabIndex = 2;
			this->label2->Text = L"Compulsory Courses";
			this->label2->Click += gcnew System::EventHandler(this, &Course_EnrollPage::label2_Click);
			// 
			// dataGridView2
			// 
			this->dataGridView2->AllowUserToAddRows = false;
			this->dataGridView2->BackgroundColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(177)),
				static_cast<System::Int32>(static_cast<System::Byte>(212)), static_cast<System::Int32>(static_cast<System::Byte>(224)));
			this->dataGridView2->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->dataGridView2->CellBorderStyle = System::Windows::Forms::DataGridViewCellBorderStyle::None;
			this->dataGridView2->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView2->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(8) {
				this->dataGridViewTextBoxColumn1,
					this->dataGridViewTextBoxColumn2, this->dataGridViewTextBoxColumn3, this->dataGridViewTextBoxColumn4, this->dataGridViewComboBoxColumn1,
					this->dataGridViewTextBoxColumn7, this->dataGridViewButtonColumn1, this->dataGridViewButtonColumn2
			});
			this->dataGridView2->Location = System::Drawing::Point(62, 269);
			this->dataGridView2->Margin = System::Windows::Forms::Padding(4);
			this->dataGridView2->Name = L"dataGridView2";
			this->dataGridView2->RowHeadersVisible = false;
			this->dataGridView2->Size = System::Drawing::Size(803, 132);
			this->dataGridView2->TabIndex = 3;
			this->dataGridView2->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &Course_EnrollPage::dataGridView2_CellContentClick);
			this->dataGridView2->EditingControlShowing += gcnew System::Windows::Forms::DataGridViewEditingControlShowingEventHandler(this, &Course_EnrollPage::dataGridView2_EditingControlShowing);
			// 
			// dataGridView3
			// 
			this->dataGridView3->AllowUserToAddRows = false;
			this->dataGridView3->BackgroundColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(177)),
				static_cast<System::Int32>(static_cast<System::Byte>(212)), static_cast<System::Int32>(static_cast<System::Byte>(224)));
			this->dataGridView3->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->dataGridView3->CellBorderStyle = System::Windows::Forms::DataGridViewCellBorderStyle::None;
			this->dataGridView3->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView3->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(8) {
				this->dataGridViewTextBoxColumn5,
					this->dataGridViewTextBoxColumn6, this->dataGridViewTextBoxColumn8, this->dataGridViewTextBoxColumn9, this->dataGridViewComboBoxColumn2,
					this->dataGridViewTextBoxColumn10, this->dataGridViewButtonColumn3, this->dataGridViewButtonColumn4
			});
			this->dataGridView3->Location = System::Drawing::Point(62, 452);
			this->dataGridView3->Margin = System::Windows::Forms::Padding(4);
			this->dataGridView3->Name = L"dataGridView3";
			this->dataGridView3->RowHeadersVisible = false;
			this->dataGridView3->Size = System::Drawing::Size(803, 108);
			this->dataGridView3->TabIndex = 4;
			this->dataGridView3->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &Course_EnrollPage::dataGridView3_CellContentClick);
			this->dataGridView3->EditingControlShowing += gcnew System::Windows::Forms::DataGridViewEditingControlShowingEventHandler(this, &Course_EnrollPage::dataGridView3_EditingControlShowing);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Segoe UI Symbol", 12, System::Drawing::FontStyle::Bold));
			this->label3->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(12)), static_cast<System::Int32>(static_cast<System::Byte>(45)),
				static_cast<System::Int32>(static_cast<System::Byte>(72)));
			this->label3->Location = System::Drawing::Point(57, 234);
			this->label3->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(167, 28);
			this->label3->TabIndex = 5;
			this->label3->Text = L"Elective Courses";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Segoe UI Symbol", 12, System::Drawing::FontStyle::Bold));
			this->label4->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(12)), static_cast<System::Int32>(static_cast<System::Byte>(45)),
				static_cast<System::Int32>(static_cast<System::Byte>(72)));
			this->label4->Location = System::Drawing::Point(57, 416);
			this->label4->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(146, 28);
			this->label4->TabIndex = 6;
			this->label4->Text = L"Audit Courses";
			// 
			// dataGridViewTextBoxColumn5
			// 
			this->dataGridViewTextBoxColumn5->HeaderText = L"L";
			this->dataGridViewTextBoxColumn5->Name = L"dataGridViewTextBoxColumn5";
			this->dataGridViewTextBoxColumn5->ReadOnly = true;
			this->dataGridViewTextBoxColumn5->Resizable = System::Windows::Forms::DataGridViewTriState::False;
			this->dataGridViewTextBoxColumn5->Width = 30;
			// 
			// dataGridViewTextBoxColumn6
			// 
			this->dataGridViewTextBoxColumn6->HeaderText = L"T";
			this->dataGridViewTextBoxColumn6->Name = L"dataGridViewTextBoxColumn6";
			this->dataGridViewTextBoxColumn6->ReadOnly = true;
			this->dataGridViewTextBoxColumn6->Width = 30;
			// 
			// dataGridViewTextBoxColumn8
			// 
			this->dataGridViewTextBoxColumn8->HeaderText = L"P";
			this->dataGridViewTextBoxColumn8->Name = L"dataGridViewTextBoxColumn8";
			this->dataGridViewTextBoxColumn8->ReadOnly = true;
			this->dataGridViewTextBoxColumn8->Width = 30;
			// 
			// dataGridViewTextBoxColumn9
			// 
			this->dataGridViewTextBoxColumn9->HeaderText = L"C";
			this->dataGridViewTextBoxColumn9->Name = L"dataGridViewTextBoxColumn9";
			this->dataGridViewTextBoxColumn9->ReadOnly = true;
			this->dataGridViewTextBoxColumn9->Width = 30;
			// 
			// dataGridViewComboBoxColumn2
			// 
			this->dataGridViewComboBoxColumn2->HeaderText = L"Course";
			this->dataGridViewComboBoxColumn2->Name = L"dataGridViewComboBoxColumn2";
			this->dataGridViewComboBoxColumn2->Width = 440;
			// 
			// dataGridViewTextBoxColumn10
			// 
			this->dataGridViewTextBoxColumn10->HeaderText = L"Slot";
			this->dataGridViewTextBoxColumn10->Name = L"dataGridViewTextBoxColumn10";
			this->dataGridViewTextBoxColumn10->ReadOnly = true;
			this->dataGridViewTextBoxColumn10->Width = 60;
			// 
			// dataGridViewButtonColumn3
			// 
			this->dataGridViewButtonColumn3->HeaderText = L"Desc.";
			this->dataGridViewButtonColumn3->Name = L"dataGridViewButtonColumn3";
			this->dataGridViewButtonColumn3->ReadOnly = true;
			this->dataGridViewButtonColumn3->Text = L"View";
			this->dataGridViewButtonColumn3->UseColumnTextForButtonValue = true;
			this->dataGridViewButtonColumn3->Width = 60;
			// 
			// dataGridViewButtonColumn4
			// 
			this->dataGridViewButtonColumn4->HeaderText = L"Register";
			this->dataGridViewButtonColumn4->Name = L"dataGridViewButtonColumn4";
			this->dataGridViewButtonColumn4->Text = L"Register";
			this->dataGridViewButtonColumn4->Width = 120;
			// 
			// dataGridViewTextBoxColumn1
			// 
			this->dataGridViewTextBoxColumn1->HeaderText = L"L";
			this->dataGridViewTextBoxColumn1->Name = L"dataGridViewTextBoxColumn1";
			this->dataGridViewTextBoxColumn1->ReadOnly = true;
			this->dataGridViewTextBoxColumn1->Resizable = System::Windows::Forms::DataGridViewTriState::False;
			this->dataGridViewTextBoxColumn1->Width = 30;
			// 
			// dataGridViewTextBoxColumn2
			// 
			this->dataGridViewTextBoxColumn2->HeaderText = L"T";
			this->dataGridViewTextBoxColumn2->Name = L"dataGridViewTextBoxColumn2";
			this->dataGridViewTextBoxColumn2->ReadOnly = true;
			this->dataGridViewTextBoxColumn2->Width = 30;
			// 
			// dataGridViewTextBoxColumn3
			// 
			this->dataGridViewTextBoxColumn3->HeaderText = L"P";
			this->dataGridViewTextBoxColumn3->Name = L"dataGridViewTextBoxColumn3";
			this->dataGridViewTextBoxColumn3->ReadOnly = true;
			this->dataGridViewTextBoxColumn3->Width = 30;
			// 
			// dataGridViewTextBoxColumn4
			// 
			this->dataGridViewTextBoxColumn4->HeaderText = L"C";
			this->dataGridViewTextBoxColumn4->Name = L"dataGridViewTextBoxColumn4";
			this->dataGridViewTextBoxColumn4->ReadOnly = true;
			this->dataGridViewTextBoxColumn4->Width = 30;
			// 
			// dataGridViewComboBoxColumn1
			// 
			this->dataGridViewComboBoxColumn1->HeaderText = L"Course";
			this->dataGridViewComboBoxColumn1->Name = L"dataGridViewComboBoxColumn1";
			this->dataGridViewComboBoxColumn1->Width = 440;
			// 
			// dataGridViewTextBoxColumn7
			// 
			this->dataGridViewTextBoxColumn7->HeaderText = L"Slot";
			this->dataGridViewTextBoxColumn7->Name = L"dataGridViewTextBoxColumn7";
			this->dataGridViewTextBoxColumn7->ReadOnly = true;
			this->dataGridViewTextBoxColumn7->Width = 60;
			// 
			// dataGridViewButtonColumn1
			// 
			this->dataGridViewButtonColumn1->HeaderText = L"Desc.";
			this->dataGridViewButtonColumn1->Name = L"dataGridViewButtonColumn1";
			this->dataGridViewButtonColumn1->ReadOnly = true;
			this->dataGridViewButtonColumn1->Text = L"View";
			this->dataGridViewButtonColumn1->UseColumnTextForButtonValue = true;
			this->dataGridViewButtonColumn1->Width = 60;
			// 
			// dataGridViewButtonColumn2
			// 
			this->dataGridViewButtonColumn2->HeaderText = L"Register";
			this->dataGridViewButtonColumn2->Name = L"dataGridViewButtonColumn2";
			this->dataGridViewButtonColumn2->Text = L"Register";
			this->dataGridViewButtonColumn2->Width = 120;
			// 
			// Column1
			// 
			this->Column1->Frozen = true;
			this->Column1->HeaderText = L"L";
			this->Column1->Name = L"Column1";
			this->Column1->ReadOnly = true;
			this->Column1->Resizable = System::Windows::Forms::DataGridViewTriState::False;
			this->Column1->Width = 30;
			// 
			// Column2
			// 
			this->Column2->Frozen = true;
			this->Column2->HeaderText = L"T";
			this->Column2->Name = L"Column2";
			this->Column2->ReadOnly = true;
			this->Column2->Width = 30;
			// 
			// Column3
			// 
			this->Column3->Frozen = true;
			this->Column3->HeaderText = L"P";
			this->Column3->Name = L"Column3";
			this->Column3->ReadOnly = true;
			this->Column3->Width = 30;
			// 
			// Column4
			// 
			this->Column4->Frozen = true;
			this->Column4->HeaderText = L"C";
			this->Column4->Name = L"Column4";
			this->Column4->ReadOnly = true;
			this->Column4->Width = 30;
			// 
			// Column8
			// 
			this->Column8->Frozen = true;
			this->Column8->HeaderText = L"Code";
			this->Column8->Name = L"Column8";
			this->Column8->ReadOnly = true;
			this->Column8->Width = 90;
			// 
			// Column5
			// 
			this->Column5->Frozen = true;
			this->Column5->HeaderText = L"Name";
			this->Column5->Name = L"Column5";
			this->Column5->ReadOnly = true;
			this->Column5->Width = 350;
			// 
			// Column6
			// 
			this->Column6->Frozen = true;
			this->Column6->HeaderText = L"Slot";
			this->Column6->Name = L"Column6";
			this->Column6->ReadOnly = true;
			this->Column6->Width = 60;
			// 
			// Column7
			// 
			this->Column7->Frozen = true;
			this->Column7->HeaderText = L"Desc.";
			this->Column7->Name = L"Column7";
			this->Column7->ReadOnly = true;
			this->Column7->Text = L"View";
			this->Column7->UseColumnTextForButtonValue = true;
			this->Column7->Width = 60;
			// 
			// Column9
			// 
			this->Column9->HeaderText = L"Register";
			this->Column9->Name = L"Column9";
			this->Column9->Text = L"Register";
			this->Column9->Width = 120;
			// 
			// Course_EnrollPage
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(177)), static_cast<System::Int32>(static_cast<System::Byte>(212)),
				static_cast<System::Int32>(static_cast<System::Byte>(224)));
			this->ClientSize = System::Drawing::Size(957, 576);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->dataGridView3);
			this->Controls->Add(this->dataGridView2);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->dataGridView1);
			this->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->MaximumSize = System::Drawing::Size(975, 623);
			this->MinimumSize = System::Drawing::Size(975, 623);
			this->Name = L"Course_EnrollPage";
			this->Text = L"Course_EnrollPage";
			this->Load += gcnew System::EventHandler(this, &Course_EnrollPage::Course_EnrollPage_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView3))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	public:User^ user;

	private: int retrieve_semester(){
				 String^ query = "SELECT[Current_Semester] FROM[dbo].[student] WHERE[User_ID] = @id";
				 array<SqlParameter^>^ parameters = {
					 gcnew SqlParameter("@id", user->userID)
				 };
				 SqlDataReader^ dr = DatabaseHelper::ExecuteQuery(query, parameters);
				 try
				 {
					 while (dr->Read()){
						 // each iteration corresponds to a particular record
						 // this is how you can extract a particular column value, for example if the first field was user_id, use GetString(0) (as zero indexing is used) to get the value of userId
						 int sem = dr->GetInt32(0);
						 return sem;
					 }
					 dr->Close();
				 }
				 catch (SqlException^ ex)
				 {
					 // Handle SQL exceptions
					 MessageBox::Show(ex->Message);
				 }
				 return -1;

	}

	private: int retrieve_year()
	{
				 String^ query = "SELECT[Current_Year] FROM[dbo].[permissions]";
				 SqlDataReader^ dr = DatabaseHelper::ExecuteQuery(query);
				 try
				 {
					 while (dr->Read()){
						 int year = dr->GetInt32(0);
						 return year;
					 }
					 dr->Close();
				 }
				 catch (SqlException^ ex)
				 {
					 // Handle SQL exceptions
					 MessageBox::Show(ex->Message);
				 }
				 return -1;
	}

	private: System::Void Course_EnrollPage_Load(System::Object^  sender, System::EventArgs^  e)
	{

				 int sem = retrieve_semester();
				 disp_comp_courses(sem);
				 disp_electives(sem);
				 display_audit_courses();
	}
	private: System::Void label1_Click(System::Object^  sender, System::EventArgs^  e) {
	}

			 bool is_registered(String^ code)
			 {
				 try
				 {

					 String^ query = "SELECT * FROM [dbo].[grade] WHERE [User_ID] = @userid AND [CourseCode] = @code";
					 array<SqlParameter^>^ parameters = {
						 gcnew SqlParameter("@userid", user->userID),
						 gcnew SqlParameter("@code", code)
					 };

					 SqlDataReader^ reader = DatabaseHelper::ExecuteQuery(query, parameters);
					 if (reader->HasRows)
					 {
						 return true;
					 }
					 else
					 {
						 return false;
					 }
					 reader->Close();
				 }
				 catch (SqlException^ ex)
				 {
					 // Handle SQL exceptions
					 MessageBox::Show(ex->Message);
				 }
			 }

			 void disp_comp_courses(int sem)
			 {


				 // Open the connection
				 try
				 {


					 String^ query = "SELECT [L],[T],[P],[C],[Course_Code],[Name],[Slot] FROM [dbo].[course_Structure],[dbo].[timetable] where [Semester] = @sem and [Elective] = 0 and [Course_Code] = [Course_Id]";
					 array<SqlParameter^>^ parameters = {
						 gcnew SqlParameter("@sem", sem)
					 };
					 SqlDataReader^ reader = DatabaseHelper::ExecuteQuery(query, parameters);


					 while (reader->Read())
					 {
						 int LValue = reader->GetInt32(0);
						 int TValue = reader->GetInt32(1);
						 int PValue = reader->GetInt32(2);
						 int CValue = reader->GetInt32(3);
						 String^ CodeValue = reader->GetString(4);
						 String^ NameValue = reader->GetString(5);
						 String^ timeSlot = reader->GetString(6);


						 // Add row to DataGridView
						 int rowidx = dataGridView1->Rows->Add(LValue, TValue, PValue, CValue, CodeValue, NameValue, timeSlot);


						 DataGridViewButtonCell^ buttonCell = dynamic_cast<DataGridViewButtonCell^>(dataGridView1->Rows[rowidx]->Cells[8]);
						 if (buttonCell != nullptr)
						 {
							 // Set the text for the button cell
							 if (is_registered(CodeValue))
								 buttonCell->Value = "De-Register";
							 else
								 buttonCell->Value = "Register";
						 }

					 }

					 // Close the reader
					 reader->Close();
				 }
				 catch (SqlException^ ex)
				 {
					 // Handle SQL exceptions
					 MessageBox::Show(ex->Message);
				 }

			 }

			 void Add_DE(int sem, int iter)
			 {

				 for (int i = 0; i < iter; i++)
				 {

					 String^ query = "SELECT [Course_Code],[Name] FROM [dbo].[course]WHERE [Course_Code] LIKE '%CS%' AND [ElectiveOrCompulsory] = 1 AND [Semester] LIKE @sem ";
					 array<SqlParameter^>^ parameters = {
						 gcnew SqlParameter("@sem", "%" + Convert::ToString(sem) + "%")
					 };
					 SqlDataReader^ reader = DatabaseHelper::ExecuteQuery(query, parameters);

					 try
					 {

						 // Create a new row
						 int rowIndex = dataGridView2->Rows->Add(3, 0, 0, 6);
						 // Get the ComboBox cell in the new row
						 DataGridViewComboBoxCell^ comboBoxCell = dynamic_cast<DataGridViewComboBoxCell^>(dataGridView2->Rows[rowIndex]->Cells[4]);
						 if (comboBoxCell != nullptr)
						 {
							 // Loop through the result set and add course names to the ComboBox

							 while (reader->Read())
							 {

								 String^ coursecode = reader->GetString(0);
								 String^ coursename = reader->GetString(1);

								 comboBoxCell->Items->Add(coursecode + " " + coursename);
							 }
						 }

						 // Close the reader and the connection
						 reader->Close();

					 }
					 catch (Exception^ ex)
					 {
						 // Handle exceptions
						 MessageBox::Show(ex->Message);
					 }

				 }
			 }

			 void Add_OE(int sem, int iter)
			 {
				 for (int i = 0; i < iter; i++)
				 {

					 String^ query = "SELECT [Course_Code],[Name] FROM [dbo].[course]WHERE [Course_Code] LIKE '%OE%' AND [ElectiveOrCompulsory] = 1 AND [Semester] LIKE @sem ";
					 array<SqlParameter^>^ parameters = {
						 gcnew SqlParameter("@sem", "%" + Convert::ToString(sem) + "%")
					 };
					 SqlDataReader^ reader = DatabaseHelper::ExecuteQuery(query, parameters);

					 try
					 {


						 // Create a new row
						 int rowIndex = dataGridView2->Rows->Add(3, 0, 0, 6);
						 // Get the ComboBox cell in the new row
						 DataGridViewComboBoxCell^ comboBoxCell = dynamic_cast<DataGridViewComboBoxCell^>(dataGridView2->Rows[rowIndex]->Cells[4]);
						 if (comboBoxCell != nullptr)
						 {
							 // Loop through the result set and add course names to the ComboBox

							 while (reader->Read())
							 {

								 String^ coursecode = reader->GetString(0);
								 String^ coursename = reader->GetString(1);

								 comboBoxCell->Items->Add(coursecode + " " + coursename);
							 }
						 }

						 // Close the reader and the connection
						 reader->Close();


					 }
					 catch (Exception^ ex)
					 {
						 // Handle exceptions
						 MessageBox::Show(ex->Message);
					 }

				 }
			 }

			 void disp_electives(int sem)
			 {

				 switch (sem)
				 {
				 case 4:
					 Add_OE(sem, 1);
					 break;

				 case 5:
					 Add_DE(sem, 1);
					 Add_OE(sem, 1);
					 break;

				 case 6:
					 Add_DE(sem, 3);
					 break;

				 case 7:
					 Add_DE(sem, 4);
					 Add_OE(sem, 2);
					 break;
				 case 8:
					 Add_DE(sem, 3);
					 Add_OE(sem, 3);
					 break;


				 }

				 //Set Text in all button of register column
				 for (int i = 0; i < dataGridView2->Rows->Count; i++)
				 {
					 // Get the cell corresponding to the button column
					 DataGridViewButtonCell^ buttonCell = dynamic_cast<DataGridViewButtonCell^>(dataGridView2->Rows[i]->Cells[7]);

					 if (buttonCell != nullptr)
					 {
						 // Set the text for the button cell
						 buttonCell->Value = "Register";
					 }
				 }

			 }
	private: System::Void dataGridView1_CellContentClick(System::Object^  sender, System::Windows::Forms::DataGridViewCellEventArgs^  e) {
				 if (e->ColumnIndex == dataGridView1->Columns["Column7"]->Index && e->RowIndex >= 0 && e->ColumnIndex >= 0)
				 {
					 // View Button Clicked
					 DescButtonClicked(e->RowIndex, dataGridView1, dataGridView1->Rows[e->RowIndex]->Cells["Column8"]->Value->ToString());
				 }
				 if (e->ColumnIndex == dataGridView1->Columns["Column9"]->Index && e->RowIndex >= 0 && e->ColumnIndex >= 0)
				 {
					 //Register/de-Register Button Clicked
					 String^ slot = dataGridView1->Rows[e->RowIndex]->Cells["Column6"]->Value->ToString();
					 RegButtonClicked(e->RowIndex, e->ColumnIndex, dataGridView1, dataGridView1->Rows[e->RowIndex]->Cells["Column8"]->Value->ToString(), slot, false);
				 }

	}

	private: System::Void DescButtonClicked(int rowIndex, DataGridView^ dataGridView1, String^ course_code)
	{
				 // String^ course_code = dataGridView1->Rows[rowIndex]->Cells["Column8"]->Value->ToString();
				 String^ query = "SELECT[Description] FROM[dbo].[course] WHERE[Course_Code] = @code";
				 array<SqlParameter^>^ parameters = {
					 gcnew SqlParameter("@code", course_code)
				 };

				 String^ course_desc;
				 SqlDataReader^ dr = DatabaseHelper::ExecuteQuery(query, parameters);
				 try
				 {
					 while (dr->Read()){

						 if (dr->IsDBNull(0)){
							 MessageBox::Show("No Description Available As Of Now");
							 return;
						 }
						 else{
							 course_desc = dr->GetString(0);
						 }
					 }

					 dr->Close();
				 }
				 catch (SqlException^ ex)
				 {
					 // Handle SQL exceptions
					 MessageBox::Show(ex->Message);
				 }

				 //write code to handle null valye in course_desc
				 MessageBox::Show("Course Code:" + course_code + "\nCourse Description: " + course_desc);
	}

			 bool check_slot_clash(String^ slot)
			 {

				 String^ query = " SELECT[Course_ID], [Slot] FROM [dbo].[grade], [dbo].[timetable] WHERE[Course_ID] = [CourseCode] AND[User_ID] = @id AND [Slot] = @slot";
				 array<SqlParameter^>^ parameters = {
					 gcnew SqlParameter("@id", user->userID),
					 gcnew SqlParameter("@slot", slot)
				 };

				 SqlDataReader^ reader = DatabaseHelper::ExecuteQuery(query, parameters);
				 bool ans = false;
				 if (reader->HasRows)
				 {
					 ans = true;
				 }
				 else
				 {
					 ans = false;
				 }

				 reader->Close();
				 return ans;
			 }
	private: System::Void RegButtonClicked(int rowIndex, int colIndex, DataGridView^ dataGridView1, String^ course_code, String^ slot, bool audit)
	{
				 if (dataGridView1->Rows[rowIndex]->Cells[colIndex]->Value == "Register")
				 {

					 if (!check_slot_clash(slot))
					 {
						 String^ query;
						 int year = retrieve_year();
						 if (audit)
							 query = "INSERT INTO [dbo].[grade] VALUES (@id , @code, 'NA', 'Pending' , 'Audit',@year)";
						 else
							 query = "INSERT INTO [dbo].[grade] VALUES (@id , @code, 'NA', 'Pending' , 'Credit', @year)";
						 array<SqlParameter^>^ parameters = {
							 gcnew SqlParameter("@id", user->userID),
							 gcnew SqlParameter("@code", course_code),
							 gcnew SqlParameter("@year", year)
						 };

						 SqlDataReader^ dr = DatabaseHelper::ExecuteQuery(query, parameters);
						 dr->Close();
						 MessageBox::Show("Successfully Registered");
						 dataGridView1->Rows[rowIndex]->Cells[colIndex]->Value = "De-Register";
						 dataGridView1->Invalidate();
					 }
					 else
					 {
						 MessageBox::Show("TIMETABLE CLASH!\n" + "Slot " + slot + " has already been allocated to another course.");

					 }

				 }
				 else if (dataGridView1->Rows[rowIndex]->Cells[colIndex]->Value == "De-Register")
				 {
					 String^ query = "DELETE FROM [dbo].[grade] WHERE [User_ID] =@id  and [CourseCode] = @code";
					 array<SqlParameter^>^ parameters = {
						 gcnew SqlParameter("@id", user->userID),
						 gcnew SqlParameter("@code", course_code)
					 };

					 SqlDataReader^ dr = DatabaseHelper::ExecuteQuery(query, parameters);
					 dr->Close();
					 MessageBox::Show("Successfully De-Registered");
					 dataGridView1->Rows[rowIndex]->Cells[colIndex]->Value = "Register";
					 dataGridView1->Invalidate();

				 }
	}

	private: System::Void dataGridView2_CellContentClick(System::Object^  sender, System::Windows::Forms::DataGridViewCellEventArgs^  e) {

				 if (e->ColumnIndex == dataGridView2->Columns["dataGridViewButtonColumn1"]->Index && e->RowIndex >= 0 && e->ColumnIndex >= 0)
				 {
					 // View Button Clicked
					 DataGridViewCell^ cell = dataGridView2->Rows[e->RowIndex]->Cells[4];
					 if (cell->Value != nullptr)
					 {
						 String^ code_name = cell->Value->ToString();
						 String^ code = code_name->Substring(0, 5);
						 DescButtonClicked(e->RowIndex, dataGridView2, code);
					 }
					 else
					 {
						 MessageBox::Show("Please Select A Course First");
					 }

				 }
				 if (e->ColumnIndex == dataGridView2->Columns["dataGridViewButtonColumn2"]->Index && e->RowIndex >= 0 && e->ColumnIndex >= 0)
				 {
					 DataGridViewCell^ cell = dataGridView2->Rows[e->RowIndex]->Cells[4];
					 if (cell->Value != nullptr)
					 {
						 String^ code_name = cell->Value->ToString();
						 String^ code = code_name->Substring(0, 5);
						 String^ slot = dataGridView2->Rows[e->RowIndex]->Cells["dataGridViewTextBoxColumn7"]->Value->ToString();
						 RegButtonClicked(e->RowIndex, e->ColumnIndex, dataGridView2, code, slot, false);
					 }
					 else
					 {
						 MessageBox::Show("Please Select A Course First");
					 }

				 }
	}
	private: System::Void dataGridView2_EditingControlShowing(System::Object^  sender, System::Windows::Forms::DataGridViewEditingControlShowingEventArgs^  e) {

				 // Check if the editing control is a ComboBox
				 if (dataGridView2->CurrentCell->ColumnIndex == 4 && e->Control->GetType() == DataGridViewComboBoxEditingControl::typeid)
				 {
					 // Cast the editing control to ComboBox
					 ComboBox^ comboBox = dynamic_cast<ComboBox^>(e->Control);
					 if (comboBox != nullptr)
					 {
						 // Register SelectedIndexChanged event

						 comboBox->SelectedIndexChanged += gcnew EventHandler(this, &Course_EnrollPage::ComboBox_SelectedIndexChanged_Elec);
					 }
				 }
	}



			 void ComboBox_SelectedIndexChanged_Elec(Object^ sender, EventArgs^ e)
			 {

				 ComboBox^ comboBox = safe_cast<ComboBox^>(sender);
				 if (comboBox != nullptr)
				 {
					 //Register or De-Register button

					 int rowIndex = dataGridView2->CurrentCell->RowIndex;

					 DataGridViewButtonCell^ buttonCell = dynamic_cast<DataGridViewButtonCell^>(dataGridView2->Rows[rowIndex]->Cells[7]);

					 String^ code_name = comboBox->SelectedItem->ToString();
					 String^ code = code_name->Substring(0, 5);
					 if (buttonCell != nullptr)
					 {


						 // Set the text for the button cell
						 if (is_registered(code))
							 buttonCell->Value = "De-Register";
						 else
							 buttonCell->Value = "Register";

					 }

					 String^ query = "SELECT [Slot] FROM [dbo].[timetable] WHERE [Course_ID] = @code  ";
					 array<SqlParameter^>^ parameters = {
						 gcnew SqlParameter("@code", code)
					 };
					 SqlDataReader^ reader = DatabaseHelper::ExecuteQuery(query, parameters);

					 if (reader->HasRows)
					 {
						 while (reader->Read())
						 {

							 String^ slot = reader->GetString(0);
							 dataGridView2->Rows[rowIndex]->Cells["dataGridViewTextBoxColumn7"]->Value = slot;
							 break;
						 }
					 }
					 else
					 {
						 dataGridView2->Rows[rowIndex]->Cells["dataGridViewTextBoxColumn7"]->Value = "NA";
					 }
					 reader->Close();


				 }




			 }
	private: System::Void label2_Click(System::Object^  sender, System::EventArgs^  e) {
	}


	private: System::Void display_audit_courses()
	{
				 for (int i = 0; i < 3; i++)
				 {

					 String^ query = "SELECT [Course_ID],[Name]FROM[dbo].[course], [dbo].[timetable] WHERE [Course_ID] = [Course_Code] ";
					 SqlDataReader^ reader = DatabaseHelper::ExecuteQuery(query);

					 try
					 {

						 // Create a new row
						 int rowIndex = dataGridView3->Rows->Add();
						 // Get the ComboBox cell in the new row
						 DataGridViewComboBoxCell^ comboBoxCell = dynamic_cast<DataGridViewComboBoxCell^>(dataGridView3->Rows[rowIndex]->Cells[4]);
						 if (comboBoxCell != nullptr)
						 {
							 // Loop through the result set and add course names to the ComboBox

							 while (reader->Read())
							 {

								 String^ coursecode = reader->GetString(0);
								 String^ coursename = reader->GetString(1);

								 comboBoxCell->Items->Add(coursecode + " " + coursename);
							 }
						 }

						 // Close the reader and the connection
						 reader->Close();

					 }
					 catch (Exception^ ex)
					 {
						 // Handle exceptions
						 MessageBox::Show(ex->Message);
					 }

				 }

				 //Set Text in all button of register column
				 for (int i = 0; i < dataGridView3->Rows->Count; i++)
				 {
					 // Get the cell corresponding to the button column
					 DataGridViewButtonCell^ buttonCell = dynamic_cast<DataGridViewButtonCell^>(dataGridView3->Rows[i]->Cells[7]);

					 if (buttonCell != nullptr)
					 {
						 // Set the text for the button cell
						 buttonCell->Value = "Register";
					 }
				 }
	}


	private: System::Void dataGridView3_CellContentClick(System::Object^  sender, System::Windows::Forms::DataGridViewCellEventArgs^  e) {

				 if (e->ColumnIndex == dataGridView3->Columns["dataGridViewButtonColumn3"]->Index && e->RowIndex >= 0 && e->ColumnIndex >= 0)
				 {
					 // View Button Clicked
					 DataGridViewCell^ cell = dataGridView3->Rows[e->RowIndex]->Cells[4];
					 if (cell->Value != nullptr)
					 {
						 String^ code_name = cell->Value->ToString();
						 String^ code = code_name->Substring(0, 5);
						 DescButtonClicked(e->RowIndex, dataGridView3, code);
					 }
					 else
					 {
						 MessageBox::Show("Please Select A Course First");
					 }

				 }

				 //Register Button Clicked
				 if (e->ColumnIndex == dataGridView3->Columns["dataGridViewButtonColumn4"]->Index && e->RowIndex >= 0 && e->ColumnIndex >= 0)
				 {
					 DataGridViewCell^ cell = dataGridView3->Rows[e->RowIndex]->Cells[4];
					 if (cell->Value != nullptr)
					 {
						 String^ code_name = cell->Value->ToString();
						 String^ code = code_name->Substring(0, 5);
						 String^ slot = dataGridView3->Rows[e->RowIndex]->Cells["dataGridViewTextBoxColumn10"]->Value->ToString();
						 RegButtonClicked(e->RowIndex, e->ColumnIndex, dataGridView3, code, slot, true);
					 }
					 else
					 {
						 MessageBox::Show("Please Select A Course First");
					 }

				 }
	}
	private: System::Void dataGridView3_EditingControlShowing(System::Object^  sender, System::Windows::Forms::DataGridViewEditingControlShowingEventArgs^  e) {

				 // Check if the editing control is a ComboBox
				 if (dataGridView3->CurrentCell->ColumnIndex == 4 && e->Control->GetType() == DataGridViewComboBoxEditingControl::typeid)
				 {
					 // Cast the editing control to ComboBox
					 ComboBox^ comboBox = dynamic_cast<ComboBox^>(e->Control);
					 if (comboBox != nullptr)
					 {
						 // Register SelectedIndexChanged event

						 comboBox->SelectedIndexChanged += gcnew EventHandler(this, &Course_EnrollPage::ComboBox_SelectedIndexChanged_Audit);
					 }
				 }

	}

			 void ComboBox_SelectedIndexChanged_Audit(Object^ sender, EventArgs^ e)
			 {

				 ComboBox^ comboBox = safe_cast<ComboBox^>(sender);
				 if (comboBox != nullptr)
				 {
					 //Register or De-Register button

					 int rowIndex = dataGridView3->CurrentCell->RowIndex;

					 DataGridViewButtonCell^ buttonCell = dynamic_cast<DataGridViewButtonCell^>(dataGridView3->Rows[rowIndex]->Cells[7]);

					 String^ code_name = comboBox->SelectedItem->ToString();
					 String^ code = code_name->Substring(0, 5);
					 if (buttonCell != nullptr)
					 {


						 // Set the text for the button cell
						 if (is_registered(code))
							 buttonCell->Value = "De-Register";
						 else
							 buttonCell->Value = "Register";

					 }


					 //Update Slot for newly selected course
					 String^ query = "SELECT [Slot] FROM [dbo].[timetable] WHERE [Course_ID] = @code  ";
					 array<SqlParameter^>^ parameters = {
						 gcnew SqlParameter("@code", code)
					 };
					 SqlDataReader^ reader = DatabaseHelper::ExecuteQuery(query, parameters);

					 if (reader->HasRows)
					 {
						 while (reader->Read())
						 {

							 String^ slot = reader->GetString(0);
							 dataGridView3->Rows[rowIndex]->Cells["dataGridViewTextBoxColumn10"]->Value = slot;
							 break;
						 }
					 }
					 else
					 {
						 dataGridView3->Rows[rowIndex]->Cells["dataGridViewTextBoxColumn10"]->Value = "NA";
					 }
					 reader->Close();


					 //Update L,T,P,C for newly selected course
					 String^ q = "SELECT [L],[T],[P],[C] FROM [dbo].[course] WHERE [Course_Code] = @code  ";
					 array<SqlParameter^>^ parameter = {
						 gcnew SqlParameter("@code", code)
					 };
					 reader = DatabaseHelper::ExecuteQuery(q, parameter);

					 if (reader->HasRows)
					 {
						 while (reader->Read())
						 {
							 int LValue = reader->GetInt32(0);
							 int TValue = reader->GetInt32(1);
							 int PValue = reader->GetInt32(2);
							 int CValue = reader->GetInt32(3);
							 dataGridView3->Rows[rowIndex]->Cells[0]->Value = Convert::ToString(LValue);
							 dataGridView3->Rows[rowIndex]->Cells[1]->Value = Convert::ToString(TValue);
							 dataGridView3->Rows[rowIndex]->Cells[2]->Value = Convert::ToString(PValue);
							 dataGridView3->Rows[rowIndex]->Cells[3]->Value = Convert::ToString(CValue);

							 break;
						 }
					 }


					 reader->Close();

				 }

			 }

	};
}
