#pragma once
#include "User.h"

namespace CS346_A2 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Course_EnrollPage
	/// </summary>
	public ref class Course_EnrollPage : public System::Windows::Forms::Form
	{
	public:
		Course_EnrollPage(User^ User)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
			user = User;
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~Course_EnrollPage()
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
		void InitializeComponent(void)
		{
			this->SuspendLayout();
			// 
			// Course_EnrollPage
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(958, 578);
			this->Name = L"Course_EnrollPage";
			this->Text = L"Course_EnrollPage";
			this->Load += gcnew System::EventHandler(this, &Course_EnrollPage::Course_EnrollPage_Load);
			this->ResumeLayout(false);

		}
#pragma endregion
	public:User^ user;
	private: System::Void Course_EnrollPage_Load(System::Object^  sender, System::EventArgs^  e) {
	}
	};
}
