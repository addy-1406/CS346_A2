#pragma once

#include <string>
#include <sstream>
#include "DatabaseHelper.h"

namespace CS346_A2 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace MySql::Data::MySqlClient;

	/// <summary>
	/// Summary for permissions
	/// </summary>
	public ref class permissions : public System::Windows::Forms::Form
	{
	private: System::Windows::Forms::ListView^  listView1;
	public:
		// Public variable to store userid
		int userid;

		// Constructor modified to accept userid as input
		permissions(int _userid)
		{
			InitializeComponent();
			// Initialize userid
			userid = _userid;

			try
			{

				// Prepare the SQL command to fetch data
				String^ query = "SELECT Name, Course_Code FROM [dbo].[course] WHERE Faculty_ID = @user_id";
				array<SqlParameter^>^ parameters = {
					gcnew SqlParameter("@user_id", userid)
				};

				SqlDataReader^ reader = DatabaseHelper::ExecuteQuery(query, parameters);

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
					btn->Click += gcnew System::EventHandler(this, &permissions::Button_Click);

					// Increment Y position for the next button
					y += btn->Height + 10; // Add some vertical spacing between buttons
				}
				// Add a label for visual separation
				Label^ partitionLabel = gcnew Label();
				partitionLabel->AutoSize = false;
				partitionLabel->Size = System::Drawing::Size(2, 520); // Adjust the width as needed
				partitionLabel->Location = Point(103, 0); // Adjust the X position to align with the buttons
				partitionLabel->BackColor = Color::Gray; // Set the color of the partition
				reader->Close();
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
		~permissions()
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
	private: System::Void InitializeComponent() {

				 this->SuspendLayout();
				 // 

				 // permissions
				 // 
				 this->ClientSize = System::Drawing::Size(668, 503);
				 this->Controls->Add(this->listView1);
				 this->Name = L"permissions";
				 this->ResumeLayout(false);
	}

	private:
		// Declare a member variable to store the reference to the textbox for displaying course details
		TextBox^ courseDetailsTextBox;

		// Update the Button_Click event handler
		// Update the Button_Click event handler
		// Update the Button_Click event handler
		// Update the Button_Click event handler
		int course_id;
	private: System::Void Button_Click(System::Object^ sender, System::EventArgs^ e) {
				 // Retrieve the button that was clicked
				 Button^ clickedButton = dynamic_cast<Button^>(sender);
				 if (clickedButton != nullptr) {
					 // Extract the course code from the button text
					 String^ buttonText = clickedButton->Text;
					 String^ courseCode = buttonText->Split('\n')[1]; // Assuming course code is after a newline character

					 try {

						 // Prepare the SQL command to fetch data for the selected course and related grades and student details
						 String^ query = "SELECT c.Course_ID, c.Name AS CourseName, c.Description, c.L, c.T, c.P, c.C, c.Intake, c.Semester, c.ElectiveOrCompulsory, c.Course_Code, g.User_ID, g.Grade, g.Approval_Status, s.Name AS StudentName " +
							 "FROM course c " +
							 "LEFT JOIN [dbo.[grade] g ON c.Course_ID = g.Course_ID " +
							 "LEFT JOIN [dbo].[student] s ON g.User_ID = s.User_ID " +
							 "WHERE c.Course_Code = @courseCode";
						 array<SqlParameter^>^ parameters = {
							 gcnew SqlParameter("@courseCode", courseCode)
						 };

						 SqlDataReader^ reader = DatabaseHelper::ExecuteQuery(query, parameters);

						 // Check if there is data available
						 if (reader->Read()) {
							 // Create a string with the course details
							 String^ courseDetails = "Course Code: " + reader["Course_Code"]->ToString() + "\r\n" +
								 "Course Name: " + reader["CourseName"]->ToString() + "\r\n" +
								 "Course Description: " + reader["Description"]->ToString() + "\r\n" +
								 "L: " + reader["L"]->ToString() + ", T: " + reader["T"]->ToString() +
								 ", P: " + reader["P"]->ToString() + ", C: " + reader["C"]->ToString() + "\r\n" +
								 ", Semester: " + reader["Semester"]->ToString() +
								 ", Intake: " + reader["Intake"]->ToString() + ", ElectiveOrCompulsory: " + reader["ElectiveOrCompulsory"]->ToString();
							 course_id = Convert::ToInt32(reader["Course_ID"]);

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
								 approveButton->Click += gcnew EventHandler(this, &permissions::ApproveButton_Click); // Handle click event
								 Controls->Add(approveButton);

								 Button^ rejectButton = gcnew Button();
								 rejectButton->Text = "Reject";
								 rejectButton->Location = Point(400, 370); // Adjust position as needed
								 rejectButton->Click += gcnew EventHandler(this, &permissions::RejectButton_Click); // Handle click event
								 Controls->Add(rejectButton);
								 reader->Close();
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
									 String^ updateQuery = "UPDATE [dbo].[grade] SET Approval_Status =@newStatus WHERE User_ID = @item '" + item->Text + "' AND Course_ID =@course_id";
									 array<SqlParameter^>^ parameters = {
										 gcnew SqlParameter("@newStatus",newStatus),
										 gcnew SqlParameter("@item", item->Text),
										 gcnew SqlParameter("@course_id", course_id),

									 };

									 SqlDataReader^ reader = DatabaseHelper::ExecuteQuery(updateQuery, parameters);
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
	};
}
