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
	private: System::Windows::Forms::Label^  label1;
	protected:
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::TextBox^  textBox2;
	private: System::Windows::Forms::TextBox^  textBox3;
	private: System::Windows::Forms::TextBox^  textBox4;
	private: System::Windows::Forms::TextBox^  textBox5;

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
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(398, 45);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(186, 17);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Fee details for the Semester";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(449, 90);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(46, 17);
			this->label2->TabIndex = 1;
			this->label2->Text = L"label2";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(190, 176);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(56, 17);
			this->label3->TabIndex = 2;
			this->label3->Text = L"Roll no.";
			this->label3->Click += gcnew System::EventHandler(this, &Fee_Payment_Dummy::label3_Click);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(189, 228);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(45, 17);
			this->label4->TabIndex = 3;
			this->label4->Text = L"Name";
			this->label4->Click += gcnew System::EventHandler(this, &Fee_Payment_Dummy::label4_Click);
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(189, 285);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(68, 17);
			this->label5->TabIndex = 4;
			this->label5->Text = L"Semester";
			this->label5->Click += gcnew System::EventHandler(this, &Fee_Payment_Dummy::label5_Click);
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(441, 483);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 23);
			this->button1->TabIndex = 5;
			this->button1->Text = L"Pay Fee";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Fee_Payment_Dummy::button1_Click);
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(190, 383);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(98, 17);
			this->label6->TabIndex = 6;
			this->label6->Text = L"Payment Time";
			this->label6->Click += gcnew System::EventHandler(this, &Fee_Payment_Dummy::label6_Click);
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(188, 334);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(56, 17);
			this->label7->TabIndex = 7;
			this->label7->Text = L"Amount";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(359, 171);
			this->textBox1->Name = L"textBox1";
			this->textBox1->ReadOnly = true;
			this->textBox1->Size = System::Drawing::Size(324, 22);
			this->textBox1->TabIndex = 8;
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(359, 225);
			this->textBox2->Name = L"textBox2";
			this->textBox2->ReadOnly = true;
			this->textBox2->Size = System::Drawing::Size(324, 22);
			this->textBox2->TabIndex = 9;
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(359, 285);
			this->textBox3->Name = L"textBox3";
			this->textBox3->ReadOnly = true;
			this->textBox3->Size = System::Drawing::Size(324, 22);
			this->textBox3->TabIndex = 10;
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(359, 334);
			this->textBox4->Name = L"textBox4";
			this->textBox4->ReadOnly = true;
			this->textBox4->Size = System::Drawing::Size(324, 22);
			this->textBox4->TabIndex = 11;
			// 
			// textBox5
			// 
			this->textBox5->Location = System::Drawing::Point(359, 383);
			this->textBox5->Name = L"textBox5";
			this->textBox5->ReadOnly = true;
			this->textBox5->Size = System::Drawing::Size(324, 22);
			this->textBox5->TabIndex = 12;
			// 
			// Fee_Payment_Dummy
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(177)), static_cast<System::Int32>(static_cast<System::Byte>(212)),
				static_cast<System::Int32>(static_cast<System::Byte>(224)));
			this->ClientSize = System::Drawing::Size(958, 578);
			this->Controls->Add(this->textBox5);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Name = L"Fee_Payment_Dummy";
			this->Text = L"Fee_Payment_Dummy";
			this->Load += gcnew System::EventHandler(this, &Fee_Payment_Dummy::Fee_Payment_Dummy_Load);
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
							button1->Hide();
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
						label2->Text = year+ " "+ sem + " Semester";
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
};
}
