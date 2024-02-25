#pragma once
#include "DatabaseHelper.h"
#include <string>
#include <sstream>
namespace CS346_A2 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace MySql::Data::MySqlClient;

	public ref class AddGradeForm : public System::Windows::Forms::Form
	{
	private:
		System::Windows::Forms::ListView^  listView1;
		TextBox^ courseDetailsTextBox;
		TextBox^ gradeTextBox;
		String^ course_id;

	public:
		int userid;

		AddGradeForm(int _userid)
		{
			InitializeComponent();
			userid = _userid;

			SqlDataReader^ reader;
			try
			{
				String^ query = "SELECT Name, Course_Code FROM course WHERE Faculty_ID = " + userid;
				reader = DatabaseHelper::ExecuteQuery(query);

				int y = 10;
				while (reader->Read())
				{
					Button^ btn = gcnew Button();
					btn->Text = reader["Name"]->ToString() + "\n" + reader["Course_Code"]->ToString();
					btn->Location = Point(10, y);
					btn->AutoSize = true;
					Controls->Add(btn);
					btn->Click += gcnew System::EventHandler(this, &AddGradeForm::Button_Click);
					y += btn->Height + 10;
				}
				Label^ partitionLabel = gcnew Label();
				partitionLabel->AutoSize = false;
				partitionLabel->Size = System::Drawing::Size(2, 520);
				partitionLabel->Location = Point(103, 0);
				partitionLabel->BackColor = Color::Gray;
				Controls->Add(partitionLabel);
			}
			catch (Exception^ ex)
			{
				MessageBox::Show(ex->Message);
			}
		}

	protected:
		~AddGradeForm()
		{
			if (components)
			{
				delete components;
			}
		}

	private:
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		void InitializeComponent(void)
		{
			this->components = gcnew System::ComponentModel::Container();
			this->Size = System::Drawing::Size(668, 503);
			this->Text = L"AddGradeForm";
			this->Padding = System::Windows::Forms::Padding(0);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
		}
#pragma endregion

	private:
		void Button_Click(System::Object^ sender, System::EventArgs^ e) {
			Button^ clickedButton = dynamic_cast<Button^>(sender);
			if (clickedButton != nullptr) {
				String^ buttonText = clickedButton->Text;
				String^ courseCode = buttonText->Split('\n')[1];

				SqlDataReader^ reader = nullptr;

				try {
					String^ query = "SELECT c.Course_Code, c.Name AS CourseName, c.Description, c.L, c.T, c.P, c.C, c.Intake, c.Semester, c.Course_Code, g.User_ID, g.Grade, g.Approval_Status, s.Name AS StudentName " +
						"FROM course c " +
						"LEFT JOIN grade g ON c.Course_Code = g.CourseCode " +
						"LEFT JOIN student s ON g.User_ID = s.User_ID " +
						"WHERE c.Course_Code = '" + courseCode + "' AND g.Approval_Status = 'Approved'";

					reader = DatabaseHelper::ExecuteQuery(query);

					if (reader->Read()) {
						String^ courseDetails = "Course Code: " + reader["Course_Code"]->ToString() + "\r\n" +
							"Course Name: " + reader["CourseName"]->ToString() + "\r\n" +
							"Course Description: " + reader["Description"]->ToString() + "\r\n" +
							"L: " + reader["L"]->ToString() + ", T: " + reader["T"]->ToString() +
							", P: " + reader["P"]->ToString() + ", C: " + reader["C"]->ToString() + "\r\n" +
							", Semester: " + reader["Semester"]->ToString() +
							", Intake: " + reader["Intake"]->ToString();
						course_id = reader["Course_Code"]->ToString();

						if (courseDetailsTextBox == nullptr) {
							courseDetailsTextBox = gcnew TextBox();
							courseDetailsTextBox->Multiline = true;
							courseDetailsTextBox->ReadOnly = true;
							courseDetailsTextBox->BackColor = Color::Gray;
							courseDetailsTextBox->ForeColor = Color::White;
							courseDetailsTextBox->BorderStyle = BorderStyle::None;
							courseDetailsTextBox->Text = courseDetails;
							SizeF textSize = courseDetailsTextBox->CreateGraphics()->MeasureString(courseDetails, courseDetailsTextBox->Font, courseDetailsTextBox->Width);
							courseDetailsTextBox->Size = System::Drawing::Size(450, 115);
							courseDetailsTextBox->Location = System::Drawing::Point(160, 20);
							courseDetailsTextBox->Font = gcnew System::Drawing::Font("Arial", 12);
							Controls->Add(courseDetailsTextBox);
						}

						courseDetailsTextBox->Text = courseDetails;

						for each (Control^ control in Controls) {
							if (ListView::typeid == control->GetType()) {
								Controls->Remove(control);
								break;
							}
						}

						if (reader["User_ID"] != DBNull::Value) {
							ListView^ listViewGrades = gcnew ListView();
							listViewGrades->Location = Point(160, 160);
							listViewGrades->Size = System::Drawing::Size(450, 200);
							listViewGrades->View = View::Details;
							listViewGrades->FullRowSelect = true;
							listViewGrades->CheckBoxes = true; // Add checkboxes
							listViewGrades->Columns->Add("User ID", 80);
							listViewGrades->Columns->Add("Name", 150);
							listViewGrades->Columns->Add("Grade", 80);

							do {
								ListViewItem^ item = gcnew ListViewItem(reader["User_ID"]->ToString());
								item->SubItems->Add(reader["StudentName"]->ToString());
								item->SubItems->Add(reader["Grade"]->ToString());
								listViewGrades->Items->Add(item);
							} while (reader->Read());

							Controls->Add(listViewGrades);

							// Add Grade TextBox
							gradeTextBox = gcnew TextBox();
							gradeTextBox->Location = Point(160, 370);
							gradeTextBox->Size = System::Drawing::Size(100, 20);
							Controls->Add(gradeTextBox);

							Button^ addGradeButton = gcnew Button();
							addGradeButton->Text = "Add Grade";
							addGradeButton->Location = Point(280, 370);
							addGradeButton->Click += gcnew EventHandler(this, &AddGradeForm::AddGradeButton_Click);
							Controls->Add(addGradeButton);
						}
					}
					else {
						MessageBox::Show("No data found for the selected course.");
					}
				}
				catch (Exception^ ex) {
					MessageBox::Show(ex->Message);
				}
				finally {
					if (reader != nullptr) {
						reader->Close();
					}

				}
			}
		}

		// Event handler for the Add Grade button click
		void AddGradeButton_Click(System::Object^ sender, System::EventArgs^ e) {
			// Define valid grades
			array<String^>^ validGrades = { "AS", "AA", "AB", "BB", "BC", "CC", "CD", "DD", "DE", "EE", "FD", "FA", "EF", "FF" };
			bool gradeUpdated = false;

			for each (Control^ control in Controls) {
				if (ListView::typeid == control->GetType()) {
					ListView^ listViewGrades = safe_cast<ListView^>(control);
					// Iterate through the checked items in the list view
					for each (ListViewItem^ item in listViewGrades->Items) {
						// Check if the item is checked
						if (item->Checked) {
							// Get the user ID and new grade from the TextBox
							String^ userId = item->Text;
							String^ newGrade = gradeTextBox->Text;

							// Reset the flag before checking for valid grades
							gradeUpdated = false;

							// Validate the grade
							bool isValidGrade = false;
							for each (String^ validGrade in validGrades) {
								if (newGrade == validGrade) {
									isValidGrade = true;
									break;
								}
							}

							// If grade is valid, proceed with updating the grade
							if (isValidGrade) {
								try {
									// Prepare the SQL command to update the grade
									String^ updateQuery = "UPDATE grade SET Grade = '" + newGrade + "' WHERE User_ID = '" + userId + "' AND CourseCode = '" + course_id + "'";

									// Execute the command
									DatabaseHelper::ExecuteQuery(updateQuery);

									// Optionally, you can update the ListView item immediately to reflect the change
									item->SubItems[2]->Text = newGrade;

									// Set the flag to indicate that at least one grade was updated successfully
									gradeUpdated = true;
								}
								catch (Exception^ ex) {
									// Handle exceptions
									MessageBox::Show(ex->Message);
								}
							}
							else {
								// If grade is invalid, show a message box
								MessageBox::Show("Invalid grade. Please enter a valid grade (AS, AA, AB, BB, BC, CC, CD, DD, DE, EE, FD, FA, EF, or FF).");
							}
							item->Checked = false;
						}
					}
					break;
				}
			}

			// If at least one grade was updated successfully, show the success message
			if (gradeUpdated) {
				MessageBox::Show("Grade updated successfully.");
			}
		}
	};
}