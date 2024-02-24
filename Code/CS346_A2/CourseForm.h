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

	/// <summary>
	/// Summary for CourseForm
	/// </summary>
	public ref class CourseForm : public System::Windows::Forms::Form
	{
	private: System::Windows::Forms::ListView^  listView1;
	public:
		// Public variable to store userid
		int userid;

		// Constructor modified to accept userid as input
		CourseForm(int _userid)
		{
			InitializeComponent();
			// Initialize userid
			userid = _userid;

			// Connect to the database
			/*String^ constr = "Server=sql6.freemysqlhosting.net;Uid=sql6684530;Pwd=SaH3N2pscd;Database=sql6684530";
			MySqlConnection^ con = gcnew MySqlConnection(constr);
			MySqlCommand^ cmd;*/
			SqlDataReader^ reader;

			try
			{
				// Open the connection
				//con->Open();

				// Prepare the SQL command to fetch data
				String^ query = "SELECT Name, Course_Code FROM course WHERE Faculty_ID = " + userid;
				//cmd = gcnew MySqlCommand(query, con);

				// Execute the command and get the data
				reader = DatabaseHelper::ExecuteQuery(query);

				// Loop through the records and create buttons
				int y = 10; // Initial Y position of buttons
				while (reader->Read())
				{
					// Create a new button
					Button^ btn = gcnew Button();
					btn->Text = reader["Name"]->ToString() + "\n" + reader["Course_Code"]->ToString();
					btn->Location = Point(10, y);
					btn->AutoSize = true;
					Controls->Add(btn); // Add the button to the form

					// Attach click event handler to the button
					btn->Click += gcnew System::EventHandler(this, &CourseForm::Button_Click);

					// Increment Y position for the next button
					y += btn->Height + 10; // Add some vertical spacing between buttons
				}
				// Add a label for visual separation
				Label^ partitionLabel = gcnew Label();
				partitionLabel->AutoSize = false;
				partitionLabel->Size = System::Drawing::Size(2, 520); // Adjust the width as needed
				partitionLabel->Location = Point(103, 0); // Adjust the X position to align with the buttons
				partitionLabel->BackColor = Color::Gray; // Set the color of the partition
				Controls->Add(partitionLabel);
			}
			catch (Exception^ ex)
			{
				// Handle exceptions
				MessageBox::Show(ex->Message);
			}
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~CourseForm()
		{
			if (components)
			{
				delete components;
			}
		}

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

#pragma endregion
	

	private:
		// Declare a member variable to store the reference to the textbox for displaying course details
		TextBox^ courseDetailsTextBox;

		// Update the Button_Click event handler
		// Update the Button_Click event handler
		// Update the Button_Click event handler
		// Update the Button_Click event handler
		String^ course_id;
private: System::Void Button_Click(System::Object^ sender, System::EventArgs^ e) {
			 // Retrieve the button that was clicked
			 Button^ clickedButton = dynamic_cast<Button^>(sender);
			 if (clickedButton != nullptr) {
				 // Extract the course code from the button text
				 String^ buttonText = clickedButton->Text;
				 String^ courseCode = buttonText->Split('\n')[1]; // Assuming course code is after a newline character

				 // Connect to the database
				 SqlDataReader^ reader = nullptr;

				 try {
					 // Open the connection
					 //con->Open();

					 // Prepare the SQL command to fetch data for the selected course and related grades and student details
					 String^ query = "SELECT c.Name AS CourseName, c.Description, c.L, c.T, c.P, c.C, c.Intake, c.Semester, c.Course_Code, g.User_ID, g.Grade, g.Approval_Status, s.Name AS StudentName " +
						 "FROM course c " +
						 "LEFT JOIN grade g ON c.Course_Code = g.CourseCode " +
						 "LEFT JOIN student s ON g.User_ID = s.User_ID " +
						 "WHERE c.Course_Code = '" + courseCode + "'";


					 // Execute the command and get the data
					 reader = DatabaseHelper::ExecuteQuery(query);

					 // Check if there is data available
					 if (reader->Read()) {
						 // Create a string with the course details
						 String^ courseDetails = "Course Code: " + reader["Course_Code"]->ToString() + "\r\n" +
							 "Course Name: " + reader["CourseName"]->ToString() + "\r\n" +
							 "Course Description: " + reader["Description"]->ToString() + "\r\n" +
							 "L: " + reader["L"]->ToString() + ", T: " + reader["T"]->ToString() +
							 ", P: " + reader["P"]->ToString() + ", C: " + reader["C"]->ToString() + "\r\n" +
							 "Semester: " + reader["Semester"]->ToString() +
							 ", Intake: " + reader["Intake"]->ToString();
						 course_id = reader["Course_Code"]->ToString();

						 // Check if the textbox for course details exists
						 if (courseDetailsTextBox == nullptr) {
							 // If the textbox doesn't exist, create a new one
							 courseDetailsTextBox = gcnew TextBox();
							 courseDetailsTextBox->Multiline = true;
							 courseDetailsTextBox->ReadOnly = true;
							 courseDetailsTextBox->BackColor = Color::Gray; // Set background color to gray
							 courseDetailsTextBox->ForeColor = Color::White; // Set text color to white
							 courseDetailsTextBox->BorderStyle = BorderStyle::None; // Remove border
							 courseDetailsTextBox->Text = courseDetails; // Set the text
							 // Adjust the size of the text box according to the text content
							 SizeF textSize = courseDetailsTextBox->CreateGraphics()->MeasureString(courseDetails, courseDetailsTextBox->Font, courseDetailsTextBox->Width);
							 courseDetailsTextBox->Size = System::Drawing::Size(450, 115); // Add some padding
							 courseDetailsTextBox->Location = System::Drawing::Point(160, 20); // Set location as needed
							 courseDetailsTextBox->Font = gcnew System::Drawing::Font("Arial", 12); // Set the font size and style
							 Controls->Add(courseDetailsTextBox); // Add the textbox to the form
						 }


						 // Update the textbox with the course details
						 courseDetailsTextBox->Text = courseDetails;

						 // Remove previous list view if it exists
						 for each (Control^ control in Controls) {
							 if (ListView::typeid == control->GetType()) {
								 Controls->Remove(control);
								 break;
							 }
							 if (Button::typeid == control->GetType() && control->Text == "Approve" || control->Text == "Reject")
							 {
								 Controls->Remove(control);
								 break;
							 }
						 }
						 for each (Control^ control in Controls) {
							 if (Button::typeid == control->GetType() && (control->Text == "Approve" || control->Text == "Reject"))
							 {
								 Controls->Remove(control);
								 break;
							 }
						 }
						 for each (Control^ control in Controls) {
							 if (Button::typeid == control->GetType() && (control->Text == "Approve" || control->Text == "Reject"))
							 {
								 Controls->Remove(control);
								 break;
							 }
						 }

						 // Check if there is grade data available
						 if (reader["User_ID"] != DBNull::Value) {
							 // Create list view for displaying grades
							 ListView^ listViewGrades = gcnew ListView();
							 listViewGrades->Location = Point(160, 160);
							 listViewGrades->Size = System::Drawing::Size(450, 200);
							 listViewGrades->View = View::Details;
							 listViewGrades->FullRowSelect = true;
							 listViewGrades->Columns->Add("User ID", 80);
							 listViewGrades->Columns->Add("Name", 150);
							 listViewGrades->Columns->Add("Grade", 80);
							 listViewGrades->Columns->Add("Approval Status", 100);
							 listViewGrades->CheckBoxes = true; // Enable checkboxes

							 // Add grade details to the list view
							 do {
								 ListViewItem^ item = gcnew ListViewItem(reader["User_ID"]->ToString());
								 item->SubItems->Add(reader["StudentName"]->ToString());
								 item->SubItems->Add(reader["Grade"]->ToString());
								 item->SubItems->Add(reader["Approval_Status"]->ToString());
								 // Check if the approval status is "Pending" and add a checkbox
								 //if (reader["Approval_Status"]->ToString() == "Pending") {
									 item->Checked = false; // Initially unchecked
								// }
								 listViewGrades->Items->Add(item);
							 } while (reader->Read());

							 // Add the list view to the form
							 Controls->Add(listViewGrades);

							 // Add approve button below the list view
							 Button^ approveButton = gcnew Button();
							 approveButton->Text = "Approve";
							 approveButton->Location = Point(280, 370); // Adjust position as needed

							 approveButton->Click += gcnew EventHandler(this, &CourseForm::ApproveButton_Click); // Handle click event
							 Controls->Add(approveButton);

							 Button^ rejectButton = gcnew Button();
							 rejectButton->Text = "Reject";
							 rejectButton->Location = Point(400, 370); // Adjust position as needed
							 rejectButton->Click += gcnew EventHandler(this, &CourseForm::RejectButton_Click); // Handle click event
							 Controls->Add(rejectButton);
						 }
					 }
					 else {
						 // If no data found, just show the course details textbox
						 MessageBox::Show("No data found for the selected course.");
					 }
				 }
				 catch (Exception^ ex) {
					 // Handle exceptions
					 MessageBox::Show(ex->Message);
				 }
				 finally {
					 // Close the reader and the connection
					 if (reader != nullptr) {
						 reader->Close();
					 }
				 }
			 }
}

		 // Event handler for the approve button click
		// Event handler for the Approve button click
		private: System::Void ApproveButton_Click(System::Object^ sender, System::EventArgs^ e) {
					 UpdateApprovalStatus("Approved");
		}

				 // Event handler for the Reject button click
		private: System::Void RejectButton_Click(System::Object^ sender, System::EventArgs^ e) {
					 UpdateApprovalStatus("Pending");
		}

				 // Function to update the approval status in the database
		private: void UpdateApprovalStatus(String^ newStatus) {
					 // Find the list view control
					 for each (Control^ control in Controls) {
						 if (ListView::typeid == control->GetType()) {
							 ListView^ listViewGrades = safe_cast<ListView^>(control);
							 // Iterate through the checked items in the list view
							 for each (ListViewItem^ item in listViewGrades->Items) {
								 // Check if the item is checked and its approval status is "Pending"
								 if (item->Checked) {
									 // Update the approval status to the new status
									 item->SubItems[3]->Text = newStatus;

									 // Update the database with the new approval status for this item
									 try {
										 // Connect to the database
					

										 // Prepare the SQL command to update the Approval_Status
										 String^ updateQuery = "UPDATE grade SET Approval_Status = '" + newStatus + "' WHERE User_ID = '" + item->Text + "' AND CourseCode = '" + course_id + "'";

										 // Execute the command
										 
										 //
										 SqlDataReader^ dr = DatabaseHelper::ExecuteQuery(updateQuery);
									 }
									 catch (Exception^ ex) {
										 // Handle exceptions
										 MessageBox::Show(ex->Message);
									 }
								 }
							 }
							 break;
						 }
					 }
		}




	

private: System::Void InitializeComponent() {
			 this->SuspendLayout();
			 // 
			 // CourseForm
			 // 
			 this->ClientSize = System::Drawing::Size(282, 253);
			 this->Name = L"CourseForm";
			 this->Load += gcnew System::EventHandler(this, &CourseForm::CourseForm_Load);
			 this->ResumeLayout(false);
}

private: System::Void CourseForm_Load(System::Object^  sender, System::EventArgs^  e) {
}
};
}
