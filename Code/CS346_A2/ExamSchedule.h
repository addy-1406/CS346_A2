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
	/// Summary for ExamSchedule
	/// </summary>
	public ref class ExamSchedule : public System::Windows::Forms::Form
	{
	public:
		ExamSchedule(User^ User)
		{
			InitializeComponent();
			user = User;
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~ExamSchedule()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::ListView^  listView1;
	protected:
	private: System::Windows::Forms::ColumnHeader^  CourseCode;
	private: System::Windows::Forms::ColumnHeader^  CourseName;
	private: System::Windows::Forms::ColumnHeader^  Date;
	private: System::Windows::Forms::ColumnHeader^  Time;
	private: System::Windows::Forms::ColumnHeader^  Venue;
	private: System::Windows::Forms::ComboBox^  comboBox1;
	private: System::Windows::Forms::Label^  label1;

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
			this->listView1 = (gcnew System::Windows::Forms::ListView());
			this->CourseCode = (gcnew System::Windows::Forms::ColumnHeader());
			this->CourseName = (gcnew System::Windows::Forms::ColumnHeader());
			this->Date = (gcnew System::Windows::Forms::ColumnHeader());
			this->Time = (gcnew System::Windows::Forms::ColumnHeader());
			this->Venue = (gcnew System::Windows::Forms::ColumnHeader());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// listView1
			// 
			this->listView1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(177)), static_cast<System::Int32>(static_cast<System::Byte>(212)),
				static_cast<System::Int32>(static_cast<System::Byte>(224)));
			this->listView1->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->listView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::ColumnHeader^  >(5) {
				this->CourseCode, this->CourseName,
					this->Date, this->Time, this->Venue
			});
			this->listView1->Location = System::Drawing::Point(-6, 100);
			this->listView1->Name = L"listView1";
			this->listView1->Size = System::Drawing::Size(970, 470);
			this->listView1->TabIndex = 5;
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
			this->CourseName->Width = 452;
			// 
			// Date
			// 
			this->Date->Text = L"Date";
			// 
			// Time
			// 
			this->Time->Text = L"Time";
			this->Time->Width = 140;
			// 
			// Venue
			// 
			this->Venue->Text = L"Venue";
			this->Venue->Width = 225;
			// 
			// comboBox1
			// 
			this->comboBox1->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"Mid-Semester Exams", L"End-Semester Exams" });
			this->comboBox1->Location = System::Drawing::Point(367, 8);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(277, 24);
			this->comboBox1->TabIndex = 4;
			this->comboBox1->SelectedIndexChanged += gcnew System::EventHandler(this, &ExamSchedule::comboBox1_SelectedIndexChanged);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(273, 11);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(97, 17);
			this->label1->TabIndex = 3;
			this->label1->Text = L"Select Exam : ";
			// 
			// ExamSchedule
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(177)), static_cast<System::Int32>(static_cast<System::Byte>(212)),
				static_cast<System::Int32>(static_cast<System::Byte>(224)));
			this->ClientSize = System::Drawing::Size(958, 578);
			this->Controls->Add(this->listView1);
			this->Controls->Add(this->comboBox1);
			this->Controls->Add(this->label1);
			this->MaximumSize = System::Drawing::Size(976, 625);
			this->MinimumSize = System::Drawing::Size(976, 625);
			this->Name = L"ExamSchedule";
			this->Text = L"ExamSchedule";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	public: User^ user;
	public: System::Void get_timetable(String^ day, User^ user){

				try{
					String^ query;
					if (user->userType == "Faculty")
					{
						query = "select Course_ID,Name,timetable.Room_ID,timetable.Slot,time_slot,Room_type from course INNER JOIN ((timetable INNER JOIN Lecture_Slots ON timetable.Slot = Lecture_Slots.slot) INNER JOIN classroom ON classroom.Room_ID = timetable.Room_ID) ON Course_Code = Course_ID where Course_ID in (select Course_Code from course where  Faculty_ID = @user_ID_fetch) and weekday = @day";
					}
					else
					{
						query = "select Course_ID,Name,timetable.Room_ID,timetable.Slot,time_slot,Room_type from course INNER JOIN ((timetable INNER JOIN Lecture_Slots ON timetable.Slot = Lecture_Slots.slot) INNER JOIN classroom ON classroom.Room_ID = timetable.Room_ID) ON Course_Code = Course_ID where Course_ID in (select CourseCode from grade where User_ID = @user_ID_fetch) and weekday = @day";
					}
					array<SqlParameter^>^ parameters = {
						gcnew SqlParameter("@user_ID_fetch", System::Convert::ToString(user->userID)),
						gcnew SqlParameter("@day", day)

					};
					//MessageBox::Show(query);


					SqlDataReader^ dr = DatabaseHelper::ExecuteQuery(query, parameters);
					//MessageBox::Show("Retrive success");

					listView1->Items->Clear();
					bool col = true;
					//MessageBox::Show("Retrive success");
					while (dr->Read()) {
						String^ courseCode = dr->GetString(0);
						String^ courseName = dr->GetString(1);
						String^ slot = dr->GetString(3);

						String^ time = dr->GetString(4);
						String^ venue = dr->GetString(2) + ", " + dr->GetString(5);

						ListViewItem^ item = gcnew ListViewItem(courseCode->ToString());
						item->SubItems->Add(courseName->ToString());
						item->SubItems->Add(slot->ToString());
						item->SubItems->Add(time->ToString());
						item->SubItems->Add(venue->ToString());
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
	private: System::Void TimeTableView_Load(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void comboBox1_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
				 //MessageBox::Show(comboBox1->SelectedItem->ToString());
				 get_timetable(comboBox1->SelectedItem->ToString(), user);
	}
};
}
