#pragma once

#include "User.h"
#include "DatabaseHelper.h"
#include "TimeTable.h"
#include "SeatingHelper.h"

namespace CS346_A2 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Data::SqlClient;

	/// <summary>
	/// Summary for permissions
	/// </summary>
	public ref class permissions : public System::Windows::Forms::Form
	{

	private: System::Windows::Forms::DataGridView^  dataGridView1;

	public:

		Boolean^ course_add = false;
		Boolean^ course_enroll = false;
		Boolean^ grades_add = false;
		Boolean^ grades_view = false;
		Int32^ current_year;
		String^ current_sem = "";
		DateTime midsem_start;
		DateTime endsem_start;

	public:
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Button^  button1;










	private: System::Windows::Forms::Button^  button3;
	private: System::Windows::Forms::Button^  button6;

	private: System::Windows::Forms::Button^  button5;

	private: System::Windows::Forms::RichTextBox^  richTextBox5;
	private: System::Windows::Forms::RichTextBox^  richTextBox1;








	private: System::Windows::Forms::DateTimePicker^  dateTimePicker2;
	private: System::Windows::Forms::DateTimePicker^  dateTimePicker1;
	private: System::Windows::Forms::Button^  button7;
	private: System::Windows::Forms::Button^  button8;
	private: System::Windows::Forms::Button^  button4;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column2;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column3;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column5;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column6;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column7;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column8;



























			 String^ user_type = "";
	public:
		permissions(void)
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
		~permissions()
		{
			if (components)
			{
				delete components;
			}
		}


	private: System::Windows::Forms::Panel^  panel1;
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
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->dateTimePicker2 = (gcnew System::Windows::Forms::DateTimePicker());
			this->dateTimePicker1 = (gcnew System::Windows::Forms::DateTimePicker());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->richTextBox5 = (gcnew System::Windows::Forms::RichTextBox());
			this->richTextBox1 = (gcnew System::Windows::Forms::RichTextBox());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->Column1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column2 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column3 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column5 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column6 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column7 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column8 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->panel1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->SuspendLayout();
			// 
			// panel1
			// 
			this->panel1->Controls->Add(this->button4);
			this->panel1->Controls->Add(this->button8);
			this->panel1->Controls->Add(this->button7);
			this->panel1->Controls->Add(this->dateTimePicker2);
			this->panel1->Controls->Add(this->dateTimePicker1);
			this->panel1->Controls->Add(this->button6);
			this->panel1->Controls->Add(this->button5);
			this->panel1->Controls->Add(this->richTextBox5);
			this->panel1->Controls->Add(this->richTextBox1);
			this->panel1->Controls->Add(this->button3);
			this->panel1->Controls->Add(this->button2);
			this->panel1->Controls->Add(this->button1);
			this->panel1->Controls->Add(this->dataGridView1);
			this->panel1->Location = System::Drawing::Point(2, 2);
			this->panel1->Margin = System::Windows::Forms::Padding(2);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(741, 536);
			this->panel1->TabIndex = 2;
			this->panel1->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &permissions::panel1_Paint);
			// 
			// button4
			// 
			this->button4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button4->Location = System::Drawing::Point(390, 288);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(140, 43);
			this->button4->TabIndex = 20;
			this->button4->Text = L"Generate Endsem Seating Arrangement";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &permissions::button4_Click);
			// 
			// button8
			// 
			this->button8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button8->Location = System::Drawing::Point(390, 226);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(140, 43);
			this->button8->TabIndex = 19;
			this->button8->Text = L"Generate Midsem Seating Arrangement";
			this->button8->UseVisualStyleBackColor = true;
			this->button8->Click += gcnew System::EventHandler(this, &permissions::button8_Click);
			// 
			// button7
			// 
			this->button7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button7->Location = System::Drawing::Point(67, 422);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(140, 43);
			this->button7->TabIndex = 18;
			this->button7->Text = L"Generate TimeTable";
			this->button7->UseVisualStyleBackColor = true;
			this->button7->Click += gcnew System::EventHandler(this, &permissions::button7_Click);
			// 
			// dateTimePicker2
			// 
			this->dateTimePicker2->Location = System::Drawing::Point(390, 155);
			this->dateTimePicker2->Name = L"dateTimePicker2";
			this->dateTimePicker2->Size = System::Drawing::Size(186, 20);
			this->dateTimePicker2->TabIndex = 17;
			// 
			// dateTimePicker1
			// 
			this->dateTimePicker1->Location = System::Drawing::Point(390, 116);
			this->dateTimePicker1->Name = L"dateTimePicker1";
			this->dateTimePicker1->Size = System::Drawing::Size(186, 20);
			this->dateTimePicker1->TabIndex = 16;
			// 
			// button6
			// 
			this->button6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F));
			this->button6->Location = System::Drawing::Point(588, 155);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(140, 24);
			this->button6->TabIndex = 15;
			this->button6->Text = L"Set Endsem Date";
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Click += gcnew System::EventHandler(this, &permissions::button6_Click);
			// 
			// button5
			// 
			this->button5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F));
			this->button5->Location = System::Drawing::Point(588, 116);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(140, 24);
			this->button5->TabIndex = 13;
			this->button5->Text = L"Set Midsem Date";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &permissions::button5_Click);
			// 
			// richTextBox5
			// 
			this->richTextBox5->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(177)), static_cast<System::Int32>(static_cast<System::Byte>(212)),
				static_cast<System::Int32>(static_cast<System::Byte>(214)));
			this->richTextBox5->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->richTextBox5->Location = System::Drawing::Point(256, 155);
			this->richTextBox5->Name = L"richTextBox5";
			this->richTextBox5->Size = System::Drawing::Size(128, 24);
			this->richTextBox5->TabIndex = 11;
			this->richTextBox5->Text = L"Enter Endsem Start Date:";
			// 
			// richTextBox1
			// 
			this->richTextBox1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(177)), static_cast<System::Int32>(static_cast<System::Byte>(212)),
				static_cast<System::Int32>(static_cast<System::Byte>(214)));
			this->richTextBox1->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->richTextBox1->Location = System::Drawing::Point(256, 116);
			this->richTextBox1->Name = L"richTextBox1";
			this->richTextBox1->Size = System::Drawing::Size(128, 24);
			this->richTextBox1->TabIndex = 7;
			this->richTextBox1->Text = L"Enter Midsem Start Date:";
			// 
			// button3
			// 
			this->button3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button3->Location = System::Drawing::Point(67, 226);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(140, 43);
			this->button3->TabIndex = 5;
			this->button3->Text = L"Enable Grades Release";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &permissions::button3_Click);
			// 
			// button2
			// 
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F));
			this->button2->Location = System::Drawing::Point(67, 159);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(140, 43);
			this->button2->TabIndex = 4;
			this->button2->Text = L"Enable Course Enroll";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &permissions::button2_Click);
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->Location = System::Drawing::Point(67, 91);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(140, 43);
			this->button1->TabIndex = 3;
			this->button1->Text = L"Enable Course_Add";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &permissions::button1_Click);
			// 
			// dataGridView1
			// 
			this->dataGridView1->BackgroundColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(177)),
				static_cast<System::Int32>(static_cast<System::Byte>(212)), static_cast<System::Int32>(static_cast<System::Byte>(214)));
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(7) {
				this->Column1,
					this->Column2, this->Column3, this->Column5, this->Column6, this->Column7, this->Column8
			});
			this->dataGridView1->Location = System::Drawing::Point(3, 0);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->RowHeadersVisible = false;
			this->dataGridView1->Size = System::Drawing::Size(735, 488);
			this->dataGridView1->TabIndex = 0;
			// 
			// Column1
			// 
			dataGridViewCellStyle1->SelectionForeColor = System::Drawing::Color::Transparent;
			this->Column1->DefaultCellStyle = dataGridViewCellStyle1;
			this->Column1->HeaderText = L"Course_Add";
			this->Column1->Name = L"Column1";
			this->Column1->Width = 90;
			// 
			// Column2
			// 
			this->Column2->HeaderText = L"Course_Enroll";
			this->Column2->Name = L"Column2";
			this->Column2->Width = 90;
			// 
			// Column3
			// 
			this->Column3->HeaderText = L"Grades_Add";
			this->Column3->Name = L"Column3";
			this->Column3->Width = 90;
			// 
			// Column5
			// 
			this->Column5->HeaderText = L"Current_Year";
			this->Column5->Name = L"Column5";
			this->Column5->Width = 90;
			// 
			// Column6
			// 
			this->Column6->HeaderText = L"Current_Sem";
			this->Column6->Name = L"Column6";
			this->Column6->Width = 90;
			// 
			// Column7
			// 
			this->Column7->HeaderText = L"Midsem Start";
			this->Column7->Name = L"Column7";
			this->Column7->Width = 90;
			// 
			// Column8
			// 
			this->Column8->HeaderText = L"Endsem Start";
			this->Column8->Name = L"Column8";
			this->Column8->Width = 90;
			// 
			// permissions
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(742, 549);
			this->Controls->Add(this->panel1);
			this->Margin = System::Windows::Forms::Padding(2);
			this->Name = L"permissions";
			this->Text = L"permissions";
			this->Load += gcnew System::EventHandler(this, &permissions::permissions_Load);
			this->panel1->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	public: System::Void fetch()
	{
				dataGridView1->Rows->Clear();
				dataGridView1->AllowUserToAddRows = false;


				String^ query = "select * from [dbo].[permissions]";
				//cmd->Parameters->AddWithValue("@sem", this->Current_Semester);

				SqlDataReader^ dr = DatabaseHelper::ExecuteQuery(query);

				//int User_id = 0;

				while (dr->Read()){
					DateTime date = DateTime::Now;
					// User_id++;
					// Extracting values from the database result set and assigning them to variables
					course_add = dr->GetBoolean(0);
					course_enroll = dr->GetBoolean(1);
					grades_add = dr->GetBoolean(2);
					grades_view = dr->GetBoolean(3);
					current_year = dr->GetInt32(4);
					current_sem = dr->GetString(5);
					midsem_start = dr->GetDateTime(6);
					endsem_start = dr->GetDateTime(7);

					String^ midsem_date = midsem_start.ToString("yyyy-MM-dd");
					String^ endsem_date = endsem_start.ToString("yyyy-MM-dd");


					int rowIndex = this->dataGridView1->Rows->Add(course_add, course_enroll, grades_add, current_year, current_sem, midsem_date, endsem_date);

					// Now you have extracted all the values and assigned them to the respective variables
				}

				Button^ myButton;

				myButton = dynamic_cast<Button^>(this->Controls->Find("button1", true)[0]);
				if (*course_add == false)
				{
					myButton->Text = "Enable Course Add";
				}
				else myButton->Text = "Disable Course Add";

				myButton = dynamic_cast<Button^>(this->Controls->Find("button2", true)[0]);
				if (*course_enroll == false)
				{
					myButton->Text = "Enable Course Enroll";
				}
				else myButton->Text = "Disable Course Enroll";

				myButton = dynamic_cast<Button^>(this->Controls->Find("button3", true)[0]);
				if (*grades_add == false)
				{
					myButton->Text = "Enable Grades Release";
				}
				else myButton->Text = "Disable Grades Release";

				dataGridView1->TabStop = false;
				dataGridView1->ClearSelection();
	}
	private: System::Void permissions_Load(System::Object^  sender, System::EventArgs^  e) {
				 fetch();
	}

#pragma endregion
	public: Form^ globalForm;
	private: System::Void panel1_Paint(System::Object^  sender, System::Windows::Forms::PaintEventArgs^  e) {
	}

	private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
				 String^ query = "select * from [dbo].[permissions]";
				 //cmd->Parameters->AddWithValue("@sem", this->Current_Semester);

				 SqlDataReader^ dr = DatabaseHelper::ExecuteQuery(query);

				 //int User_id = 0;

				 while (dr->Read()){
					 // Extracting values from the database result set and assigning them to variables
					 course_enroll = dr->GetBoolean(1);
				 }

				 if (*course_enroll == false) *course_enroll = true;
				 else *course_enroll = false;

				 query = "UPDATE [dbo].[permissions] SET course_enroll = @course_enroll";
				 array<SqlParameter^>^ parameters1 = {
					 gcnew SqlParameter("@course_enroll", course_enroll),

				 };
				 dr = DatabaseHelper::ExecuteQuery(query, parameters1);
				 dr->Close();

				 fetch();
	}
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
				 String^ query = "select * from [dbo].[permissions]";
				 //cmd->Parameters->AddWithValue("@sem", this->Current_Semester);

				 SqlDataReader^ dr = DatabaseHelper::ExecuteQuery(query);

				 //int User_id = 0;

				 while (dr->Read()){
					 // Extracting values from the database result set and assigning them to variables
					 course_add = dr->GetBoolean(0);
				 }

				 if (*course_add == false) *course_add = true;
				 else *course_add = false;

				 query = "UPDATE [dbo].[permissions] SET course_add = @course_add";
				 array<SqlParameter^>^ parameters1 = {
					 gcnew SqlParameter("@course_add", course_add),

				 };
				 dr = DatabaseHelper::ExecuteQuery(query, parameters1);
				 dr->Close();

				 fetch();
	}
	private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {
				 String^ query = "select * from [dbo].[permissions]";
				 //cmd->Parameters->AddWithValue("@sem", this->Current_Semester);

				 SqlDataReader^ dr = DatabaseHelper::ExecuteQuery(query);

				 //int User_id = 0;

				 while (dr->Read()){
					 // Extracting values from the database result set and assigning them to variables
					 grades_add = dr->GetBoolean(2);
				 }

				 if (*grades_add == false) *grades_add = true;
				 else *grades_add = false;

				 query = "UPDATE [dbo].[permissions] SET grades_add = @grades_add";
				 array<SqlParameter^>^ parameters1 = {
					 gcnew SqlParameter("@grades_add", grades_add),

				 };
				 dr = DatabaseHelper::ExecuteQuery(query, parameters1);
				 dr->Close();

				 fetch();
	}
	private: System::Void button5_Click(System::Object^  sender, System::EventArgs^  e) {
				 String^ query = "select * from [dbo].[permissions]";
				 //cmd->Parameters->AddWithValue("@sem", this->Current_Semester);

				 SqlDataReader^ dr = DatabaseHelper::ExecuteQuery(query);

				 //int User_id = 0;

				 while (dr->Read()){
					 // Extracting values from the database result set and assigning them to variables
					 midsem_start = dr->GetDateTime(6);
				 }

				 DateTime date = dateTimePicker1->Value;
				 midsem_start = date;

				 query = "UPDATE [dbo].[permissions] SET Midsem_Start_Date = @midsem_start";
				 array<SqlParameter^>^ parameters1 = {
					 gcnew SqlParameter("@midsem_start", midsem_start),

				 };
				 dr = DatabaseHelper::ExecuteQuery(query, parameters1);
				 dr->Close();

				 fetch();

	}
	private: System::Void button6_Click(System::Object^  sender, System::EventArgs^  e) {
				 String^ query = "select * from [dbo].[permissions]";
				 //cmd->Parameters->AddWithValue("@sem", this->Current_Semester);

				 SqlDataReader^ dr = DatabaseHelper::ExecuteQuery(query);

				 //int User_id = 0;

				 while (dr->Read()){
					 // Extracting values from the database result set and assigning them to variables
					 endsem_start = dr->GetDateTime(7);
				 }

				 DateTime date = dateTimePicker2->Value;
				 endsem_start = date;

				 query = "UPDATE [dbo].[permissions] SET Endsem_Start_Date = @endsem_start";
				 array<SqlParameter^>^ parameters1 = {
					 gcnew SqlParameter("@endsem_start", endsem_start),

				 };
				 dr = DatabaseHelper::ExecuteQuery(query, parameters1);
				 dr->Close();

				 fetch();
	}
	private: System::Void button7_Click(System::Object^  sender, System::EventArgs^  e) {
				 try{
					 TimeTable::allocateSlots();
					 MessageBox::Show("TT generation successfull");
				 }
				 catch (Exception^ ex){
					 MessageBox::Show(ex->Message);
				 }
	}
	private: System::Void button8_Click(System::Object^  sender, System::EventArgs^  e) {

				 String^ query = "Delete from exam";
				 SqlDataReader^ dr = DatabaseHelper::ExecuteQuery(query);
				 dr->Close();
				 

				 query = R"(
DECLARE @Course_ID VARCHAR(50);
DECLARE @Room_ID1 VARCHAR(50);
DECLARE @Room_ID2 VARCHAR(50);
DECLARE @Slot VARCHAR(50);
DECLARE @Time_Slot VARCHAR(50);
DECLARE @Exam_Date DATE;
DECLARE @Exam_Date_New DATE;
DECLARE @User_ID VARCHAR(50);
DECLARE @Student_Count INT;
DECLARE @Student_Number INT = 0;
DECLARE @i INT = 0;
DECLARE @n INT;
DECLARE @Room_Type VARCHAR(50);

SELECT @Exam_Date = Midsem_Start_Date FROM permissions;

DECLARE course_cursor CURSOR FOR
SELECT t.Course_ID, t.Slot, c.ElectiveOrCompulsory
FROM timetable t
JOIN course c ON t.Course_ID = c.Course_Code
ORDER BY Slot;

OPEN course_cursor;

FETCH NEXT FROM course_cursor INTO @Course_ID, @Slot, @Room_Type;

WHILE @@FETCH_STATUS = 0
BEGIN
IF LEN(@Slot) <= 2
BEGIN
SET @Room_Type = CASE WHEN @Room_Type = 0 THEN 'Lecture Hall' ELSE 'Classroom' END;
SELECT @n = COUNT(*) FROM classroom WHERE Room_type = @Room_Type;
SELECT @Room_ID1 = Room_ID
FROM (
SELECT Room_ID, ROW_NUMBER() OVER (ORDER BY Room_ID) AS rn
FROM classroom
WHERE Room_type = @Room_Type
) AS subquery
WHERE rn = @i % @n + 1;
SELECT @Room_ID2 = Room_ID
FROM (
SELECT Room_ID, ROW_NUMBER() OVER (ORDER BY Room_ID) AS rn
FROM classroom
WHERE Room_type = @Room_Type
) AS subquery
WHERE rn = (@i + 1) % @n + 1;
SET @Time_Slot = CASE WHEN SUBSTRING(@Slot, 2, 1) = '1' THEN '9AM-11AM' ELSE '2PM-4PM' END;
SET @Exam_Date_New = DATEADD(day,
CASE
WHEN SUBSTRING(@Slot, 1, 1) = 'A' THEN 0
WHEN SUBSTRING(@Slot, 1, 1) = 'B' THEN 1
WHEN SUBSTRING(@Slot, 1, 1) = 'C' THEN 2
WHEN SUBSTRING(@Slot, 1, 1) = 'D' THEN 3
WHEN SUBSTRING(@Slot, 1, 1) = 'E' THEN 4
ELSE 0
END, @Exam_Date);

DECLARE student_cursor CURSOR FOR
SELECT User_ID FROM grade
WHERE CourseCode = @Course_ID AND Approval_Status = 'Approved'
ORDER BY User_ID;

OPEN student_cursor;

FETCH NEXT FROM student_cursor INTO @User_ID;

WHILE @@FETCH_STATUS = 0
BEGIN
SET @Student_Number = @Student_Number + 1;
IF @Student_Number <= @Student_Count / 2
BEGIN
PRINT 'Course_ID: ' + @Course_ID + ', Room_ID: ' + @Room_ID1 + ', Slot: ' + @Slot + ', Time_Slot: ' + @Time_Slot + ', Exam_Date: ' + CONVERT(VARCHAR, @Exam_Date_New, 23) + ', User_ID: ' + @User_ID;
INSERT INTO exam (Course_ID, Date, Time_Slot, Room_ID, Student_ID, ExamType)
VALUES (@Course_ID, CONVERT(VARCHAR, @Exam_Date_New, 23), @Time_Slot, @Room_ID1, @User_ID, 0);
END
ELSE
BEGIN
PRINT 'Course_ID: ' + @Course_ID + ', Room_ID: ' + @Room_ID2 + ', Slot: ' + @Slot + ', Time_Slot: ' + @Time_Slot + ', Exam_Date: ' + CONVERT(VARCHAR, @Exam_Date_New, 23) + ', User_ID: ' + @User_ID;
INSERT INTO exam (Course_ID, Date, Time_Slot, Room_ID, Student_ID, ExamType)
VALUES (@Course_ID, CONVERT(VARCHAR, @Exam_Date_New, 23), @Time_Slot, @Room_ID2, @User_ID, 0);
END

FETCH NEXT FROM student_cursor INTO @User_ID;
END;

CLOSE student_cursor;
DEALLOCATE student_cursor;

SET @Student_Number = 0;
END

SET @i = @i + 1;

FETCH NEXT FROM course_cursor INTO @Course_ID, @Slot, @Room_Type;
END;

CLOSE course_cursor;
DEALLOCATE course_cursor;


)";

	dr = SeatingHelper::fetchSeating(query);
	dr->Close();
	MessageBox::Show("Generated Midsem Seating Arrangement Successfully");
	}
private: System::Void button4_Click(System::Object^  sender, System::EventArgs^  e) {
			 String^ query = "Delete from exam";
			 SqlDataReader^ dr = DatabaseHelper::ExecuteQuery(query);
			 dr->Close();

query = R"(
DECLARE @Course_ID VARCHAR(50);
DECLARE @Room_ID1 VARCHAR(50);
DECLARE @Room_ID2 VARCHAR(50);
DECLARE @Slot VARCHAR(50);
DECLARE @Time_Slot VARCHAR(50);
DECLARE @Exam_Date DATE;
DECLARE @Exam_Date_New DATE;
DECLARE @User_ID VARCHAR(50);
DECLARE @Student_Count INT;
DECLARE @Student_Number INT = 0;
DECLARE @i INT = 0;
DECLARE @n INT;
DECLARE @Room_Type VARCHAR(50);

SELECT @Exam_Date = Endsem_Start_Date FROM permissions;

DECLARE course_cursor CURSOR FOR
SELECT t.Course_ID, t.Slot, c.ElectiveOrCompulsory
FROM timetable t
JOIN course c ON t.Course_ID = c.Course_Code
ORDER BY Slot;

OPEN course_cursor;

FETCH NEXT FROM course_cursor INTO @Course_ID, @Slot, @Room_Type;

WHILE @@FETCH_STATUS = 0
BEGIN
IF LEN(@Slot) <= 2
BEGIN
SET @Room_Type = CASE WHEN @Room_Type = 0 THEN 'Lecture Hall' ELSE 'Classroom' END;
SELECT @n = COUNT(*) FROM classroom WHERE Room_type = @Room_Type;
SELECT @Room_ID1 = Room_ID
FROM (
SELECT Room_ID, ROW_NUMBER() OVER (ORDER BY Room_ID) AS rn
FROM classroom
WHERE Room_type = @Room_Type
) AS subquery
WHERE rn = @i % @n + 1;
SELECT @Room_ID2 = Room_ID
FROM (
SELECT Room_ID, ROW_NUMBER() OVER (ORDER BY Room_ID) AS rn
FROM classroom
WHERE Room_type = @Room_Type
) AS subquery
WHERE rn = (@i + 1) % @n + 1;
SET @Time_Slot = CASE WHEN SUBSTRING(@Slot, 2, 1) = '1' THEN '9AM-12PM' ELSE '2PM-5PM' END;
SET @Exam_Date_New = DATEADD(day,
CASE
WHEN SUBSTRING(@Slot, 1, 1) = 'A' THEN 0
WHEN SUBSTRING(@Slot, 1, 1) = 'B' THEN 1
WHEN SUBSTRING(@Slot, 1, 1) = 'C' THEN 2
WHEN SUBSTRING(@Slot, 1, 1) = 'D' THEN 3
WHEN SUBSTRING(@Slot, 1, 1) = 'E' THEN 4
ELSE 0
END, @Exam_Date);

DECLARE student_cursor CURSOR FOR
SELECT User_ID FROM grade
WHERE CourseCode = @Course_ID AND Approval_Status = 'Approved'
ORDER BY User_ID;

OPEN student_cursor;

FETCH NEXT FROM student_cursor INTO @User_ID;

WHILE @@FETCH_STATUS = 0
BEGIN
SET @Student_Number = @Student_Number + 1;

IF @Student_Number <= @Student_Count / 2
BEGIN
PRINT 'Course_ID: ' + @Course_ID + ', Room_ID: ' + @Room_ID1 + ', Slot: ' + @Slot + ', Time_Slot: ' + @Time_Slot + ', Exam_Date: ' + CONVERT(VARCHAR, @Exam_Date_New, 23) + ', User_ID: ' + @User_ID;
INSERT INTO exam (Course_ID, Date, Time_Slot, Room_ID, Student_ID, ExamType)
VALUES (@Course_ID, CONVERT(VARCHAR, @Exam_Date_New, 23), @Time_Slot, @Room_ID1, @User_ID, 1);
END
ELSE
BEGIN
PRINT 'Course_ID: ' + @Course_ID + ', Room_ID: ' + @Room_ID2 + ', Slot: ' + @Slot + ', Time_Slot: ' + @Time_Slot + ', Exam_Date: ' + CONVERT(VARCHAR, @Exam_Date_New, 23) + ', User_ID: ' + @User_ID;
INSERT INTO exam (Course_ID, Date, Time_Slot, Room_ID, Student_ID, ExamType)
VALUES (@Course_ID, CONVERT(VARCHAR, @Exam_Date_New, 23), @Time_Slot, @Room_ID2, @User_ID, 1);
END

FETCH NEXT FROM student_cursor INTO @User_ID;
END;

CLOSE student_cursor;
DEALLOCATE student_cursor;

SET @Student_Number = 0;
END

SET @i = @i + 1;

FETCH NEXT FROM course_cursor INTO @Course_ID, @Slot, @Room_Type;
END;

CLOSE course_cursor;
DEALLOCATE course_cursor;
)";
		
		dr = SeatingHelper::fetchSeating(query);
		dr->Close();
		MessageBox::Show("Generated Endsem Seating Arrangement Successfully");
	}
};
}