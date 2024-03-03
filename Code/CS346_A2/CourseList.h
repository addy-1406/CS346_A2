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
			FillFacultyComboBox();
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
<<<<<<< HEAD
	private: System::Windows::Forms::ColumnHeader^  columnHeader1;
	private: System::Windows::Forms::ColumnHeader^  Faculty;
	private: System::Windows::Forms::ComboBox^  cmbFaculty;
	private: System::Windows::Forms::Button^  btnAssign;
	private: System::Windows::Forms::Label^  label2;
=======

>>>>>>> 4a2f83d79028c76040ebf83d9881ac406b64193b


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
<<<<<<< HEAD
			this->columnHeader1 = (gcnew System::Windows::Forms::ColumnHeader());
			this->Faculty = (gcnew System::Windows::Forms::ColumnHeader());
=======
>>>>>>> 4a2f83d79028c76040ebf83d9881ac406b64193b
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->cmbFaculty = (gcnew System::Windows::Forms::ComboBox());
			this->btnAssign = (gcnew System::Windows::Forms::Button());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// listView1
			// 
			this->listView1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(177)), static_cast<System::Int32>(static_cast<System::Byte>(212)),
				static_cast<System::Int32>(static_cast<System::Byte>(224)));
			this->listView1->BorderStyle = System::Windows::Forms::BorderStyle::None;
<<<<<<< HEAD
			this->listView1->CheckBoxes = true;
			this->listView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::ColumnHeader^  >(4) {
				this->CourseCode, this->CourseName,
					this->columnHeader1, this->Faculty
			});
			this->listView1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->listView1->Location = System::Drawing::Point(211, 85);
			this->listView1->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->listView1->Name = L"listView1";
			this->listView1->Size = System::Drawing::Size(684, 470);
=======
			this->listView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::ColumnHeader^  >(2) { this->CourseCode, this->CourseName });
			this->listView1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->listView1->Location = System::Drawing::Point(158, 60);
			this->listView1->Margin = System::Windows::Forms::Padding(2);
			this->listView1->Name = L"listView1";
			this->listView1->Size = System::Drawing::Size(399, 382);
>>>>>>> 4a2f83d79028c76040ebf83d9881ac406b64193b
			this->listView1->TabIndex = 5;
			this->listView1->UseCompatibleStateImageBehavior = false;
			this->listView1->View = System::Windows::Forms::View::Details;
			// 
			// CourseCode
			// 
			this->CourseCode->Text = L"Course Code";
			this->CourseCode->Width = 110;
			// 
			// CourseName
			// 
			this->CourseName->Text = L"Course Name";
			this->CourseName->Width = 300;
			// 
<<<<<<< HEAD
			// columnHeader1
			// 
			this->columnHeader1->Text = L"Semester";
			this->columnHeader1->Width = 100;
			// 
			// Faculty
			// 
			this->Faculty->Text = L"Faculty";
			this->Faculty->Width = 300;
			// 
=======
>>>>>>> 4a2f83d79028c76040ebf83d9881ac406b64193b
			// comboBox1
			// 
			this->comboBox1->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(8) { L"1", L"2", L"3", L"4", L"5", L"6", L"7", L"8" });
<<<<<<< HEAD
			this->comboBox1->Location = System::Drawing::Point(533, 33);
			this->comboBox1->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
=======
			this->comboBox1->Location = System::Drawing::Point(275, 26);
			this->comboBox1->Margin = System::Windows::Forms::Padding(2);
>>>>>>> 4a2f83d79028c76040ebf83d9881ac406b64193b
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(75, 21);
			this->comboBox1->TabIndex = 4;
			this->comboBox1->SelectedIndexChanged += gcnew System::EventHandler(this, &CourseList::comboBox1_SelectedIndexChanged);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
<<<<<<< HEAD
			this->label1->Location = System::Drawing::Point(336, 37);
=======
			this->label1->Location = System::Drawing::Point(155, 27);
			this->label1->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
>>>>>>> 4a2f83d79028c76040ebf83d9881ac406b64193b
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(116, 16);
			this->label1->TabIndex = 3;
			this->label1->Text = L"Select Semester : ";
			// 
			// cmbFaculty
			// 
			this->cmbFaculty->FormattingEnabled = true;
			this->cmbFaculty->Location = System::Drawing::Point(33, 125);
			this->cmbFaculty->Name = L"cmbFaculty";
			this->cmbFaculty->Size = System::Drawing::Size(138, 24);
			this->cmbFaculty->TabIndex = 6;
			// 
			// btnAssign
			// 
			this->btnAssign->Location = System::Drawing::Point(33, 450);
			this->btnAssign->Name = L"btnAssign";
			this->btnAssign->Size = System::Drawing::Size(118, 57);
			this->btnAssign->TabIndex = 7;
			this->btnAssign->Text = L"btnAssign";
			this->btnAssign->UseVisualStyleBackColor = true;
			this->btnAssign->Click += gcnew System::EventHandler(this, &CourseList::btnAssign_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(73, 85);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(53, 17);
			this->label2->TabIndex = 8;
			this->label2->Text = L"Faculty";
			// 
			// CourseList
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(177)), static_cast<System::Int32>(static_cast<System::Byte>(212)),
				static_cast<System::Int32>(static_cast<System::Byte>(224)));
<<<<<<< HEAD
			this->ClientSize = System::Drawing::Size(958, 578);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->btnAssign);
			this->Controls->Add(this->cmbFaculty);
=======
			this->ClientSize = System::Drawing::Size(720, 476);
>>>>>>> 4a2f83d79028c76040ebf83d9881ac406b64193b
			this->Controls->Add(this->listView1);
			this->Controls->Add(this->comboBox1);
			this->Controls->Add(this->label1);
			this->Margin = System::Windows::Forms::Padding(2);
			this->MaximumSize = System::Drawing::Size(736, 515);
			this->MinimumSize = System::Drawing::Size(736, 515);
			this->Name = L"CourseList";
			this->Text = L"CourseList";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	public: System::Void get_coursetable(String^ sem) {

				try {
					String^ query;

					query = "SELECT c.Course_Code, c.Name AS CourseName, c.Semester, f.Name AS FacultyName "
						"FROM [dbo].[course] c "
						"LEFT JOIN [dbo].[faculty] f ON c.Faculty_ID = f.User_ID "
						"WHERE c.Semester LIKE @semester";

					array<SqlParameter^>^ parameters = {
						gcnew SqlParameter("@semester", "%" + sem + "%"),
					};

					SqlDataReader^ dr = DatabaseHelper::ExecuteQuery(query, parameters);

					listView1->Items->Clear();
					bool col = true;
					while (dr->Read()) {
						String^ courseCode = dr->GetString(0);
						String^ courseName = dr->GetString(1);
<<<<<<< HEAD
						String^ semester = dr->GetString(2);
						String^ facultyName = dr->IsDBNull(3) ? "N/A" : dr->GetString(3);

						ListViewItem^ item = gcnew ListViewItem(courseCode->ToString());
						item->SubItems->Add(courseName->ToString());
						item->SubItems->Add(semester->ToString());
						item->SubItems->Add(facultyName->ToString());

						if (col) {
=======

						ListViewItem^ item = gcnew ListViewItem(courseCode->ToString());
						item->SubItems->Add(courseName->ToString());
						if (col)
						{
>>>>>>> 4a2f83d79028c76040ebf83d9881ac406b64193b
							item->BackColor = Color::LightGray;
							col = false;
						}
						else {
							item->BackColor = Color::White;
							col = true;
						}
						listView1->Items->Add(item);
					}
				}
				catch (Exception^ ex) {
					MessageBox::Show(ex->Message);
				}

	}

	
	private: System::Void comboBox1_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
				 get_coursetable(comboBox1->SelectedItem->ToString());
	}
private: System::Void btnAssign_Click(System::Object^ sender, System::EventArgs^ e) {
			 if (listView1->CheckedItems->Count > 0) {
				 String^ selectedFacultyName = cmbFaculty->SelectedItem->ToString();
				 int userID = 0; // Default value for User_ID

				 if (selectedFacultyName != "N/A") {
					 try {
						 String^ queryGetUserID = "SELECT User_ID FROM [dbo].[faculty] WHERE Name = '" + selectedFacultyName + "'";
						 SqlDataReader^ dr = DatabaseHelper::ExecuteQuery(queryGetUserID);

						 if (dr->Read()) {
							 if (!dr->IsDBNull(0)) {
								 userID = Convert::ToInt32(dr->GetValue(0));
							 }
							 else {
								 // Handle the case where User_ID is NULL
								 MessageBox::Show("Selected faculty not found.");
								 return;
							 }

						 }
						 else {
							 MessageBox::Show("Selected faculty not found.");
							 return;
						 }
					 }
					 catch (Exception^ ex) {
						 MessageBox::Show("Error getting user ID: " + ex->Message);
						 return;
					 }
				 }

				 try {
					 for each (ListViewItem^ item in listView1->CheckedItems) {
						 String^ courseCode = item->SubItems[0]->Text;

						 String^ queryUpdateFaculty;
						 if (selectedFacultyName == "N/A") {
							 queryUpdateFaculty = "UPDATE [dbo].[course] SET Faculty_ID = NULL WHERE Course_Code = '" + courseCode + "'";
						 }
						 else {
							 queryUpdateFaculty = "UPDATE [dbo].[course] SET Faculty_ID = " + userID + " WHERE Course_Code = '" + courseCode + "'";
						 }

						 try {
							 DatabaseHelper::ExecuteQuery(queryUpdateFaculty);
						 }
						 catch (Exception^ ex) {
							 MessageBox::Show("Error updating faculty: " + ex->Message);
						 }
					 }

					 MessageBox::Show("Faculty assigned successfully.");
					 get_coursetable(comboBox1->SelectedItem->ToString()); // Refresh the course list after assigning faculty
				 }
				 catch (Exception^ ex) {
					 MessageBox::Show("Error assigning faculty: " + ex->Message);
				 }
			 }
			 else {
				 MessageBox::Show("Please select at least one course to assign faculty.");
			 }
}





			 public: System::Void FillFacultyComboBox() {
						 try {
							 String^ query = "SELECT Name FROM [dbo].[faculty]";
							 SqlDataReader^ dr = DatabaseHelper::ExecuteQuery(query);

							 cmbFaculty->Items->Clear();
							 cmbFaculty->Items->Add("N/A"); // Add "N/A" as an option
							 while (dr->Read()) {
								 String^ facultyName = dr->GetString(0);
								 cmbFaculty->Items->Add(facultyName);
							 }
						 }
						 catch (Exception^ ex) {
							 MessageBox::Show(ex->Message);
						 }
			 }
};
}
