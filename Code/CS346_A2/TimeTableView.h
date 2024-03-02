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
	/// Summary for TimeTableView
	/// </summary>
	public ref class TimeTableView : public System::Windows::Forms::Form
	{
	public:
		TimeTableView(User^ User)
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
		~TimeTableView()
		{
			if (components)
			{
				delete components;
			}
		}

	protected:
	private: System::Windows::Forms::ComboBox^  comboBox1;
	private: System::Windows::Forms::ListView^  listView1;
	private: System::Windows::Forms::ColumnHeader^  CourseCode;
	private: System::Windows::Forms::ColumnHeader^  CourseName;
	private: System::Windows::Forms::ColumnHeader^  Slot;

	private: System::Windows::Forms::ColumnHeader^  Time;
	private: System::Windows::Forms::ColumnHeader^  Venue;
	private: System::Windows::Forms::PictureBox^  pictureBox1;
	private: System::Windows::Forms::Label^  label5;

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
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->listView1 = (gcnew System::Windows::Forms::ListView());
			this->CourseCode = (gcnew System::Windows::Forms::ColumnHeader());
			this->CourseName = (gcnew System::Windows::Forms::ColumnHeader());
			this->Slot = (gcnew System::Windows::Forms::ColumnHeader());
			this->Time = (gcnew System::Windows::Forms::ColumnHeader());
			this->Venue = (gcnew System::Windows::Forms::ColumnHeader());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// comboBox1
			// 
			this->comboBox1->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->comboBox1->Font = (gcnew System::Drawing::Font(L"Segoe UI Symbol", 10.2F));
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(5) {
				L"Monday", L"Tuesday", L"Wednesday", L"Thursday",
					L"Friday"
			});
			this->comboBox1->Location = System::Drawing::Point(366, 42);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(319, 31);
			this->comboBox1->TabIndex = 1;
			this->comboBox1->SelectedIndexChanged += gcnew System::EventHandler(this, &TimeTableView::comboBox1_SelectedIndexChanged);
			// 
			// listView1
			// 
			this->listView1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(177)), static_cast<System::Int32>(static_cast<System::Byte>(212)),
				static_cast<System::Int32>(static_cast<System::Byte>(224)));
			this->listView1->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->listView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::ColumnHeader^  >(5) {
				this->CourseCode, this->CourseName,
					this->Slot, this->Time, this->Venue
			});
			this->listView1->Font = (gcnew System::Drawing::Font(L"Segoe UI Symbol", 9));
			this->listView1->Location = System::Drawing::Point(12, 116);
			this->listView1->Name = L"listView1";
			this->listView1->Size = System::Drawing::Size(934, 461);
			this->listView1->TabIndex = 2;
			this->listView1->UseCompatibleStateImageBehavior = false;
			this->listView1->View = System::Windows::Forms::View::Details;
			this->listView1->SelectedIndexChanged += gcnew System::EventHandler(this, &TimeTableView::listView1_SelectedIndexChanged);
			// 
			// CourseCode
			// 
			this->CourseCode->Text = L"Course Code";
			this->CourseCode->Width = 100;
			// 
			// CourseName
			// 
			this->CourseName->Text = L"Course Name";
			this->CourseName->Width = 400;
			// 
			// Slot
			// 
			this->Slot->Text = L"Slot";
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
			// pictureBox1
			// 
			this->pictureBox1->BackColor = System::Drawing::Color::White;
			this->pictureBox1->Location = System::Drawing::Point(191, 27);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(551, 60);
			this->pictureBox1->TabIndex = 3;
			this->pictureBox1->TabStop = false;
			// 
			// label5
			// 
			this->label5->BackColor = System::Drawing::Color::White;
			this->label5->Font = (gcnew System::Drawing::Font(L"Segoe UI Symbol", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(236, 47);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(124, 23);
			this->label5->TabIndex = 10;
			this->label5->Text = L"SELECT DAY";
			// 
			// TimeTableView
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(177)), static_cast<System::Int32>(static_cast<System::Byte>(212)),
				static_cast<System::Int32>(static_cast<System::Byte>(224)));
			this->ClientSize = System::Drawing::Size(958, 578);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->listView1);
			this->Controls->Add(this->comboBox1);
			this->Controls->Add(this->pictureBox1);
			this->Name = L"TimeTableView";
			this->Text = L"TimeTableView";
			this->Load += gcnew System::EventHandler(this, &TimeTableView::TimeTableView_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);

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
						String^ venue = dr->GetString(2) +", "+ dr->GetString(5);

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
	private: System::Void listView1_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
	}
};
}
