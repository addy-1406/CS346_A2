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









	private: System::Windows::Forms::Button^  button4;
	private: System::Windows::Forms::Button^  button3;
	private: System::Windows::Forms::Button^  button6;

	private: System::Windows::Forms::Button^  button5;

	private: System::Windows::Forms::RichTextBox^  richTextBox5;
	private: System::Windows::Forms::RichTextBox^  richTextBox1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column2;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column3;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column4;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column5;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column6;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column7;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column8;
	private: System::Windows::Forms::DateTimePicker^  dateTimePicker2;
	private: System::Windows::Forms::DateTimePicker^  dateTimePicker1;



























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
			this->dateTimePicker2 = (gcnew System::Windows::Forms::DateTimePicker());
			this->dateTimePicker1 = (gcnew System::Windows::Forms::DateTimePicker());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->richTextBox5 = (gcnew System::Windows::Forms::RichTextBox());
			this->richTextBox1 = (gcnew System::Windows::Forms::RichTextBox());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->Column1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column2 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column3 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column4 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
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
			this->panel1->Controls->Add(this->dateTimePicker2);
			this->panel1->Controls->Add(this->dateTimePicker1);
			this->panel1->Controls->Add(this->button6);
			this->panel1->Controls->Add(this->button5);
			this->panel1->Controls->Add(this->richTextBox5);
			this->panel1->Controls->Add(this->richTextBox1);
			this->panel1->Controls->Add(this->button4);
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
			// dateTimePicker2
			// 
			this->dateTimePicker2->Location = System::Drawing::Point(252, 345);
			this->dateTimePicker2->Name = L"dateTimePicker2";
			this->dateTimePicker2->Size = System::Drawing::Size(186, 20);
			this->dateTimePicker2->TabIndex = 17;
			// 
			// dateTimePicker1
			// 
			this->dateTimePicker1->Location = System::Drawing::Point(252, 273);
			this->dateTimePicker1->Name = L"dateTimePicker1";
			this->dateTimePicker1->Size = System::Drawing::Size(186, 20);
			this->dateTimePicker1->TabIndex = 16;
			// 
			// button6
			// 
			this->button6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F));
			this->button6->Location = System::Drawing::Point(460, 341);
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
			this->button5->Location = System::Drawing::Point(460, 273);
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
			this->richTextBox5->Location = System::Drawing::Point(118, 347);
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
			this->richTextBox1->Location = System::Drawing::Point(118, 275);
			this->richTextBox1->Name = L"richTextBox1";
			this->richTextBox1->Size = System::Drawing::Size(128, 24);
			this->richTextBox1->TabIndex = 7;
			this->richTextBox1->Text = L"Enter Midsem Start Date:";
			// 
			// button4
			// 
			this->button4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button4->Location = System::Drawing::Point(376, 158);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(140, 43);
			this->button4->TabIndex = 6;
			this->button4->Text = L"Enable Grades View";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &permissions::button4_Click);
			// 
			// button3
			// 
			this->button3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button3->Location = System::Drawing::Point(194, 158);
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
			this->button2->Location = System::Drawing::Point(376, 92);
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
			this->button1->Location = System::Drawing::Point(194, 92);
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
			this->dataGridView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(8) {
				this->Column1,
					this->Column2, this->Column3, this->Column4, this->Column5, this->Column6, this->Column7, this->Column8
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
			// Column4
			// 
			this->Column4->HeaderText = L"Grades_View";
			this->Column4->Name = L"Column4";
			this->Column4->Width = 90;
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


					int rowIndex = this->dataGridView1->Rows->Add(course_add, course_enroll, grades_add, grades_view, current_year, current_sem, midsem_date, endsem_date);

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

				myButton = dynamic_cast<Button^>(this->Controls->Find("button4", true)[0]);
				if (*grades_view == false)
				{
					myButton->Text = "Enable Grades View";
				}
				else myButton->Text = "Disable Grades View";

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
	private: System::Void button4_Click(System::Object^  sender, System::EventArgs^  e) {
				 String^ query = "select * from [dbo].[permissions]";
				 //cmd->Parameters->AddWithValue("@sem", this->Current_Semester);

				 SqlDataReader^ dr = DatabaseHelper::ExecuteQuery(query);

				 //int User_id = 0;

				 while (dr->Read()){
					 // Extracting values from the database result set and assigning them to variables
					 grades_view = dr->GetBoolean(3);
				 }

				 if (*grades_view == false) *grades_view = true;
				 else *grades_view = false;

				 query = "UPDATE [dbo].[permissions] SET grades_view = @grades_view";
				 array<SqlParameter^>^ parameters1 = {
					 gcnew SqlParameter("@grades_view", grades_view),

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
};
}