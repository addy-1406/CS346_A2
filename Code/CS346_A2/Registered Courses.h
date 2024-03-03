#pragma once
#include "User.h"
#include "Course_EnrollPage.h"
#include "DatabaseHelper.h"
namespace CS346_A2 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for RegisteredCourses
	/// </summary>
	public ref class RegisteredCourses : public System::Windows::Forms::Form
	{
	public:
		RegisteredCourses(User^ User, Panel^ panel_stu)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
			user = User;
			panel1 = panel_stu;
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~RegisteredCourses()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::ListView^  listView1;

	private: System::Windows::Forms::ColumnHeader^  CourseName;
	private: System::Windows::Forms::ColumnHeader^  L;
	private: System::Windows::Forms::ColumnHeader^  T;
	private: System::Windows::Forms::ColumnHeader^  P;
	private: System::Windows::Forms::ColumnHeader^  C;
	private: System::Windows::Forms::ColumnHeader^  ApprovalStatus;
	private: System::Windows::Forms::ColumnHeader^  Grade;
	private: System::Windows::Forms::ColumnHeader^  Type;
	private: System::Windows::Forms::ColumnHeader^  Semester;
	private: System::Windows::Forms::ColumnHeader^  CourseCode;
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
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->listView1 = (gcnew System::Windows::Forms::ListView());
			this->CourseCode = (gcnew System::Windows::Forms::ColumnHeader());
			this->CourseName = (gcnew System::Windows::Forms::ColumnHeader());
			this->L = (gcnew System::Windows::Forms::ColumnHeader());
			this->T = (gcnew System::Windows::Forms::ColumnHeader());
			this->P = (gcnew System::Windows::Forms::ColumnHeader());
			this->C = (gcnew System::Windows::Forms::ColumnHeader());
			this->Semester = (gcnew System::Windows::Forms::ColumnHeader());
			this->Type = (gcnew System::Windows::Forms::ColumnHeader());
			this->ApprovalStatus = (gcnew System::Windows::Forms::ColumnHeader());
			this->Grade = (gcnew System::Windows::Forms::ColumnHeader());
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(160, 34);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(639, 43);
			this->button1->TabIndex = 0;
			this->button1->Text = L"button1";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &RegisteredCourses::button1_Click);
			// 
			// listView1
			// 
			this->listView1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(177)), static_cast<System::Int32>(static_cast<System::Byte>(212)),
				static_cast<System::Int32>(static_cast<System::Byte>(224)));
			this->listView1->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->listView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::ColumnHeader^  >(10) {
				this->CourseCode, this->CourseName,
					this->L, this->T, this->P, this->C, this->Semester, this->Type, this->ApprovalStatus, this->Grade
			});
			this->listView1->Location = System::Drawing::Point(-3, 120);
			this->listView1->Name = L"listView1";
			this->listView1->Size = System::Drawing::Size(970, 470);
			this->listView1->TabIndex = 1;
			this->listView1->UseCompatibleStateImageBehavior = false;
			this->listView1->View = System::Windows::Forms::View::Details;
			// 
			// CourseCode
			// 
			this->CourseCode->Text = L"Course Code";
			this->CourseCode->Width = 100;
			// 
			// CourseName
			// 
			this->CourseName->Text = L"Course Name";
			this->CourseName->Width = 445;
			// 
			// L
			// 
			this->L->Text = L"L";
			this->L->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->L->Width = 30;
			// 
			// T
			// 
			this->T->Text = L"T";
			this->T->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->T->Width = 30;
			// 
			// P
			// 
			this->P->Text = L"P";
			this->P->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->P->Width = 30;
			// 
			// C
			// 
			this->C->Text = L"C";
			this->C->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->C->Width = 30;
			// 
			// Semester
			// 
			this->Semester->Text = L"Semester";
			this->Semester->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->Semester->Width = 70;
			// 
			// Type
			// 
			this->Type->Text = L"Type";
			this->Type->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// ApprovalStatus
			// 
			this->ApprovalStatus->Text = L"Approval Status";
			this->ApprovalStatus->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->ApprovalStatus->Width = 110;
			// 
			// Grade
			// 
			this->Grade->Text = L"Grade";
			this->Grade->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->Grade->Width = 65;
			// 
			// RegisteredCourses
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(177)), static_cast<System::Int32>(static_cast<System::Byte>(212)),
				static_cast<System::Int32>(static_cast<System::Byte>(224)));
			this->ClientSize = System::Drawing::Size(958, 578);
			this->Controls->Add(this->listView1);
			this->Controls->Add(this->button1);
			this->Name = L"RegisteredCourses";
			this->Text = L"RegisteredCourses";
			this->Load += gcnew System::EventHandler(this, &RegisteredCourses::RegisteredCourses_Load);
			this->ResumeLayout(false);

		}
#pragma endregion
	public:User^ user;
	public:bool reg_status;
	public:Panel^ panel1;
	private: System::Void listView1_DrawColumnHeader(System::Object^ sender, System::Windows::Forms::DrawListViewColumnHeaderEventArgs^ e) {
				 // Define the header background color
				 System::Drawing::Color headerColor = System::Drawing::Color::Blue; // Change this to your desired color

				 // Fill the header background with the specified color
				 e->Graphics->FillRectangle(gcnew System::Drawing::SolidBrush(headerColor), e->Bounds);

				 // Draw the header text
				 e->Graphics->DrawString(e->Header->Text, listView1->Font, System::Drawing::Brushes::White, e->Bounds);
	}
	public:System::Void fill_Registered_table(User^ user)
	{
			   try{
				   String^ query = "SELECT [CourseCode],[Name],[L],[T],[P],[C],[Semester],[Type],[Approval_Status],[Grade] FROM [dbo].[grade],[dbo].[course] where User_ID = @user_ID_fetch and CourseCode = Course_Code";
				   array<SqlParameter^>^ parameters = {
					   gcnew SqlParameter("@user_ID_fetch", System::Convert::ToString(user->userID))
				   };


				   SqlDataReader^ dr = DatabaseHelper::ExecuteQuery(query, parameters);
				   //MessageBox::Show("Retrive success");

				   listView1->Items->Clear();
				   bool col = true;
				   //MessageBox::Show("Retrive success");
				   while (dr->Read()) {
					   String^ courseCode = dr->GetString(0);
					   String^ courseName = dr->GetString(1);
					   int l = dr->GetInt32(2);
					   int t = dr->GetInt32(3);

					   int p = dr->GetInt32(4);

					   int c = dr->GetInt32(5);

					   String^ semester = dr->GetString(6);

					   String^ type = dr->GetString(7);
					   String^ approvalStatus = dr->GetString(8);
					   String^ grade = dr->GetString(9);

					   ListViewItem^ item = gcnew ListViewItem(courseCode->ToString());
					   item->SubItems->Add(courseName->ToString());
					   item->SubItems->Add(l.ToString());
					   item->SubItems->Add(t.ToString());
					   item->SubItems->Add(p.ToString());
					   item->SubItems->Add(c.ToString());
					   item->SubItems->Add(semester->ToString());
					   item->SubItems->Add(type->ToString());
					   item->SubItems->Add(approvalStatus->ToString());
					   item->SubItems->Add(grade->ToString());
					   if (col)
					   {
						   item->BackColor = Color::LightGray;
						   col = false;
					   }
					   else
					   {
						   item->BackColor = Color::White;
						   col = true;
					   }
					   listView1->Items->Add(item);

				   }
			   }
			   catch (Exception^ ex){
				   MessageBox::Show(ex->Message);
			   }
	}
	public: System::Void get_reg_status(User^ user){
				try{
					String^ query = "SELECT top(1) Course_Enroll FROM [dbo].[permissions]";
					array<SqlParameter^>^ parameters = {
					};

					SqlDataReader^ dr = DatabaseHelper::ExecuteQuery(query, parameters);
					while (dr->Read()){
						// each iteration corresponds to a particular record
						// this is how you can extract a particular column value, for example if the first field was user_id, use GetString(0) (as zero indexing is used) to get the value of userId
						bool enrollStatus = dr->GetBoolean(0);
						if (enrollStatus) {
							reg_status = true;
						}
						else {
							reg_status = false;
						}
						break;
					}
					dr->Close();
				}
				catch (Exception^ ex){
					MessageBox::Show(ex->Message);
				}

	}
	private: System::Void RegisteredCourses_Load(System::Object^  sender, System::EventArgs^  e) {
				 get_reg_status(user);
				 if (!reg_status)
				 {
					 button1->Text = "Course Registration is closed";
					 button1->BackColor = Color::Red;
				 }
				 else
				 {
					 button1->Text = "Course Registration is open. Click to view";
					 button1->BackColor = Color::Green;
				 }
				 fill_Registered_table(user);
	}
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
				 if (reg_status == false)
					 return;
				 else {
					 Course_EnrollPage^ lp = gcnew Course_EnrollPage(user);
					 // Customize the form's appearance
					 lp->ControlBox = false; // Hide the control box
					 lp->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None; // Remove the border

					 // Set its properties
					 lp->TopLevel = false;
					 lp->AutoScroll = true;
					 lp->Dock = DockStyle::Fill;

					 // Add it to the panel
					 panel1->Controls->Clear();
					 panel1->Controls->Add(lp);
					 lp->Show();

				 }
	}
	private: System::Void listView1_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
	}
	};
}
