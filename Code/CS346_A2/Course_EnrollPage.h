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
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::DataGridView^  dataGridView1;









	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column2;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column3;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column4;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column8;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column5;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column6;
	private: System::Windows::Forms::DataGridViewButtonColumn^  Column7;
	private: System::Windows::Forms::DataGridViewButtonColumn^  Column9;
	private: System::Windows::Forms::DataGridView^  dataGridView2;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  dataGridViewTextBoxColumn1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  dataGridViewTextBoxColumn2;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  dataGridViewTextBoxColumn3;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  dataGridViewTextBoxColumn4;
	private: System::Windows::Forms::DataGridViewComboBoxColumn^  dataGridViewComboBoxColumn1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  dataGridViewTextBoxColumn7;
	private: System::Windows::Forms::DataGridViewButtonColumn^  dataGridViewButtonColumn1;
	private: System::Windows::Forms::DataGridViewButtonColumn^  dataGridViewButtonColumn2;





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
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->Column1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column2 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column3 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column4 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column8 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column5 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column6 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column7 = (gcnew System::Windows::Forms::DataGridViewButtonColumn());
			this->Column9 = (gcnew System::Windows::Forms::DataGridViewButtonColumn());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->dataGridView2 = (gcnew System::Windows::Forms::DataGridView());
			this->dataGridViewTextBoxColumn1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn2 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn3 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn4 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewComboBoxColumn1 = (gcnew System::Windows::Forms::DataGridViewComboBoxColumn());
			this->dataGridViewTextBoxColumn7 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewButtonColumn1 = (gcnew System::Windows::Forms::DataGridViewButtonColumn());
			this->dataGridViewButtonColumn2 = (gcnew System::Windows::Forms::DataGridViewButtonColumn());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView2))->BeginInit();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(377, 11);
			this->label1->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(202, 25);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Course Registration";
			this->label1->Click += gcnew System::EventHandler(this, &Course_EnrollPage::label1_Click);
			// 
			// dataGridView1
			// 
			this->dataGridView1->AllowUserToAddRows = false;
			this->dataGridView1->CellBorderStyle = System::Windows::Forms::DataGridViewCellBorderStyle::None;
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(9) {
				this->Column1,
					this->Column2, this->Column3, this->Column4, this->Column8, this->Column5, this->Column6, this->Column7, this->Column9
			});
			this->dataGridView1->Location = System::Drawing::Point(155, 126);
			this->dataGridView1->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->RowHeadersVisible = false;
			this->dataGridView1->Size = System::Drawing::Size(671, 185);
			this->dataGridView1->TabIndex = 1;
			this->dataGridView1->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &Course_EnrollPage::dataGridView1_CellContentClick);
			// 
			// Column1
			// 
			this->Column1->HeaderText = L"L";
			this->Column1->Name = L"Column1";
			this->Column1->ReadOnly = true;
			this->Column1->Width = 20;
			// 
			// Column2
			// 
			this->Column2->HeaderText = L"T";
			this->Column2->Name = L"Column2";
			this->Column2->ReadOnly = true;
			this->Column2->Width = 20;
			// 
			// Column3
			// 
			this->Column3->HeaderText = L"P";
			this->Column3->Name = L"Column3";
			this->Column3->ReadOnly = true;
			this->Column3->Width = 20;
			// 
			// Column4
			// 
			this->Column4->HeaderText = L"C";
			this->Column4->Name = L"Column4";
			this->Column4->ReadOnly = true;
			this->Column4->Width = 20;
			// 
			// Column8
			// 
			this->Column8->HeaderText = L"Code";
			this->Column8->Name = L"Column8";
			this->Column8->ReadOnly = true;
			this->Column8->Width = 60;
			// 
			// Column5
			// 
			this->Column5->HeaderText = L"Name";
			this->Column5->Name = L"Column5";
			this->Column5->ReadOnly = true;
			this->Column5->Width = 200;
			// 
			// Column6
			// 
			this->Column6->HeaderText = L"Slot";
			this->Column6->Name = L"Column6";
			this->Column6->ReadOnly = true;
			this->Column6->Width = 40;
			// 
			// Column7
			// 
			this->Column7->HeaderText = L"Desc.";
			this->Column7->Name = L"Column7";
			this->Column7->ReadOnly = true;
			this->Column7->Text = L"View";
			this->Column7->UseColumnTextForButtonValue = true;
			this->Column7->Width = 40;
			// 
			// Column9
			// 
			this->Column9->HeaderText = L"Register";
			this->Column9->Name = L"Column9";
			this->Column9->Text = L"Register";
			this->Column9->Width = 80;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(75, 81);
			this->label2->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(138, 17);
			this->label2->TabIndex = 2;
			this->label2->Text = L"Compulsory Courses";
			// 
			// dataGridView2
			// 
			this->dataGridView2->AllowUserToAddRows = false;
			this->dataGridView2->CellBorderStyle = System::Windows::Forms::DataGridViewCellBorderStyle::None;
			this->dataGridView2->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView2->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(8) {
				this->dataGridViewTextBoxColumn1,
					this->dataGridViewTextBoxColumn2, this->dataGridViewTextBoxColumn3, this->dataGridViewTextBoxColumn4, this->dataGridViewComboBoxColumn1,
					this->dataGridViewTextBoxColumn7, this->dataGridViewButtonColumn1, this->dataGridViewButtonColumn2
			});
			this->dataGridView2->Location = System::Drawing::Point(155, 356);
			this->dataGridView2->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->dataGridView2->Name = L"dataGridView2";
			this->dataGridView2->RowHeadersVisible = false;
			this->dataGridView2->Size = System::Drawing::Size(725, 185);
			this->dataGridView2->TabIndex = 3;
			this->dataGridView2->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &Course_EnrollPage::dataGridView2_CellContentClick);
			this->dataGridView2->EditingControlShowing += gcnew System::Windows::Forms::DataGridViewEditingControlShowingEventHandler(this, &Course_EnrollPage::dataGridView2_EditingControlShowing);
			// 
			// dataGridViewTextBoxColumn1
			// 
			this->dataGridViewTextBoxColumn1->HeaderText = L"L";
			this->dataGridViewTextBoxColumn1->Name = L"dataGridViewTextBoxColumn1";
			this->dataGridViewTextBoxColumn1->ReadOnly = true;
			this->dataGridViewTextBoxColumn1->Width = 20;
			// 
			// dataGridViewTextBoxColumn2
			// 
			this->dataGridViewTextBoxColumn2->HeaderText = L"T";
			this->dataGridViewTextBoxColumn2->Name = L"dataGridViewTextBoxColumn2";
			this->dataGridViewTextBoxColumn2->ReadOnly = true;
			this->dataGridViewTextBoxColumn2->Width = 20;
			// 
			// dataGridViewTextBoxColumn3
			// 
			this->dataGridViewTextBoxColumn3->HeaderText = L"P";
			this->dataGridViewTextBoxColumn3->Name = L"dataGridViewTextBoxColumn3";
			this->dataGridViewTextBoxColumn3->ReadOnly = true;
			this->dataGridViewTextBoxColumn3->Width = 20;
			// 
			// dataGridViewTextBoxColumn4
			// 
			this->dataGridViewTextBoxColumn4->HeaderText = L"C";
			this->dataGridViewTextBoxColumn4->Name = L"dataGridViewTextBoxColumn4";
			this->dataGridViewTextBoxColumn4->ReadOnly = true;
			this->dataGridViewTextBoxColumn4->Width = 20;
			// 
			// dataGridViewComboBoxColumn1
			// 
			this->dataGridViewComboBoxColumn1->HeaderText = L"Course";
			this->dataGridViewComboBoxColumn1->Name = L"dataGridViewComboBoxColumn1";
			this->dataGridViewComboBoxColumn1->Width = 300;
			// 
			// dataGridViewTextBoxColumn7
			// 
			this->dataGridViewTextBoxColumn7->HeaderText = L"Slot";
			this->dataGridViewTextBoxColumn7->Name = L"dataGridViewTextBoxColumn7";
			this->dataGridViewTextBoxColumn7->ReadOnly = true;
			this->dataGridViewTextBoxColumn7->Width = 40;
			// 
			// dataGridViewButtonColumn1
			// 
			this->dataGridViewButtonColumn1->HeaderText = L"Desc.";
			this->dataGridViewButtonColumn1->Name = L"dataGridViewButtonColumn1";
			this->dataGridViewButtonColumn1->ReadOnly = true;
			this->dataGridViewButtonColumn1->Text = L"View";
			this->dataGridViewButtonColumn1->UseColumnTextForButtonValue = true;
			this->dataGridViewButtonColumn1->Width = 40;
			// 
			// dataGridViewButtonColumn2
			// 
			this->dataGridViewButtonColumn2->HeaderText = L"Register";
			this->dataGridViewButtonColumn2->Name = L"dataGridViewButtonColumn2";
			this->dataGridViewButtonColumn2->Text = L"Register";
			this->dataGridViewButtonColumn2->Width = 80;
			// 
			// Course_EnrollPage
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(958, 578);
			this->Controls->Add(this->dataGridView2);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->label1);
			this->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->Name = L"Course_EnrollPage";
			this->Text = L"Course_EnrollPage";
			this->Load += gcnew System::EventHandler(this, &Course_EnrollPage::Course_EnrollPage_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView2))->EndInit();
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

	private: System::Void Course_EnrollPage_Load(System::Object^  sender, System::EventArgs^  e)
	{

				 int sem = retrieve_semester();
				 disp_comp_courses(sem);
				 disp_electives(sem);
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


					 String^ query = "SELECT [L],[T],[P],[C],[Course_Code],[Name] FROM [dbo].[course_Structure] where [Semester] = @sem and [Elective] = 0 ";
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
						 String^ timeSlot = "A1";


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
					 RegButtonClicked(e->RowIndex, e->ColumnIndex, dataGridView1, dataGridView1->Rows[e->RowIndex]->Cells["Column8"]->Value->ToString());
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


	private: System::Void RegButtonClicked(int rowIndex, int colIndex, DataGridView^ dataGridView1, String^ course_code)
	{
				 if (dataGridView1->Rows[rowIndex]->Cells[colIndex]->Value == "Register")
				 {
					 String^ query = "INSERT INTO [dbo].[grade] VALUES (@id , @code, 'NA', 'Pending' , 'Credit')";
					 array<SqlParameter^>^ parameters = {
						 gcnew SqlParameter("@id", user->userID),
						 gcnew SqlParameter("@code", course_code)
					 };

					 SqlDataReader^ dr = DatabaseHelper::ExecuteQuery(query, parameters);
					 dr->Close();
					 MessageBox::Show("Successfully Registered");
					 dataGridView1->Rows[rowIndex]->Cells[colIndex]->Value = "De-Register";
					 dataGridView1->Invalidate();

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
						 RegButtonClicked(e->RowIndex, e->ColumnIndex, dataGridView2, code);
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

						 comboBox->SelectedIndexChanged += gcnew EventHandler(this, &Course_EnrollPage::ComboBox_SelectedIndexChanged);
					 }
				 }
	}

			 void ComboBox_SelectedIndexChanged(Object^ sender, EventArgs^ e)
			 {

				 ComboBox^ comboBox = safe_cast<ComboBox^>(sender);
				 if (comboBox != nullptr)
				 {
					 //Register or De-Register button

					 int rowIndex = dataGridView2->CurrentCell->RowIndex;

					 DataGridViewButtonCell^ buttonCell = dynamic_cast<DataGridViewButtonCell^>(dataGridView2->Rows[rowIndex]->Cells[7]);
					 if (buttonCell != nullptr)
					 {

						 String^ code_name = comboBox->SelectedItem->ToString();
						 String^ code = code_name->Substring(0, 5);

						 // Set the text for the button cell
						 if (is_registered(code))
							 buttonCell->Value = "De-Register";
						 else
							 buttonCell->Value = "Register";
					 }
				 }

				 //SLOT updation

			 }
	};
}
