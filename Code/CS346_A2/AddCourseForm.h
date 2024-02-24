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
	private: System::Windows::Forms::TextBox^  textBox8;
	private: System::Windows::Forms::TextBox^  textBox9;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::Label^  label8;
	private: System::Windows::Forms::Label^  label9;
	private: System::Windows::Forms::Label^  label10;
	private: System::Windows::Forms::Button^  button1;

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;
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
			this->textBox8 = (gcnew System::Windows::Forms::TextBox());
			this->textBox9 = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// textBox1
			// 
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->textBox1->Location = System::Drawing::Point(471, 438);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(219, 30);
			this->textBox1->TabIndex = 0;
			// 
			// textBox2
			// 
			this->textBox2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->textBox2->Location = System::Drawing::Point(471, 85);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(219, 30);
			this->textBox2->TabIndex = 1;
			// 
			// textBox3
			// 
			this->textBox3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox3->Location = System::Drawing::Point(471, 133);
			this->textBox3->Multiline = true;
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(219, 51);
			this->textBox3->TabIndex = 2;
			// 
			// textBox4
			// 
			this->textBox4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->textBox4->Location = System::Drawing::Point(471, 190);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(219, 30);
			this->textBox4->TabIndex = 3;
			// 
			// textBox5
			// 
			this->textBox5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->textBox5->Location = System::Drawing::Point(471, 231);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(219, 30);
			this->textBox5->TabIndex = 4;
			// 
			// textBox6
			// 
			this->textBox6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->textBox6->Location = System::Drawing::Point(471, 271);
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(219, 30);
			this->textBox6->TabIndex = 5;
			// 
			// textBox7
			// 
			this->textBox7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->textBox7->Location = System::Drawing::Point(471, 311);
			this->textBox7->Name = L"textBox7";
			this->textBox7->Size = System::Drawing::Size(219, 30);
			this->textBox7->TabIndex = 6;
			// 
			// textBox8
			// 
			this->textBox8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->textBox8->Location = System::Drawing::Point(471, 354);
			this->textBox8->Name = L"textBox8";
			this->textBox8->Size = System::Drawing::Size(219, 30);
			this->textBox8->TabIndex = 7;
			// 
			// textBox9
			// 
			this->textBox9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->textBox9->Location = System::Drawing::Point(471, 397);
			this->textBox9->Name = L"textBox9";
			this->textBox9->Size = System::Drawing::Size(219, 30);
			this->textBox9->TabIndex = 8;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(274, 85);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(139, 25);
			this->label1->TabIndex = 9;
			this->label1->Text = L"Course Name:";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->label2->Location = System::Drawing::Point(229, 133);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(184, 25);
			this->label2->TabIndex = 10;
			this->label2->Text = L"Course Description:";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->label3->Location = System::Drawing::Point(290, 190);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(123, 25);
			this->label3->TabIndex = 11;
			this->label3->Text = L"L (Lectures):";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->label4->Location = System::Drawing::Point(288, 234);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(125, 25);
			this->label4->TabIndex = 12;
			this->label4->Text = L"T (Tutorials):";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->label5->Location = System::Drawing::Point(279, 271);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(134, 25);
			this->label5->TabIndex = 13;
			this->label5->Text = L"P (Practicals):";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->label6->Location = System::Drawing::Point(342, 311);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(71, 25);
			this->label6->TabIndex = 14;
			this->label6->Text = L"Intake:";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->label7->Location = System::Drawing::Point(354, 354);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(59, 25);
			this->label7->TabIndex = 15;
			this->label7->Text = L"Year:";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->label8->Location = System::Drawing::Point(311, 397);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(102, 25);
			this->label8->TabIndex = 16;
			this->label8->Text = L"Semester:";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->label9->Location = System::Drawing::Point(279, 438);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(135, 25);
			this->label9->TabIndex = 17;
			this->label9->Text = L"Course Code:";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label10->Location = System::Drawing::Point(407, 25);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(127, 25);
			this->label10->TabIndex = 18;
			this->label10->Text = L"Add Course";
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->button1->Location = System::Drawing::Point(399, 492);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(153, 30);
			this->button1->TabIndex = 19;
			this->button1->Text = L"Submit";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &AddCourseForm::button1_Click);
			// 
			// AddCourseForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(970, 640);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->textBox9);
			this->Controls->Add(this->textBox8);
			this->Controls->Add(this->textBox7);
			this->Controls->Add(this->textBox6);
			this->Controls->Add(this->textBox5);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Name = L"AddCourseForm";
			this->Text = L"AddCourseForm";
			this->Load += gcnew System::EventHandler(this, &AddCourseForm::AddCourseForm_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
		void AddCourseToDatabase(int userid)
		{

			try
			{

				// Check if Course_ID already exists
				int courseID = 1;
				String^ query = "SELECT COUNT(*) FROM course WHERE Course_ID = @Course_ID";
				array<SqlParameter^>^ parameters = {
					gcnew SqlParameter("@course_ID", courseID),
				};
				SqlDataReader^ dr = DatabaseHelper::ExecuteQuery(query, parameters);

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
			// Type checking for each textbox
			if (!IsValidInt(textBox4->Text) || !IsValidInt(textBox5->Text) || !IsValidInt(textBox6->Text) ||
				!IsValidInt(textBox7->Text) || !IsValidInt(textBox8->Text) || !IsValidInt(textBox9->Text))
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
};
}
#pragma endregion
