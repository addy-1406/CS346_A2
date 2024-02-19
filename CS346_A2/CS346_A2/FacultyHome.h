#pragma once
#include <vector>
#include <string>
#include "User.h"
#include "CourseForm.h"
#include "AddCourseForm.h"
#include "ProfileForm.h"

namespace CS346_A2 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for FacultyHome
	/// </summary>
	
	
	
	public ref class FacultyHome : public System::Windows::Forms::Form
	{
	public:
		FacultyHome(Form^ rootForm, User^ user)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
			globalForm = rootForm;
			user1 = user;
			int userid = user1->userID;
			ProfileForm^ profileForm = gcnew ProfileForm(userid);

			// Customize the form's appearance
			profileForm->ControlBox = false; // Hide the control box
			profileForm->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None; // Remove the border
			profileForm->BackColor = System::Drawing::Color::LightSkyBlue; // Set background color to green

			// Set its properties
			profileForm->TopLevel = false;
			profileForm->AutoScroll = true;
			profileForm->Dock = DockStyle::Fill;

			// Add it to the panel
			panel1->Controls->Clear();
			panel1->Controls->Add(profileForm);
			profileForm->Show();


		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~FacultyHome()
		{
			if (components)
			{
				delete components;
			}
		}
	private:
		System::Windows::Forms::Panel^ panel1;
		System::Windows::Forms::Button^ button1; // Logout Button
		System::Windows::Forms::Button^ addButtonCourse; // AddCourse Button
		System::Windows::Forms::Button^ buttonProfile; // Profile Button
		System::Windows::Forms::Button^ buttonCourses;
		User^ user1;


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
			this->addButtonCourse = (gcnew System::Windows::Forms::Button());
			this->buttonProfile = (gcnew System::Windows::Forms::Button());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->buttonCourses = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// addButtonCourse
			// 
			this->addButtonCourse->Location = System::Drawing::Point(38, 188);
			this->addButtonCourse->Name = L"addButtonCourse";
			this->addButtonCourse->Size = System::Drawing::Size(132, 52);
			this->addButtonCourse->TabIndex = 1;
			this->addButtonCourse->Text = L"Add Course";
			this->addButtonCourse->UseVisualStyleBackColor = true;
			this->addButtonCourse->Click += gcnew System::EventHandler(this, &FacultyHome::AddCourseButton_Click);
			// 
			// buttonProfile
			// 
			this->buttonProfile->Location = System::Drawing::Point(38, 69);
			this->buttonProfile->Name = L"buttonProfile";
			this->buttonProfile->Size = System::Drawing::Size(132, 52);
			this->buttonProfile->TabIndex = 2;
			this->buttonProfile->Text = L"Profile";
			this->buttonProfile->UseVisualStyleBackColor = true;
			this->buttonProfile->Click += gcnew System::EventHandler(this, &FacultyHome::ProfileButton_Click);
			// 
			// panel1
			// 
			this->panel1->Location = System::Drawing::Point(241, -2);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(833, 563);
			this->panel1->TabIndex = 4;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(38, 449);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(132, 52);
			this->button1->TabIndex = 3;
			this->button1->Text = L"Logout";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &FacultyHome::button1_Click);
			// 
			// buttonCourses
			// 
			this->buttonCourses->Location = System::Drawing::Point(38, 320);
			this->buttonCourses->Name = L"buttonCourses";
			this->buttonCourses->Size = System::Drawing::Size(132, 52);
			this->buttonCourses->TabIndex = 4;
			this->buttonCourses->Text = L"Courses";
			this->buttonCourses->UseVisualStyleBackColor = true;
			this->buttonCourses->Click += gcnew System::EventHandler(this, &FacultyHome::CoursesButton_Click);
			// 
			// FacultyHome
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::AntiqueWhite;
			this->ClientSize = System::Drawing::Size(1074, 557);
			this->Controls->Add(this->buttonCourses);
			this->Controls->Add(this->addButtonCourse);
			this->Controls->Add(this->buttonProfile);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->button1);
			this->Name = L"FacultyHome";
			this->Text = L"FacultyHome";
			this->Load += gcnew System::EventHandler(this, &FacultyHome::FacultyHome_Load);
			this->ResumeLayout(false);

		}
#pragma endregion
	public: Form^ globalForm;
	
	private: System::Void label1_Click(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void FacultyHome_Load(System::Object^  sender, System::EventArgs^  e) {
				 
	}
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
				 // Close the current form
				 this->Close();

				 // Open the globalForm
				 globalForm->Show();
	}
	// Event handler for the AddCourse button
	void AddCourseButton_Click(System::Object^  sender, System::EventArgs^  e) {
		// Create an instance of the AddCourseForm
		AddCourseForm^ addCourseForm = gcnew AddCourseForm(user1->userID);

		// Customize the form's appearance
		addCourseForm->ControlBox = false; // Hide the control box
		addCourseForm->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None; // Remove the border
		addCourseForm->BackColor = System::Drawing::Color::LightSkyBlue; // Set background color to red

		// Set its properties
		addCourseForm->TopLevel = false;
		addCourseForm->AutoScroll = true;
		addCourseForm->Dock = DockStyle::Fill;

		// Add it to the panel
		panel1->Controls->Clear();
		panel1->Controls->Add(addCourseForm);
		addCourseForm->Show();
	}

	// Event handler for the Profile button
	void ProfileButton_Click(System::Object^  sender, System::EventArgs^  e) {
		// Create an instance of the ProfileForm
		int userid = user1->userID;
		ProfileForm^ profileForm = gcnew ProfileForm(userid);

		// Customize the form's appearance
		profileForm->ControlBox = false; // Hide the control box
		profileForm->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None; // Remove the border
		profileForm->BackColor = System::Drawing::Color::LightSkyBlue; // Set background color to green

		// Set its properties
		profileForm->TopLevel = false;
		profileForm->AutoScroll = true;
		profileForm->Dock = DockStyle::Fill;

		// Add it to the panel
		panel1->Controls->Clear();
		panel1->Controls->Add(profileForm);
		profileForm->Show();
	}
	// Event handler for the Courses button
	void CoursesButton_Click(System::Object^  sender, System::EventArgs^  e) {
		// Create an instance of the CourseFor
		int userid = user1->userID;
		CourseForm^ courseForm = gcnew CourseForm(userid);

		// Customize the form's appearance
		courseForm->ControlBox = false; // Hide the control box
		courseForm->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None; // Remove the border
		courseForm->BackColor = System::Drawing::Color::LightSkyBlue; // Set background color to yellow

		// Set its properties
		courseForm->TopLevel = false;
		courseForm->AutoScroll = true;
		courseForm->Dock = DockStyle::Fill;

		// Add it to the panel
		panel1->Controls->Clear();
		panel1->Controls->Add(courseForm);
		courseForm->Show();
	}


	};
}
