#pragma once
#include <vector>
#include <string>
#include "User.h"
#include "CourseForm.h"
#include "AddCourseForm.h"
#include "ProfileForm.h"
#include "AddGradeForm.h"
#include "TimeTableView.h"
#include <Windows.h>


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
		FacultyHome(Form^ rootForm, User^ User, Panel^ GlobalPanel)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
			globalForm = rootForm;
			user = User;
			globalPanel = GlobalPanel;
			int userid = user->userID;
			ProfileForm^ profileForm = gcnew ProfileForm(userid);

			// Customize the form's appearance
			profileForm->ControlBox = false; // Hide the control box
			profileForm->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None; // Remove the border

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
	private: System::Windows::Forms::PictureBox^  pictureBox2;
	private: System::Windows::Forms::PictureBox^  pictureBox1;
	private: System::Windows::Forms::PictureBox^  pictureBox3;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Button^  button3;
	private: System::Windows::Forms::Label^  label1;


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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(FacultyHome::typeid));
			this->addButtonCourse = (gcnew System::Windows::Forms::Button());
			this->buttonProfile = (gcnew System::Windows::Forms::Button());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->buttonCourses = (gcnew System::Windows::Forms::Button());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox3 = (gcnew System::Windows::Forms::PictureBox());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->BeginInit();
			this->SuspendLayout();
			// 
			// addButtonCourse
			// 
			this->addButtonCourse->Location = System::Drawing::Point(89, 348);
			this->addButtonCourse->Name = L"addButtonCourse";
			this->addButtonCourse->Size = System::Drawing::Size(132, 52);
			this->addButtonCourse->TabIndex = 1;
			this->addButtonCourse->Text = L"Add Course";
			this->addButtonCourse->UseVisualStyleBackColor = true;
			this->addButtonCourse->Click += gcnew System::EventHandler(this, &FacultyHome::AddCourseButton_Click);
			// 
			// buttonProfile
			// 
			this->buttonProfile->Location = System::Drawing::Point(89, 280);
			this->buttonProfile->Name = L"buttonProfile";
			this->buttonProfile->Size = System::Drawing::Size(132, 52);
			this->buttonProfile->TabIndex = 2;
			this->buttonProfile->Text = L"Profile";
			this->buttonProfile->UseVisualStyleBackColor = true;
			this->buttonProfile->Click += gcnew System::EventHandler(this, &FacultyHome::ProfileButton_Click);
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::Transparent;
			this->panel1->Location = System::Drawing::Point(293, 34);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(970, 640);
			this->panel1->TabIndex = 4;
			this->panel1->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &FacultyHome::panel1_Paint);
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(1141, 4);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(109, 26);
			this->button1->TabIndex = 3;
			this->button1->Text = L"Logout";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &FacultyHome::button1_Click);
			// 
			// buttonCourses
			// 
			this->buttonCourses->Location = System::Drawing::Point(89, 421);
			this->buttonCourses->Name = L"buttonCourses";
			this->buttonCourses->Size = System::Drawing::Size(132, 52);
			this->buttonCourses->TabIndex = 4;
			this->buttonCourses->Text = L"Courses";
			this->buttonCourses->UseVisualStyleBackColor = true;
			this->buttonCourses->Click += gcnew System::EventHandler(this, &FacultyHome::CoursesButton_Click);
			// 
			// pictureBox2
			// 
			this->pictureBox2->BackColor = System::Drawing::Color::DimGray;
			this->pictureBox2->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox2.BackgroundImage")));
			this->pictureBox2->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->pictureBox2->Location = System::Drawing::Point(27, 26);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(239, 224);
			this->pictureBox2->TabIndex = 6;
			this->pictureBox2->TabStop = false;
			// 
			// pictureBox1
			// 
			this->pictureBox1->BackColor = System::Drawing::Color::DimGray;
			this->pictureBox1->Location = System::Drawing::Point(2, -1);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(296, 675);
			this->pictureBox1->TabIndex = 5;
			this->pictureBox1->TabStop = false;
			// 
			// pictureBox3
			// 
			this->pictureBox3->BackColor = System::Drawing::Color::DimGray;
			this->pictureBox3->Location = System::Drawing::Point(293, -1);
			this->pictureBox3->Name = L"pictureBox3";
			this->pictureBox3->Size = System::Drawing::Size(970, 36);
			this->pictureBox3->TabIndex = 7;
			this->pictureBox3->TabStop = false;
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(89, 490);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(132, 52);
			this->button2->TabIndex = 8;
			this->button2->Text = L"Add Grades";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &FacultyHome::button2_Click);

			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(89, 563);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(132, 52);
			this->button3->TabIndex = 9;
			this->button3->Text = L"View TimeTable";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &FacultyHome::Timetable_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->Location = System::Drawing::Point(303, 9);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(46, 17);
			this->label1->TabIndex = 10;
			this->label1->Text = L"label1";
			// 
			// FacultyHome
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::White;
			this->ClientSize = System::Drawing::Size(1262, 673);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->buttonCourses);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->pictureBox2);
			this->Controls->Add(this->addButtonCourse);
			this->Controls->Add(this->buttonProfile);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->pictureBox3);
			this->Name = L"FacultyHome";
			this->Text = L"FacultyHome";
			this->Load += gcnew System::EventHandler(this, &FacultyHome::FacultyHome_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	public: Form^ globalForm;
	public: Panel^ globalPanel;
	public: User^ user;
	
	private: System::Void label1_Click(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void FacultyHome_Load(System::Object^  sender, System::EventArgs^  e) {
				 label1->Text = user->email;
	}
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
				 globalPanel->Controls->Clear();
				 globalPanel->Controls->Add(globalForm);
				 globalForm->Show();
	}
	// Event handler for the AddCourse button
	void AddCourseButton_Click(System::Object^  sender, System::EventArgs^  e) {
		PlaySound(TEXT("..\\MediaFiles\\click-button-140881.wav"), NULL, SND_FILENAME | SND_ASYNC);
		// Create an instance of the AddCourseForm
		AddCourseForm^ addCourseForm = gcnew AddCourseForm(user->userID);

		// Customize the form's appearance
		addCourseForm->ControlBox = false; // Hide the control box
		addCourseForm->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None; // Remove the border
		//addCourseForm->BackColor = System::Drawing::Color::LightSkyBlue; // Set background color to red

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
		PlaySound(TEXT("..\\MediaFiles\\click-button-140881.wav"), NULL, SND_FILENAME | SND_ASYNC);
		// Create an instance of the ProfileForm
		int userid = user->userID;
		ProfileForm^ profileForm = gcnew ProfileForm(userid);

		// Customize the form's appearance
		profileForm->ControlBox = false; // Hide the control box
		profileForm->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None; // Remove the border
		//profileForm->BackColor = System::Drawing::Color::LightSkyBlue; // Set background color to green

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
		PlaySound(TEXT("..\\MediaFiles\\click-button-140881.wav"), NULL, SND_FILENAME | SND_ASYNC);
		// Create an instance of the CourseFor
		int userid = user->userID;
		CourseForm^ courseForm = gcnew CourseForm(userid);

		// Customize the form's appearance
		courseForm->ControlBox = false; // Hide the control box
		courseForm->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None; // Remove the border
		//courseForm->BackColor = System::Drawing::Color::LightSkyBlue; // Set background color to yellow

		// Set its properties
		courseForm->TopLevel = false;
		courseForm->AutoScroll = true;
		courseForm->Dock = DockStyle::Fill;

		// Add it to the panel
		panel1->Controls->Clear();
		panel1->Controls->Add(courseForm);
		courseForm->Show();
	}
	void Timetable_Click(System::Object^  sender, System::EventArgs^  e) {
		PlaySound(TEXT("..\\MediaFiles\\click-button-140881.wav"), NULL, SND_FILENAME | SND_ASYNC);
		// Create an instance of the CourseFor
		
		TimeTableView^ timetable = gcnew TimeTableView(user);

		// Customize the form's appearance
		timetable->ControlBox = false; // Hide the control box
		timetable->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None; // Remove the border
		//courseForm->BackColor = System::Drawing::Color::LightSkyBlue; // Set background color to yellow

		// Set its properties
		timetable->TopLevel = false;
		timetable->AutoScroll = true;
		timetable->Dock = DockStyle::Fill;

		// Add it to the panel
		panel1->Controls->Clear();
		panel1->Controls->Add(timetable);
		timetable->Show();
	}

	void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		PlaySound(TEXT("..\\MediaFiles\\click-button-140881.wav"), NULL, SND_FILENAME | SND_ASYNC);
		int userid = user->userID;
		AddGradeForm^ addGradeForm = gcnew AddGradeForm(userid);
		// Customize the form's appearance
		addGradeForm->ControlBox = false; // Hide the control box
		addGradeForm->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None; // Remove the border
		addGradeForm->TopLevel = false;
		addGradeForm->AutoScroll = true;
		addGradeForm->Dock = DockStyle::Fill;
		// Add the AddGradeForm to the panel
		panel1->Controls->Clear();
		panel1->Controls->Add(addGradeForm);
		addGradeForm->Show();
	}


	private: System::Void panel1_Paint(System::Object^  sender, System::Windows::Forms::PaintEventArgs^  e) {
	}
};
}
