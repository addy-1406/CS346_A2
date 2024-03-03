#pragma once
#include <vector>
#include <string>
#include "User.h"
#include "CourseForm.h"
#include "AddCourseForm.h"
#include "ProfileForm.h"
#include "AddGradeForm.h"
#include "TimeTableView.h"
#include "DatabaseHelper.h"
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
			this->label1->Text = user->email + " | Profile";
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
		// Logout Button
		// AddCourse Button
		// Profile Button







	private: System::Windows::Forms::PictureBox^  pictureBox5;
	private: System::Windows::Forms::PictureBox^  pictureBox4;
	private: System::Windows::Forms::PictureBox^  pictureBox6;
	private: System::Windows::Forms::PictureBox^  pictureBox1;

	private: System::Windows::Forms::PictureBox^  pictureBox9;

	private: System::Windows::Forms::PictureBox^  pictureBox8;

	private: System::Windows::Forms::PictureBox^  pictureBox7;

	private: System::Windows::Forms::PictureBox^  pictureBox2;
	private: System::Windows::Forms::PictureBox^  pictureBox13;

	private: System::Windows::Forms::PictureBox^  pictureBox10;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label7;








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
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->pictureBox5 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox4 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox6 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox7 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox8 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox9 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox13 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox10 = (gcnew System::Windows::Forms::PictureBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox5))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox6))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox7))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox8))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox9))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox13))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox10))->BeginInit();
			this->SuspendLayout();
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::Transparent;
			this->panel1->Location = System::Drawing::Point(293, 49);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(970, 625);
			this->panel1->TabIndex = 4;
			this->panel1->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &FacultyHome::panel1_Paint);
			// 
			// pictureBox5
			// 
			this->pictureBox5->BackColor = System::Drawing::Color::Silver;
			this->pictureBox5->Location = System::Drawing::Point(24, 227);
			this->pictureBox5->Name = L"pictureBox5";
			this->pictureBox5->Size = System::Drawing::Size(245, 2);
			this->pictureBox5->TabIndex = 20;
			this->pictureBox5->TabStop = false;
			this->pictureBox5->Click += gcnew System::EventHandler(this, &FacultyHome::pictureBox5_Click);
			// 
			// pictureBox4
			// 
			this->pictureBox4->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(12)), static_cast<System::Int32>(static_cast<System::Byte>(45)),
				static_cast<System::Int32>(static_cast<System::Byte>(72)));
			this->pictureBox4->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox4.BackgroundImage")));
			this->pictureBox4->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->pictureBox4->Location = System::Drawing::Point(72, 30);
			this->pictureBox4->Name = L"pictureBox4";
			this->pictureBox4->Size = System::Drawing::Size(155, 164);
			this->pictureBox4->TabIndex = 19;
			this->pictureBox4->TabStop = false;
			// 
			// pictureBox6
			// 
			this->pictureBox6->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(12)), static_cast<System::Int32>(static_cast<System::Byte>(45)),
				static_cast<System::Int32>(static_cast<System::Byte>(72)));
			this->pictureBox6->Location = System::Drawing::Point(1, -1);
			this->pictureBox6->Name = L"pictureBox6";
			this->pictureBox6->Size = System::Drawing::Size(296, 675);
			this->pictureBox6->TabIndex = 18;
			this->pictureBox6->TabStop = false;
			// 
			// pictureBox1
			// 
			this->pictureBox1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(12)), static_cast<System::Int32>(static_cast<System::Byte>(45)),
				static_cast<System::Int32>(static_cast<System::Byte>(72)));
			this->pictureBox1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.BackgroundImage")));
			this->pictureBox1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->pictureBox1->Cursor = System::Windows::Forms::Cursors::Hand;
			this->pictureBox1->Location = System::Drawing::Point(47, 240);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(60, 53);
			this->pictureBox1->TabIndex = 9;
			this->pictureBox1->TabStop = false;
			this->pictureBox1->Click += gcnew System::EventHandler(this, &FacultyHome::pictureBox1_Click);
			// 
			// pictureBox2
			// 
			this->pictureBox2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(12)), static_cast<System::Int32>(static_cast<System::Byte>(45)),
				static_cast<System::Int32>(static_cast<System::Byte>(72)));
			this->pictureBox2->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox2.BackgroundImage")));
			this->pictureBox2->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pictureBox2->Cursor = System::Windows::Forms::Cursors::Hand;
			this->pictureBox2->Location = System::Drawing::Point(57, 296);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(35, 31);
			this->pictureBox2->TabIndex = 11;
			this->pictureBox2->TabStop = false;
			this->pictureBox2->Click += gcnew System::EventHandler(this, &FacultyHome::pictureBox2_Click);
			// 
			// pictureBox7
			// 
			this->pictureBox7->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(12)), static_cast<System::Int32>(static_cast<System::Byte>(45)),
				static_cast<System::Int32>(static_cast<System::Byte>(72)));
			this->pictureBox7->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox7.BackgroundImage")));
			this->pictureBox7->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pictureBox7->Cursor = System::Windows::Forms::Cursors::Hand;
			this->pictureBox7->Location = System::Drawing::Point(57, 344);
			this->pictureBox7->Name = L"pictureBox7";
			this->pictureBox7->Size = System::Drawing::Size(35, 31);
			this->pictureBox7->TabIndex = 13;
			this->pictureBox7->TabStop = false;
			this->pictureBox7->Click += gcnew System::EventHandler(this, &FacultyHome::pictureBox7_Click);
			// 
			// pictureBox8
			// 
			this->pictureBox8->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(12)), static_cast<System::Int32>(static_cast<System::Byte>(45)),
				static_cast<System::Int32>(static_cast<System::Byte>(72)));
			this->pictureBox8->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox8.BackgroundImage")));
			this->pictureBox8->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pictureBox8->Cursor = System::Windows::Forms::Cursors::Hand;
			this->pictureBox8->Location = System::Drawing::Point(58, 390);
			this->pictureBox8->Name = L"pictureBox8";
			this->pictureBox8->Size = System::Drawing::Size(35, 31);
			this->pictureBox8->TabIndex = 15;
			this->pictureBox8->TabStop = false;
			this->pictureBox8->Click += gcnew System::EventHandler(this, &FacultyHome::pictureBox8_Click);
			// 
			// pictureBox9
			// 
			this->pictureBox9->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(12)), static_cast<System::Int32>(static_cast<System::Byte>(45)),
				static_cast<System::Int32>(static_cast<System::Byte>(72)));
			this->pictureBox9->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox9.BackgroundImage")));
			this->pictureBox9->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pictureBox9->Cursor = System::Windows::Forms::Cursors::Hand;
			this->pictureBox9->Location = System::Drawing::Point(57, 434);
			this->pictureBox9->Name = L"pictureBox9";
			this->pictureBox9->Size = System::Drawing::Size(35, 31);
			this->pictureBox9->TabIndex = 17;
			this->pictureBox9->TabStop = false;
			// 
			// pictureBox13
			// 
			this->pictureBox13->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(20)), static_cast<System::Int32>(static_cast<System::Byte>(93)),
				static_cast<System::Int32>(static_cast<System::Byte>(160)));
			this->pictureBox13->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox13.BackgroundImage")));
			this->pictureBox13->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pictureBox13->Cursor = System::Windows::Forms::Cursors::Hand;
			this->pictureBox13->Location = System::Drawing::Point(1103, 9);
			this->pictureBox13->Name = L"pictureBox13";
			this->pictureBox13->Size = System::Drawing::Size(35, 31);
			this->pictureBox13->TabIndex = 35;
			this->pictureBox13->TabStop = false;
			// 
			// pictureBox10
			// 
			this->pictureBox10->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(20)), static_cast<System::Int32>(static_cast<System::Byte>(93)),
				static_cast<System::Int32>(static_cast<System::Byte>(160)));
			this->pictureBox10->Location = System::Drawing::Point(293, -1);
			this->pictureBox10->Name = L"pictureBox10";
			this->pictureBox10->Size = System::Drawing::Size(970, 51);
			this->pictureBox10->TabIndex = 32;
			this->pictureBox10->TabStop = false;
			this->pictureBox10->Click += gcnew System::EventHandler(this, &FacultyHome::pictureBox10_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(20)), static_cast<System::Int32>(static_cast<System::Byte>(93)),
				static_cast<System::Int32>(static_cast<System::Byte>(160)));
			this->label1->Font = (gcnew System::Drawing::Font(L"Segoe UI Symbol", 12, System::Drawing::FontStyle::Bold));
			this->label1->ForeColor = System::Drawing::Color::White;
			this->label1->Location = System::Drawing::Point(303, 12);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(117, 28);
			this->label1->TabIndex = 10;
			this->label1->Text = L"mail | form";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(12)), static_cast<System::Int32>(static_cast<System::Byte>(45)),
				static_cast<System::Int32>(static_cast<System::Byte>(72)));
			this->label6->Cursor = System::Windows::Forms::Cursors::Hand;
			this->label6->Font = (gcnew System::Drawing::Font(L"Segoe UI Symbol", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->ForeColor = System::Drawing::Color::White;
			this->label6->Location = System::Drawing::Point(96, 434);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(107, 28);
			this->label6->TabIndex = 40;
			this->label6->Text = L"Timetable";
			this->label6->Click += gcnew System::EventHandler(this, &FacultyHome::label6_Click);
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(12)), static_cast<System::Int32>(static_cast<System::Byte>(45)),
				static_cast<System::Int32>(static_cast<System::Byte>(72)));
			this->label5->Cursor = System::Windows::Forms::Cursors::Hand;
			this->label5->Font = (gcnew System::Drawing::Font(L"Segoe UI Symbol", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->ForeColor = System::Drawing::Color::White;
			this->label5->Location = System::Drawing::Point(97, 390);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(125, 28);
			this->label5->TabIndex = 39;
			this->label5->Text = L"Add Grades";
			this->label5->Click += gcnew System::EventHandler(this, &FacultyHome::label5_Click);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(12)), static_cast<System::Int32>(static_cast<System::Byte>(45)),
				static_cast<System::Int32>(static_cast<System::Byte>(72)));
			this->label4->Cursor = System::Windows::Forms::Cursors::Hand;
			this->label4->Font = (gcnew System::Drawing::Font(L"Segoe UI Symbol", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->ForeColor = System::Drawing::Color::White;
			this->label4->Location = System::Drawing::Point(97, 345);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(138, 28);
			this->label4->TabIndex = 38;
			this->label4->Text = L"View Courses";
			this->label4->Click += gcnew System::EventHandler(this, &FacultyHome::label4_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(12)), static_cast<System::Int32>(static_cast<System::Byte>(45)),
				static_cast<System::Int32>(static_cast<System::Byte>(72)));
			this->label2->Cursor = System::Windows::Forms::Cursors::Hand;
			this->label2->Font = (gcnew System::Drawing::Font(L"Segoe UI Symbol", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::Color::White;
			this->label2->Location = System::Drawing::Point(96, 296);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(133, 28);
			this->label2->TabIndex = 37;
			this->label2->Text = L"Add Courses";
			this->label2->Click += gcnew System::EventHandler(this, &FacultyHome::label2_Click_1);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(12)), static_cast<System::Int32>(static_cast<System::Byte>(45)),
				static_cast<System::Int32>(static_cast<System::Byte>(72)));
			this->label3->Cursor = System::Windows::Forms::Cursors::Hand;
			this->label3->Font = (gcnew System::Drawing::Font(L"Segoe UI Symbol", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->ForeColor = System::Drawing::Color::White;
			this->label3->Location = System::Drawing::Point(96, 250);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(75, 28);
			this->label3->TabIndex = 36;
			this->label3->Text = L"Profile";
			this->label3->Click += gcnew System::EventHandler(this, &FacultyHome::label3_Click);
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(20)), static_cast<System::Int32>(static_cast<System::Byte>(93)),
				static_cast<System::Int32>(static_cast<System::Byte>(160)));
			this->label7->Font = (gcnew System::Drawing::Font(L"Segoe UI Symbol", 12, System::Drawing::FontStyle::Bold));
			this->label7->ForeColor = System::Drawing::Color::White;
			this->label7->Location = System::Drawing::Point(1144, 9);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(81, 28);
			this->label7->TabIndex = 41;
			this->label7->Text = L"Logout";
			this->label7->Click += gcnew System::EventHandler(this, &FacultyHome::label7_Click);
			// 
			// FacultyHome
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::White;
			this->ClientSize = System::Drawing::Size(1262, 673);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->pictureBox13);
			this->Controls->Add(this->pictureBox9);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->pictureBox5);
			this->Controls->Add(this->pictureBox10);
			this->Controls->Add(this->pictureBox8);
			this->Controls->Add(this->pictureBox4);
			this->Controls->Add(this->pictureBox7);
			this->Controls->Add(this->pictureBox2);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->pictureBox6);
			this->Name = L"FacultyHome";
			this->Text = L"FacultyHome";
			this->Load += gcnew System::EventHandler(this, &FacultyHome::FacultyHome_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox5))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox6))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox7))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox8))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox9))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox13))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox10))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	public: Form^ globalForm;
	public: Panel^ globalPanel;
	public: User^ user;


	private: System::Void FacultyHome_Load(System::Object^  sender, System::EventArgs^  e) {
				 label1->Text = user->email + " | Profile";
				 int userID = user->userID;
				 
	}
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
				 globalPanel->Controls->Clear();
				 globalPanel->Controls->Add(globalForm);
				 globalForm->Show();
	}
			 // Event handler for the AddCourse button
			

			 // Event handler for the Profile button
			
	private: System::Void panel1_Paint(System::Object^  sender, System::Windows::Forms::PaintEventArgs^  e) {
	}
	private: System::Void label2_Click(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void pictureBox1_Click(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void pictureBox10_Click(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void label3_Click(System::Object^  sender, System::EventArgs^  e) {
				 PlaySound(TEXT("..\\MediaFiles\\click-button-140881.wav"), NULL, SND_FILENAME | SND_ASYNC);
				 // Create an instance of the ProfileForm
				 int userid = user->userID;
				 ProfileForm^ profileForm = gcnew ProfileForm(userid);
				 this->label1->Text = user->email + " | " + " Profile";
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
	private: System::Void label2_Click_1(System::Object^  sender, System::EventArgs^  e) {
				 PlaySound(TEXT("..\\MediaFiles\\click-button-140881.wav"), NULL, SND_FILENAME | SND_ASYNC);
				 // Create an instance of the AddCourseForm
				 AddCourseForm^ addCourseForm = gcnew AddCourseForm(user->userID);
				 this->label1->Text = user->email + " | " + " Add Course";

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
	private: System::Void label4_Click(System::Object^  sender, System::EventArgs^  e) {
				 PlaySound(TEXT("..\\MediaFiles\\click-button-140881.wav"), NULL, SND_FILENAME | SND_ASYNC);
				 // Create an instance of the CourseFor
				 int userid = user->userID;
				 CourseForm^ courseForm = gcnew CourseForm(userid);
				 this->label1->Text = user->email + " | " + " Courses";
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
	private: System::Void label5_Click(System::Object^  sender, System::EventArgs^  e) {
				 PlaySound(TEXT("..\\MediaFiles\\click-button-140881.wav"), NULL, SND_FILENAME | SND_ASYNC);
				 int userid = user->userID;
				 AddGradeForm^ addGradeForm = gcnew AddGradeForm(userid);
				 // Customize the form's appearance
				 this->label1->Text = user->email + " | " + " Grades";
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
	private: System::Void label6_Click(System::Object^  sender, System::EventArgs^  e) {
				 PlaySound(TEXT("..\\MediaFiles\\click-button-140881.wav"), NULL, SND_FILENAME | SND_ASYNC);
				 // Create an instance of the CourseFor

				 TimeTableView^ timetable = gcnew TimeTableView(user);
				 this->label1->Text = user->email + " | " + " Timetable";
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
	private: System::Void label7_Click(System::Object^  sender, System::EventArgs^  e) {
				 globalPanel->Controls->Clear();
				 globalPanel->Controls->Add(globalForm);
				 globalForm->Show();
	}
	private: System::Void lblName_Click(System::Object^  sender, System::EventArgs^  e) {
	}
private: System::Void pictureBox5_Click(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void pictureBox2_Click(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void pictureBox7_Click(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void pictureBox8_Click(System::Object^  sender, System::EventArgs^  e) {
}
};
}