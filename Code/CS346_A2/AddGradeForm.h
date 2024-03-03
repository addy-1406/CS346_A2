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
					btn->AutoSize = false;
					btn->Size = System::Drawing::Size(170, 70);
					btn->BackColor = Color::FromArgb(20, 93, 160); // Set background color to RGB (20, 93, 160)
					btn->ForeColor = Color::White; // Set text color to white
					btn->Font = gcnew System::Drawing::Font("Segoe UI Symbol", 10); // Set the font size to 10
					Controls->Add(btn); // Add the button to the form
					btn->Click += gcnew System::EventHandler(this, &AddGradeForm::Button_Click);
					y += btn->Height + 10;
				}
				Label^ partitionLabel = gcnew Label();
				partitionLabel->AutoSize = false;
				partitionLabel->Size = System::Drawing::Size(2, Math::Max(520, y+10)); // Adjust the width as needed
				partitionLabel->Location = Point(200, 0); // Adjust the X position to align with the buttons
				partitionLabel->BackColor = Color::Gray; // Set the color of the partition
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
							" Semester: " + reader["Semester"]->ToString() +
							", Intake: " + reader["Intake"]->ToString();
						course_id = reader["Course_Code"]->ToString();

						if (courseDetailsTextBox == nullptr) {
							courseDetailsTextBox = gcnew TextBox();
							courseDetailsTextBox->Multiline = true;
							courseDetailsTextBox->ReadOnly = true;
							courseDetailsTextBox->BackColor = Color::FromArgb(20, 93, 160); // Set background color to RGB (20, 93, 160)
							courseDetailsTextBox->ForeColor = Color::White; // Set text color to white

							courseDetailsTextBox->BorderStyle = BorderStyle::None; // Remove border
							courseDetailsTextBox->Text = courseDetails; // Set the text
							// Adjust the size of the text box according to the text content
							SizeF textSize = courseDetailsTextBox->CreateGraphics()->MeasureString(courseDetails, courseDetailsTextBox->Font, courseDetailsTextBox->Width);
							courseDetailsTextBox->Size = System::Drawing::Size(450, 115); // Add some padding
							courseDetailsTextBox->Location = System::Drawing::Point(210, 20); // Set location as needed
							courseDetailsTextBox->Font = gcnew System::Drawing::Font("Segoe UI Symbol", 13); // Set the font size to 14
							Controls->Add(courseDetailsTextBox); // Add the textbox to the form
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
							listViewGrades->Location = Point(210, 160);
							listViewGrades->Size = System::Drawing::Size(450, 200);
							listViewGrades->View = View::Details;
							listViewGrades->FullRowSelect = true;
							listViewGrades->Columns->Add("User ID", 80);
							listViewGrades->Columns->Add("Name", 150);
							listViewGrades->Columns->Add("Grade", 80);
							
							listViewGrades->CheckBoxes = true; // Enable checkboxes

							// Set font and background color
							listViewGrades->Font = gcnew System::Drawing::Font("Segoe UI Symbol", 9);
							listViewGrades->BackColor = System::Drawing::Color::FromArgb(177, 212, 224);

							// Set behavior
							listViewGrades->BorderStyle = System::Windows::Forms::BorderStyle::None;
							listViewGrades->UseCompatibleStateImageBehavior = false;

							do {
								ListViewItem^ item = gcnew ListViewItem(reader["User_ID"]->ToString());
								item->SubItems->Add(reader["StudentName"]->ToString());
								item->SubItems->Add(reader["Grade"]->ToString());
								listViewGrades->Items->Add(item);
							} while (reader->Read());

							Controls->Add(listViewGrades);

							// Add Grade TextBox
							gradeTextBox = gcnew TextBox();
							gradeTextBox->Location = Point(290, 390);
							gradeTextBox->Size = System::Drawing::Size(50, 60);
							gradeTextBox->BackColor = Color::White; 
							gradeTextBox->ForeColor = Color::Black; // Set text color to white
							gradeTextBox->Font = gcnew System::Drawing::Font("Segoe UI Symbol", 12); // Set the font size to 10
							Controls->Add(gradeTextBox);

							Button^ addGradeButton = gcnew Button();
							addGradeButton->Text = "Add Grade";
							addGradeButton->Location = Point(380, 380);
							addGradeButton->Size = System::Drawing::Size(120, 50);
							addGradeButton->BackColor = Color::FromArgb(20, 93, 160); // Set background color to RGB (20, 93, 160)
							addGradeButton->ForeColor = Color::White; // Set text color to white
							addGradeButton->Font = gcnew System::Drawing::Font("Segoe UI Symbol", 10); // Set the font size to 10
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