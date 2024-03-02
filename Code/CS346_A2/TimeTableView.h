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
	private: System::Windows::Forms::Label^  label1;
	protected:
	private: System::Windows::Forms::ComboBox^  comboBox1;
	private: System::Windows::Forms::ListView^  listView1;
	private: System::Windows::Forms::ColumnHeader^  CourseCode;
	private: System::Windows::Forms::ColumnHeader^  CourseName;
	private: System::Windows::Forms::ColumnHeader^  Slot;

	private: System::Windows::Forms::ColumnHeader^  Time;
	private: System::Windows::Forms::ColumnHeader^  Venue;

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
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->listView1 = (gcnew System::Windows::Forms::ListView());
			this->CourseCode = (gcnew System::Windows::Forms::ColumnHeader());
			this->CourseName = (gcnew System::Windows::Forms::ColumnHeader());
			this->Slot = (gcnew System::Windows::Forms::ColumnHeader());
			this->Time = (gcnew System::Windows::Forms::ColumnHeader());
			this->Venue = (gcnew System::Windows::Forms::ColumnHeader());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(273, 27);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(88, 17);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Select Day : ";
			// 
			// comboBox1
			// 
			this->comboBox1->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(5) {
				L"Monday", L"Tuesday", L"Wednesday", L"Thursday",
					L"Friday"
			});
			this->comboBox1->Location = System::Drawing::Point(367, 24);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(277, 24);
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
			this->listView1->Location = System::Drawing::Point(-6, 116);
			this->listView1->Name = L"listView1";
			this->listView1->Size = System::Drawing::Size(970, 470);
			this->listView1->TabIndex = 2;
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
			// TimeTableView
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(177)), static_cast<System::Int32>(static_cast<System::Byte>(212)),
				static_cast<System::Int32>(static_cast<System::Byte>(224)));
			this->ClientSize = System::Drawing::Size(958, 578);
			this->Controls->Add(this->listView1);
			this->Controls->Add(this->comboBox1);
			this->Controls->Add(this->label1);
			this->Name = L"TimeTableView";
			this->Text = L"TimeTableView";
			this->Load += gcnew System::EventHandler(this, &TimeTableView::TimeTableView_Load);
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
						query = "SELECT * FROM [dbo].[grade],[dbo].[course] where User_ID = @user_ID_fetch and CourseCode = Course_Code";
					}
					else
					{
						query = "SELECT * FROM [dbo].[grade],[dbo].[course] where User_ID = @user_ID_fetch and CourseCode = Course_Code";
					}
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
						String^ slot = dr->GetString(2);

						String^ time = dr->GetString(3);
						String^ venue = dr->GetString(4);

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
				 get_timetable(comboBox1->SelectedValue->ToString(), user);
	}
	};
}
