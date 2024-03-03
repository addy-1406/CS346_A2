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
	using namespace MySql::Data::MySqlClient;

	/// <summary>
	/// Summary for AddCourseForm
	/// </summary>
	public ref class AddCourseForm : public System::Windows::Forms::Form
	{
	public:
		AddCourseForm(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//

			// Add labels and text boxes
		}
		AddCourseForm(int userid)
		{
			InitializeComponent();
			this->userid = userid;
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~AddCourseForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TextBox^  textBox1;
	protected:
	private: System::Windows::Forms::TextBox^  textBox2;
	private: System::Windows::Forms::TextBox^  textBox3;
	private: System::Windows::Forms::TextBox^  textBox4;
	private: System::Windows::Forms::TextBox^  textBox5;
	private: System::Windows::Forms::TextBox^  textBox6;
	private: System::Windows::Forms::TextBox^  textBox7;

	private: System::Windows::Forms::TextBox^  textBox9;









	private: System::Windows::Forms::Label^  label10;


	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;
	private: System::Windows::Forms::PictureBox^  pictureBox1;
	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::Label^  label11;
	private: System::Windows::Forms::Label^  label13;
	private: System::Windows::Forms::Label^  label14;
	private: System::Windows::Forms::Label^  label15;
	private: System::Windows::Forms::Label^  label12;
	private: System::Windows::Forms::Label^  label16;
	private: System::Windows::Forms::Label^  label17;
	private: System::Windows::Forms::PictureBox^  pictureBox2;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Button^  button1;
			 int userid;
			 // Function to add labels and text boxes


#pragma region Windows Form Designer generated code
			 /// <summary>
			 /// Required method for Designer support - do not modify
			 /// the contents of this method with the code editor.
			 /// </summary>
			 void InitializeComponent(void)
			 {
				 this->textBox1 = (gcnew System::Windows::Forms::TextBox());
				 this->textBox2 = (gcnew System::Windows::Forms::TextBox());
				 this->textBox3 = (gcnew System::Windows::Forms::TextBox());
				 this->textBox4 = (gcnew System::Windows::Forms::TextBox());
				 this->textBox5 = (gcnew System::Windows::Forms::TextBox());
				 this->textBox6 = (gcnew System::Windows::Forms::TextBox());
				 this->textBox7 = (gcnew System::Windows::Forms::TextBox());
				 this->textBox9 = (gcnew System::Windows::Forms::TextBox());
				 this->label10 = (gcnew System::Windows::Forms::Label());
				 this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
				 this->label7 = (gcnew System::Windows::Forms::Label());
				 this->label11 = (gcnew System::Windows::Forms::Label());
				 this->label13 = (gcnew System::Windows::Forms::Label());
				 this->label14 = (gcnew System::Windows::Forms::Label());
				 this->label15 = (gcnew System::Windows::Forms::Label());
				 this->label12 = (gcnew System::Windows::Forms::Label());
				 this->label16 = (gcnew System::Windows::Forms::Label());
				 this->label17 = (gcnew System::Windows::Forms::Label());
				 this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
				 this->button2 = (gcnew System::Windows::Forms::Button());
				 this->button1 = (gcnew System::Windows::Forms::Button());
				 (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
				 (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
				 this->SuspendLayout();
				 // 
				 // textBox1
				 // 
				 this->textBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
				 this->textBox1->Location = System::Drawing::Point(501, 112);
				 this->textBox1->Name = L"textBox1";
				 this->textBox1->Size = System::Drawing::Size(219, 30);
				 this->textBox1->TabIndex = 0;
				 // 
				 // textBox2
				 // 
				 this->textBox2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
				 this->textBox2->Location = System::Drawing::Point(242, 112);
				 this->textBox2->Name = L"textBox2";
				 this->textBox2->Size = System::Drawing::Size(219, 30);
				 this->textBox2->TabIndex = 1;
				 // 
				 // textBox3
				 // 
				 this->textBox3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
					 static_cast<System::Byte>(0)));
				 this->textBox3->Location = System::Drawing::Point(501, 191);
				 this->textBox3->Multiline = true;
				 this->textBox3->Name = L"textBox3";
				 this->textBox3->Size = System::Drawing::Size(219, 177);
				 this->textBox3->TabIndex = 2;
				 // 
				 // textBox4
				 // 
				 this->textBox4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
				 this->textBox4->Location = System::Drawing::Point(242, 191);
				 this->textBox4->Name = L"textBox4";
				 this->textBox4->Size = System::Drawing::Size(219, 30);
				 this->textBox4->TabIndex = 3;
				 // 
				 // textBox5
				 // 
				 this->textBox5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
				 this->textBox5->Location = System::Drawing::Point(242, 266);
				 this->textBox5->Name = L"textBox5";
				 this->textBox5->Size = System::Drawing::Size(219, 30);
				 this->textBox5->TabIndex = 4;
				 // 
				 // textBox6
				 // 
				 this->textBox6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
				 this->textBox6->Location = System::Drawing::Point(242, 338);
				 this->textBox6->Name = L"textBox6";
				 this->textBox6->Size = System::Drawing::Size(219, 30);
				 this->textBox6->TabIndex = 5;
				 // 
				 // textBox7
				 // 
				 this->textBox7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
				 this->textBox7->Location = System::Drawing::Point(501, 417);
				 this->textBox7->Name = L"textBox7";
				 this->textBox7->Size = System::Drawing::Size(219, 30);
				 this->textBox7->TabIndex = 6;
				 // 
				 // textBox9
				 // 
				 this->textBox9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
				 this->textBox9->Location = System::Drawing::Point(242, 417);
				 this->textBox9->Name = L"textBox9";
				 this->textBox9->Size = System::Drawing::Size(219, 30);
				 this->textBox9->TabIndex = 8;
				 // 
				 // label10
				 // 
				 this->label10->AutoSize = true;
				 this->label10->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(20)), static_cast<System::Int32>(static_cast<System::Byte>(93)),
					 static_cast<System::Int32>(static_cast<System::Byte>(160)));
				 this->label10->Font = (gcnew System::Drawing::Font(L"Segoe UI Symbol", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
					 static_cast<System::Byte>(0)));
				 this->label10->ForeColor = System::Drawing::Color::White;
				 this->label10->Location = System::Drawing::Point(294, 20);
				 this->label10->Name = L"label10";
				 this->label10->Size = System::Drawing::Size(361, 41);
				 this->label10->TabIndex = 18;
				 this->label10->Text = L"ENTER COURSE DETAILS";
				 this->label10->Click += gcnew System::EventHandler(this, &AddCourseForm::label10_Click);
				 // 
				 // pictureBox1
				 // 
				 this->pictureBox1->BackColor = System::Drawing::Color::White;
				 this->pictureBox1->Location = System::Drawing::Point(204, 64);
				 this->pictureBox1->Name = L"pictureBox1";
				 this->pictureBox1->Size = System::Drawing::Size(553, 552);
				 this->pictureBox1->TabIndex = 20;
				 this->pictureBox1->TabStop = false;
				 // 
				 // label7
				 // 
				 this->label7->AutoSize = true;
				 this->label7->BackColor = System::Drawing::Color::White;
				 this->label7->Font = (gcnew System::Drawing::Font(L"Segoe UI Symbol", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
					 static_cast<System::Byte>(0)));
				 this->label7->ForeColor = System::Drawing::SystemColors::ControlText;
				 this->label7->Location = System::Drawing::Point(238, 89);
				 this->label7->Name = L"label7";
				 this->label7->Size = System::Drawing::Size(98, 20);
				 this->label7->TabIndex = 21;
				 this->label7->Text = L"Course Name";
				 // 
				 // label11
				 // 
				 this->label11->AutoSize = true;
				 this->label11->BackColor = System::Drawing::Color::White;
				 this->label11->Font = (gcnew System::Drawing::Font(L"Segoe UI Symbol", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
					 static_cast<System::Byte>(0)));
				 this->label11->ForeColor = System::Drawing::SystemColors::ControlText;
				 this->label11->Location = System::Drawing::Point(497, 168);
				 this->label11->Name = L"label11";
				 this->label11->Size = System::Drawing::Size(85, 20);
				 this->label11->TabIndex = 22;
				 this->label11->Text = L"Description";
				 // 
				 // label13
				 // 
				 this->label13->AutoSize = true;
				 this->label13->BackColor = System::Drawing::Color::White;
				 this->label13->Font = (gcnew System::Drawing::Font(L"Segoe UI Symbol", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
					 static_cast<System::Byte>(0)));
				 this->label13->ForeColor = System::Drawing::SystemColors::ControlText;
				 this->label13->Location = System::Drawing::Point(238, 168);
				 this->label13->Name = L"label13";
				 this->label13->Size = System::Drawing::Size(84, 20);
				 this->label13->TabIndex = 24;
				 this->label13->Text = L"L (Lectures)";
				 // 
				 // label14
				 // 
				 this->label14->AutoSize = true;
				 this->label14->BackColor = System::Drawing::Color::White;
				 this->label14->Font = (gcnew System::Drawing::Font(L"Segoe UI Symbol", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
					 static_cast<System::Byte>(0)));
				 this->label14->ForeColor = System::Drawing::SystemColors::ControlText;
				 this->label14->Location = System::Drawing::Point(238, 240);
				 this->label14->Name = L"label14";
				 this->label14->Size = System::Drawing::Size(88, 20);
				 this->label14->TabIndex = 25;
				 this->label14->Text = L"T (Tutorials)";
				 // 
				 // label15
				 // 
				 this->label15->AutoSize = true;
				 this->label15->BackColor = System::Drawing::Color::White;
				 this->label15->Font = (gcnew System::Drawing::Font(L"Segoe UI Symbol", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
					 static_cast<System::Byte>(0)));
				 this->label15->ForeColor = System::Drawing::SystemColors::ControlText;
				 this->label15->Location = System::Drawing::Point(243, 315);
				 this->label15->Name = L"label15";
				 this->label15->Size = System::Drawing::Size(93, 20);
				 this->label15->TabIndex = 26;
				 this->label15->Text = L"P (Practicals)";
				 // 
				 // label12
				 // 
				 this->label12->AutoSize = true;
				 this->label12->BackColor = System::Drawing::Color::White;
				 this->label12->Font = (gcnew System::Drawing::Font(L"Segoe UI Symbol", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
					 static_cast<System::Byte>(0)));
				 this->label12->ForeColor = System::Drawing::SystemColors::ControlText;
				 this->label12->Location = System::Drawing::Point(497, 394);
				 this->label12->Name = L"label12";
				 this->label12->Size = System::Drawing::Size(49, 20);
				 this->label12->TabIndex = 27;
				 this->label12->Text = L"Intake";
				 // 
				 // label16
				 // 
				 this->label16->AutoSize = true;
				 this->label16->BackColor = System::Drawing::Color::White;
				 this->label16->Font = (gcnew System::Drawing::Font(L"Segoe UI Symbol", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
					 static_cast<System::Byte>(0)));
				 this->label16->ForeColor = System::Drawing::SystemColors::ControlText;
				 this->label16->Location = System::Drawing::Point(238, 394);
				 this->label16->Name = L"label16";
				 this->label16->Size = System::Drawing::Size(70, 20);
				 this->label16->TabIndex = 28;
				 this->label16->Text = L"Semester";
				 // 
				 // label17
				 // 
				 this->label17->AutoSize = true;
				 this->label17->BackColor = System::Drawing::Color::White;
				 this->label17->Font = (gcnew System::Drawing::Font(L"Segoe UI Symbol", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
					 static_cast<System::Byte>(0)));
				 this->label17->ForeColor = System::Drawing::SystemColors::ControlText;
				 this->label17->Location = System::Drawing::Point(497, 89);
				 this->label17->Name = L"label17";
				 this->label17->Size = System::Drawing::Size(93, 20);
				 this->label17->TabIndex = 29;
				 this->label17->Text = L"Course Code";
				 // 
				 // pictureBox2
				 // 
				 this->pictureBox2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(20)), static_cast<System::Int32>(static_cast<System::Byte>(93)),
					 static_cast<System::Int32>(static_cast<System::Byte>(160)));
				 this->pictureBox2->Location = System::Drawing::Point(204, 16);
				 this->pictureBox2->Name = L"pictureBox2";
				 this->pictureBox2->Size = System::Drawing::Size(553, 50);
				 this->pictureBox2->TabIndex = 30;
				 this->pictureBox2->TabStop = false;
				 // 
				 // button2
				 // 
				 this->button2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(20)), static_cast<System::Int32>(static_cast<System::Byte>(93)),
					 static_cast<System::Int32>(static_cast<System::Byte>(160)));
				 this->button2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
				 this->button2->Font = (gcnew System::Drawing::Font(L"Segoe UI Symbol", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
					 static_cast<System::Byte>(0)));
				 this->button2->ForeColor = System::Drawing::Color::White;
				 this->button2->Location = System::Drawing::Point(285, 481);
				 this->button2->Name = L"button2";
				 this->button2->Size = System::Drawing::Size(176, 46);
				 this->button2->TabIndex = 31;
				 this->button2->Text = L"Submit";
				 this->button2->UseVisualStyleBackColor = false;
				 this->button2->Click += gcnew System::EventHandler(this, &AddCourseForm::button2_Click);
				 // 
				 // button1
				 // 
				 this->button1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(20)), static_cast<System::Int32>(static_cast<System::Byte>(93)),
					 static_cast<System::Int32>(static_cast<System::Byte>(160)));
				 this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
				 this->button1->Font = (gcnew System::Drawing::Font(L"Segoe UI Symbol", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
					 static_cast<System::Byte>(0)));
				 this->button1->ForeColor = System::Drawing::Color::White;
				 this->button1->Location = System::Drawing::Point(501, 481);
				 this->button1->Name = L"button1";
				 this->button1->Size = System::Drawing::Size(176, 46);
				 this->button1->TabIndex = 32;
				 this->button1->Text = L"Clear";
				 this->button1->UseVisualStyleBackColor = false;
				 this->button1->Click += gcnew System::EventHandler(this, &AddCourseForm::button1_Click);

				 // 
				 // AddCourseForm
				 // 
				 this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
				 this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
				 this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(177)), static_cast<System::Int32>(static_cast<System::Byte>(212)),
					 static_cast<System::Int32>(static_cast<System::Byte>(224)));
				 this->ClientSize = System::Drawing::Size(970, 640);
				 this->Controls->Add(this->button1);
				 this->Controls->Add(this->button2);
				 this->Controls->Add(this->label17);
				 this->Controls->Add(this->label16);
				 this->Controls->Add(this->label12);
				 this->Controls->Add(this->label15);
				 this->Controls->Add(this->label14);
				 this->Controls->Add(this->label13);
				 this->Controls->Add(this->label11);
				 this->Controls->Add(this->label7);
				 this->Controls->Add(this->label10);
				 this->Controls->Add(this->textBox9);
				 this->Controls->Add(this->textBox7);
				 this->Controls->Add(this->textBox6);
				 this->Controls->Add(this->textBox5);
				 this->Controls->Add(this->textBox4);
				 this->Controls->Add(this->textBox3);
				 this->Controls->Add(this->textBox2);
				 this->Controls->Add(this->textBox1);
				 this->Controls->Add(this->pictureBox1);
				 this->Controls->Add(this->pictureBox2);
				 this->Name = L"AddCourseForm";
				 this->Text = L"AddCourseForm";
				 this->Load += gcnew System::EventHandler(this, &AddCourseForm::AddCourseForm_Load);
				 (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
				 (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
				 this->ResumeLayout(false);
				 this->PerformLayout();

			 }
			 void AddCourseToDatabase(int userid)
			 {

				 try
				 {

					 // Check if Course_ID already exists
					 //int courseID = 1;
					 //String^ query = "SELECT COUNT(*) FROM course WHERE Course_ID = @Course_ID";
					 //array<SqlParameter^>^ parameters = {
					 //gcnew SqlParameter("@course_ID", courseID),
					 //};
					 //SqlDataReader^ dr = DatabaseHelper::ExecuteQuery(query, parameters);

					 //while (count > 0)
					 //{
					 //	// If Course_ID exists, increment it
					 //	courseID++;
					 //	checkCmd->Parameters->Clear();
					 //	checkCmd->Parameters->AddWithValue("@Course_ID", courseID);
					 //	count = Convert::ToInt32(checkCmd->ExecuteScalar());
					 //}

					 // Now courseID contains a unique Course_ID
					 //	MySqlCommand^ cmd = gcnew MySqlCommand("INSERT INTO course (Course_ID, Name, Description, L, T, P, C, Faculty_ID, Intake, Semester, Year, Course_Code) VALUES (@Course_ID, @Name, @Description, @L, @T, @P, @C, @Faculty_ID, @Intake, @Semester, @Year, @Course_Code)", con);

					 // Set parameter values
					 //cmd->Parameters->AddWithValue("@Course_ID", courseID);
					 //cmd->Parameters->AddWithValue("@Name", textBox2->Text);
					 //cmd->Parameters->AddWithValue("@Description", textBox3->Text);
					 //int L = Int32::Parse(textBox4->Text);
					 //int T = Int32::Parse(textBox5->Text);
					 //int P = Int32::Parse(textBox6->Text);
					 //int C = L * 2 + T * 2 + P;
					 //cmd->Parameters->AddWithValue("@L", L);
					 //cmd->Parameters->AddWithValue("@T", T);
					 //cmd->Parameters->AddWithValue("@P", P);
					 //cmd->Parameters->AddWithValue("@C", C);
					 //cmd->Parameters->AddWithValue("@Faculty_ID", userid); // Assuming a default value for Faculty_ID
					 //cmd->Parameters->AddWithValue("@Intake", textBox7->Text);
					 //cmd->Parameters->AddWithValue("@Semester", textBox8->Text);
					 //cmd->Parameters->AddWithValue("@Year", textBox9->Text);
					 //cmd->Parameters->AddWithValue("@Course_Code", textBox1->Text);

					 //cmd->ExecuteNonQuery();
					 String^ courseCode = textBox1->Text;
					 String^ query = "SELECT COUNT(*) FROM course WHERE Course_Code = @Course_Code";
					 array<SqlParameter^>^ parameters = {
						 gcnew SqlParameter("@Course_Code", courseCode),
					 };
					 SqlDataReader^ dr = DatabaseHelper::ExecuteQuery(query, parameters);

					 // Since we are expecting only one row as a result, we don't need a loop
					 if (dr->Read())
					 {
						 int count = Convert::ToInt32(dr[0]);
						 if (count > 0)
						 {
							 // Course with the given course code already exists
							 MessageBox::Show("Course code already exists!", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
						 }
						 else
						 {
							 int L = Int32::Parse(textBox4->Text);
							 int T = Int32::Parse(textBox5->Text);
							 int P = Int32::Parse(textBox6->Text);

							 // Course code doesn't exist, you can proceed with insertion or any other logic
							 String^ insertQuery = "INSERT INTO course (Name, Description, L, T, P, C, Faculty_ID, Intake, Semester, Course_Code, ElectiveorCompulsory) VALUES (@Name, @Description, @L, @T, @P, @C, @Faculty_ID, @Intake, @Semester, @Course_Code, @ElectiveorCompulsory)";
							 array<SqlParameter^>^ insertParameters = {
								 gcnew SqlParameter("@Name", textBox2->Text),
								 gcnew SqlParameter("@Description", textBox3->Text),
								 gcnew SqlParameter("@L", L),
								 gcnew SqlParameter("@T", T),
								 gcnew SqlParameter("@P", P),
								 gcnew SqlParameter("@C", L * 2 + T * 2 + P),
								 gcnew SqlParameter("@Faculty_ID", userid), // Assuming a default value for Faculty_ID
								 gcnew SqlParameter("@Intake", textBox7->Text),
								 gcnew SqlParameter("@Semester", textBox9->Text),
								 gcnew SqlParameter("@Course_Code", courseCode),
								 gcnew SqlParameter("@ElectiveorCompulsory", true) // Assuming 1 represents true for ElectiveorCompulsory
							 };

							 DatabaseHelper::ExecuteQuery(insertQuery, insertParameters);
							 // Optionally, you might want to inform the user about successful insertion
						 }
					 }

					 MessageBox::Show("Course added successfully!");
				 }
				 catch (Exception^ ex)
				 {
					 MessageBox::Show(ex->Message);
				 }
			 }


			 // Event handler for submit button click
			 System::Void button1_Click(System::Object^ sender, System::EventArgs^ e)
			 {
				 // Clear text of all text boxes
				 textBox1->Text = "";
				 textBox2->Text = "";
				 textBox3->Text = "";
				 textBox4->Text = "";
				 textBox5->Text = "";
				 textBox6->Text = "";
				 textBox7->Text = "";
				 textBox9->Text = "";
			 }

			 bool IsValidInt(String^ input)
			 {
				 try
				 {
					 int value = Int32::Parse(input);
					 return true;
				 }
				 catch (FormatException^)
				 {
					 return false;
				 }
			 }

	private: System::Void AddCourseForm_Load(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
				 // Type checking for each textbox
				 if (!IsValidInt(textBox4->Text) || !IsValidInt(textBox5->Text) || !IsValidInt(textBox6->Text) ||
					 !IsValidInt(textBox7->Text) || !IsValidInt(textBox9->Text))
				 {
					 MessageBox::Show("Please enter valid integer values for L, T, P, Intake, Semester, and Year.");
					 return;
				 }

				 if (textBox1->Text->Length != 5)
				 {
					 MessageBox::Show("Course code must be 5 characters long.");
					 return;
				 }

				 if (textBox2->Text->Length > 50)
				 {
					 MessageBox::Show("Course name must not exceed 50 characters.");
					 return;
				 }

				 if (textBox3->Text->Length > 200)
				 {
					 MessageBox::Show("Description must not exceed 200 characters.");
					 return;
				 }

				 // If all validations pass, add the course to the database
				 AddCourseToDatabase(userid);
	}
	private: System::Void label10_Click(System::Object^  sender, System::EventArgs^  e) {
	}
	};
}
#pragma endregion