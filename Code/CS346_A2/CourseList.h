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
	/// Summary for CourseList
	/// </summary>
	public ref class CourseList : public System::Windows::Forms::Form
	{
	public:
		CourseList(void)
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
		~CourseList()
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



	private: System::Windows::Forms::ComboBox^  comboBox1;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::ColumnHeader^  columnHeader1;


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
			this->columnHeader1 = (gcnew System::Windows::Forms::ColumnHeader());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// listView1
			// 
			this->listView1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(177)), static_cast<System::Int32>(static_cast<System::Byte>(212)),
				static_cast<System::Int32>(static_cast<System::Byte>(224)));
			this->listView1->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->listView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::ColumnHeader^  >(3) {
				this->CourseCode, this->CourseName,
					this->columnHeader1
			});
			this->listView1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->listView1->Location = System::Drawing::Point(185, 74);
			this->listView1->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->listView1->Name = L"listView1";
			this->listView1->Size = System::Drawing::Size(532, 470);
			this->listView1->TabIndex = 5;
			this->listView1->UseCompatibleStateImageBehavior = false;
			this->listView1->View = System::Windows::Forms::View::Details;
			// 
			// CourseCode
			// 
			this->CourseCode->Text = L"Course Code";
			this->CourseCode->Width = 130;
			// 
			// CourseName
			// 
			this->CourseName->Text = L"Course Name";
			this->CourseName->Width = 300;
			// 
			// columnHeader1
			// 
			this->columnHeader1->Text = L"Semester";
			this->columnHeader1->Width = 100;
			// 
			// comboBox1
			// 
			this->comboBox1->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(8) { L"1", L"2", L"3", L"4", L"5", L"6", L"7", L"8" });
			this->comboBox1->Location = System::Drawing::Point(367, 32);
			this->comboBox1->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(99, 24);
			this->comboBox1->TabIndex = 4;
			this->comboBox1->SelectedIndexChanged += gcnew System::EventHandler(this, &CourseList::comboBox1_SelectedIndexChanged);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(207, 33);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(148, 20);
			this->label1->TabIndex = 3;
			this->label1->Text = L"Select Semester : ";
			// 
			// CourseList
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(177)), static_cast<System::Int32>(static_cast<System::Byte>(212)),
				static_cast<System::Int32>(static_cast<System::Byte>(224)));
			this->ClientSize = System::Drawing::Size(958, 578);
			this->Controls->Add(this->listView1);
			this->Controls->Add(this->comboBox1);
			this->Controls->Add(this->label1);
			this->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->MaximumSize = System::Drawing::Size(976, 625);
			this->MinimumSize = System::Drawing::Size(976, 625);
			this->Name = L"CourseList";
			this->Text = L"CourseList";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	public: System::Void get_coursetable(String^ sem){

				try{
					String^ query;

					query = "Select Course_Code,Name,Semester from [dbo].[course] where Semester LIKE @semester";
					array<SqlParameter^>^ parameters = {
						gcnew SqlParameter("@semester", "%" + sem + "%"),

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
						String^ semester = dr->GetString(2);

						ListViewItem^ item = gcnew ListViewItem(courseCode->ToString());
						item->SubItems->Add(courseName->ToString());
						item->SubItems->Add(semester->ToString());
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
				 get_coursetable(comboBox1->SelectedItem->ToString());
	}
};
}