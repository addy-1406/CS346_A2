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
	/// Summary for Fee_Payment_Dummy
	/// </summary>
	public ref class Fee_Payment_Dummy : public System::Windows::Forms::Form
	{
	public:
		Fee_Payment_Dummy(User^ User)
		{
			InitializeComponent();
			//
			user = User;
			stu = gcnew Student_data;
			label13->Hide();
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~Fee_Payment_Dummy()
		{
			if (components)
			{
				delete components;
			}
		}

	protected:







	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::TextBox^  textBox2;
	private: System::Windows::Forms::TextBox^  textBox3;
	private: System::Windows::Forms::TextBox^  textBox4;
	private: System::Windows::Forms::TextBox^  textBox5;

	private: System::Windows::Forms::PictureBox^  pictureBox1;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label9;
	private: System::Windows::Forms::Label^  label10;
	private: System::Windows::Forms::Label^  label11;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Label^  label13;

	private: System::Windows::Forms::PictureBox^  pictureBox2;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label4;

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
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			this->SuspendLayout();
			// 
			// textBox1
			// 
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Segoe UI Symbol", 10.2F));
			this->textBox1->Location = System::Drawing::Point(303, 151);
			this->textBox1->Name = L"textBox1";
			this->textBox1->ReadOnly = true;
			this->textBox1->Size = System::Drawing::Size(351, 30);
			this->textBox1->TabIndex = 8;
			// 
			// textBox2
			// 
			this->textBox2->Font = (gcnew System::Drawing::Font(L"Segoe UI Symbol", 10.2F));
			this->textBox2->Location = System::Drawing::Point(303, 225);
			this->textBox2->Name = L"textBox2";
			this->textBox2->ReadOnly = true;
			this->textBox2->Size = System::Drawing::Size(351, 30);
			this->textBox2->TabIndex = 9;
			// 
			// textBox3
			// 
			this->textBox3->Font = (gcnew System::Drawing::Font(L"Segoe UI Symbol", 10.2F));
			this->textBox3->Location = System::Drawing::Point(303, 296);
			this->textBox3->Name = L"textBox3";
			this->textBox3->ReadOnly = true;
			this->textBox3->Size = System::Drawing::Size(351, 30);
			this->textBox3->TabIndex = 10;
			// 
			// textBox4
			// 
			this->textBox4->Font = (gcnew System::Drawing::Font(L"Segoe UI Symbol", 10.2F));
			this->textBox4->Location = System::Drawing::Point(303, 367);
			this->textBox4->Name = L"textBox4";
			this->textBox4->ReadOnly = true;
			this->textBox4->Size = System::Drawing::Size(351, 30);
			this->textBox4->TabIndex = 11;
			// 
			// textBox5
			// 
			this->textBox5->Font = (gcnew System::Drawing::Font(L"Segoe UI Symbol", 10.2F));
			this->textBox5->Location = System::Drawing::Point(303, 439);
			this->textBox5->Name = L"textBox5";
			this->textBox5->ReadOnly = true;
			this->textBox5->Size = System::Drawing::Size(351, 30);
			this->textBox5->TabIndex = 12;
			// 
			// pictureBox1
			// 
			this->pictureBox1->BackColor = System::Drawing::Color::White;
			this->pictureBox1->Location = System::Drawing::Point(261, 88);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(436, 481);
			this->pictureBox1->TabIndex = 21;
			this->pictureBox1->TabStop = false;
			this->pictureBox1->Click += gcnew System::EventHandler(this, &Fee_Payment_Dummy::pictureBox1_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::White;
			this->label1->Font = (gcnew System::Drawing::Font(L"Segoe UI Symbol", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::SystemColors::ControlText;
			this->label1->Location = System::Drawing::Point(299, 128);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(59, 20);
			this->label1->TabIndex = 22;
			this->label1->Text = L"Roll No";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::White;
			this->label2->Font = (gcnew System::Drawing::Font(L"Segoe UI Symbol", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::SystemColors::ControlText;
			this->label2->Location = System::Drawing::Point(299, 202);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(49, 20);
			this->label2->TabIndex = 23;
			this->label2->Text = L"Name";
			this->label2->Click += gcnew System::EventHandler(this, &Fee_Payment_Dummy::label2_Click_1);
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->BackColor = System::Drawing::Color::White;
			this->label9->Font = (gcnew System::Drawing::Font(L"Segoe UI Symbol", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label9->ForeColor = System::Drawing::SystemColors::ControlText;
			this->label9->Location = System::Drawing::Point(299, 273);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(70, 20);
			this->label9->TabIndex = 24;
			this->label9->Text = L"Semester";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->BackColor = System::Drawing::Color::White;
			this->label10->Font = (gcnew System::Drawing::Font(L"Segoe UI Symbol", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label10->ForeColor = System::Drawing::SystemColors::ControlText;
			this->label10->Location = System::Drawing::Point(299, 344);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(62, 20);
			this->label10->TabIndex = 25;
			this->label10->Text = L"Amount";
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->BackColor = System::Drawing::Color::White;
			this->label11->Font = (gcnew System::Drawing::Font(L"Segoe UI Symbol", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label11->ForeColor = System::Drawing::SystemColors::ControlText;
			this->label11->Location = System::Drawing::Point(299, 416);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(103, 20);
			this->label11->TabIndex = 26;
			this->label11->Text = L"Payment Time";
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(20)), static_cast<System::Int32>(static_cast<System::Byte>(93)),
				static_cast<System::Int32>(static_cast<System::Byte>(160)));
			this->button2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button2->Font = (gcnew System::Drawing::Font(L"Segoe UI Symbol", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button2->ForeColor = System::Drawing::Color::White;
			this->button2->Location = System::Drawing::Point(391, 497);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(176, 46);
			this->button2->TabIndex = 27;
			this->button2->Text = L"Pay Fee";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &Fee_Payment_Dummy::button2_Click);
			// 
			// label13
			// 
			this->label13->BackColor = System::Drawing::Color::White;
			this->label13->Font = (gcnew System::Drawing::Font(L"Segoe UI Symbol", 12, System::Drawing::FontStyle::Bold));
			this->label13->ForeColor = System::Drawing::Color::Green;
			this->label13->Location = System::Drawing::Point(298, 491);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(356, 56);
			this->label13->TabIndex = 34;
			this->label13->Click += gcnew System::EventHandler(this, &Fee_Payment_Dummy::label13_Click);
			// 
			// pictureBox2
			// 
			this->pictureBox2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(20)), static_cast<System::Int32>(static_cast<System::Byte>(93)),
				static_cast<System::Int32>(static_cast<System::Byte>(160)));
			this->pictureBox2->Location = System::Drawing::Point(261, 17);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(436, 84);
			this->pictureBox2->TabIndex = 36;
			this->pictureBox2->TabStop = false;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(20)), static_cast<System::Int32>(static_cast<System::Byte>(93)),
				static_cast<System::Int32>(static_cast<System::Byte>(160)));
			this->label3->Font = (gcnew System::Drawing::Font(L"Segoe UI Symbol", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->ForeColor = System::Drawing::Color::White;
			this->label3->Location = System::Drawing::Point(387, 26);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(191, 41);
			this->label3->TabIndex = 37;
			this->label3->Text = L"FEE DETAILS";
			// 
			// label4
			// 
			this->label4->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(20)), static_cast<System::Int32>(static_cast<System::Byte>(93)),
				static_cast<System::Int32>(static_cast<System::Byte>(160)));
			this->label4->Font = (gcnew System::Drawing::Font(L"Segoe UI Symbol", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->ForeColor = System::Drawing::Color::White;
			this->label4->ImageAlign = System::Drawing::ContentAlignment::TopCenter;
			this->label4->Location = System::Drawing::Point(394, 70);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(173, 27);
			this->label4->TabIndex = 38;
			this->label4->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			// 
			// Fee_Payment_Dummy
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(177)), static_cast<System::Int32>(static_cast<System::Byte>(212)),
				static_cast<System::Int32>(static_cast<System::Byte>(224)));
			this->ClientSize = System::Drawing::Size(958, 578);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->pictureBox2);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->label11);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->textBox5);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label13);
			this->Controls->Add(this->pictureBox1);
			this->Name = L"Fee_Payment_Dummy";
			this->Text = L"Fee_Payment_Dummy";
			this->Load += gcnew System::EventHandler(this, &Fee_Payment_Dummy::Fee_Payment_Dummy_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	public: User^ user;
			public:	Student_data^ stu;

	public: System::Void get_profile(User^ user){
				try{
					String^ query = "SELECT * FROM [dbo].[student] where User_ID = @user_ID_fetch";
					array<SqlParameter^>^ parameters = {
						gcnew SqlParameter("@user_ID_fetch", System::Convert::ToString(user->userID))
					};

					SqlDataReader^ dr = DatabaseHelper::ExecuteQuery(query, parameters);
					while (dr->Read()){
						// each iteration corresponds to a particular record
						// this is how you can extract a particular column value, for example if the first field was user_id, use GetString(0) (as zero indexing is used) to get the value of userId
						stu->userID = dr->GetInt32(0);
						stu->email = dr->GetString(7);
						System::DateTime dob = dr->GetDateTime(2);
						// Convert DateTime to String^ with desired format
						stu->DOB = dob.ToString("yyyy-MM-dd");
						stu->Contact = dr->GetString(3);
						stu->Enrollment_Year = dr->GetInt32(4);
						stu->Address = dr->GetString(5);
						stu->Name = dr->GetString(1);
						stu->Current_semester = dr->GetInt32(6);
					}
					dr->Close();
				}
				catch (Exception^ ex){
					MessageBox::Show(ex->Message);
				}


	}
	public: System::Void get_fee_data(Student_data^ stu){
				try{
					String^ query = "SELECT * FROM [dbo].[Fee_Payment] where User_ID = @user_ID_fetch and Semester = @Semes";
					array<SqlParameter^>^ parameters = {
						gcnew SqlParameter("@user_ID_fetch", System::Convert::ToString(stu->userID)),
						gcnew SqlParameter("@Semes", System::Convert::ToString(stu->Current_semester))
					};

					SqlDataReader^ dr = DatabaseHelper::ExecuteQuery(query, parameters);
					if (!dr->HasRows)
					{
						try{
							String^ query = "SELECT * FROM [dbo].[Sem_Fee] where Semester = @Semes";
							array<SqlParameter^>^ parameters = {
								gcnew SqlParameter("@Semes", System::Convert::ToString(stu->Current_semester))
							};

							SqlDataReader^ dr1 = DatabaseHelper::ExecuteQuery(query, parameters);
							
								while (dr1->Read()){
									textBox5->Text = "Not Paid";
									textBox4->Text = dr1->GetInt32(1).ToString();
								}
							
							dr1->Close();
						}
						catch (Exception^ ex){
							MessageBox::Show(ex->Message);
						}
					}
					else
					{
						while (dr->Read()){
							System::DateTime payTime = dr->GetDateTime(2);
							// Convert DateTime to String^ with desired format
							textBox5->Text = payTime.ToString("yyyy-MM-dd HH:mm:ss");
							textBox4->Text = dr->GetInt32(1).ToString();
							button2->Hide();
							label13->Show();
							label13->Text = "Fees paid successfully!";
						}
					}
					dr->Close();
				}
				catch (Exception^ ex){
					MessageBox::Show(ex->Message);
				}


	}
	public: System::Void get_current_sem(){
				try{
					String^ query = "SELECT Current_Year, Current_Sem FROM [dbo].[permissions]";
					SqlDataReader^ dr = DatabaseHelper::ExecuteQuery(query);
					while (dr->Read()){
						// each iteration corresponds to a particular record
						// this is how you can extract a particular column value, for example if the first field was user_id, use GetString(0) (as zero indexing is used) to get the value of userId
						 String^ year = System::Convert::ToString(dr->GetInt32(0));
						 String^ sem = System::Convert::ToString(dr->GetString(1));
						 label4->Text = year+ " "+ sem + " Semester";
					}
					dr->Close();
				}
				catch (Exception^ ex){
					MessageBox::Show(ex->Message);
				}
	}
	private: System::Void Fee_Payment_Dummy_Load(System::Object^  sender, System::EventArgs^  e) {
				 get_current_sem();
				 get_profile(user);
				 textBox1->Text = System::Convert::ToString(stu->userID);
				 textBox2->Text = System::Convert::ToString(stu->Name);
				 textBox3->Text = System::Convert::ToString(stu->Current_semester);
				 get_fee_data(stu);

	}
	private: System::Void label3_Click(System::Object^  sender, System::EventArgs^  e) {
	}
private: System::Void label4_Click(System::Object^  sender, System::EventArgs^  e) {
	}
private: System::Void label5_Click(System::Object^  sender, System::EventArgs^  e) {
	}
private: System::Void label6_Click(System::Object^  sender, System::EventArgs^  e) {
	}
private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
			
}
private: System::Void label2_Click(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
			 try{
				 String^ query = "INSERT INTO [dbo].[Fee_Payment] VALUES (@user_id_fetch, @Amount, @Time, @Semes)";
				 array<SqlParameter^>^ parameters = {
					 gcnew SqlParameter("@user_id_fetch", System::Convert::ToString(user->userID)),
					 gcnew SqlParameter("@Amount", System::Convert::ToString(textBox4->Text)), // Assuming you have a variable named yourAmountVariable holding the amount to insert
					 gcnew SqlParameter("@Time", DateTime::Now), // Inserting current date and time
					 gcnew SqlParameter("@Semes", System::Convert::ToString(stu->Current_semester)) // Assuming you have a variable named yourSemesterVariable holding the semester value
				 };
				 SqlDataReader^ dr = DatabaseHelper::ExecuteQuery(query, parameters);
				 dr->Close();
				 MessageBox::Show("Fees Successfully Paid");
			 }
			 catch (Exception^ ex){
				 MessageBox::Show(ex->Message);
			 }
			 get_fee_data(stu);
}
private: System::Void pictureBox1_Click(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void label13_Click(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void label2_Click_1(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void label3_Click_1(System::Object^  sender, System::EventArgs^  e) {
}
};
}
