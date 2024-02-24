#pragma once

#include "DatabaseHelper.h"

namespace CS346_A2 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for permissions
	/// </summary>
	public ref class permissions : public System::Windows::Forms::Form
	{
	public:
		permissions(void)
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
		~permissions()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::ListView^  listView1;
	protected:
	private: System::Windows::Forms::ColumnHeader^  User_id;
	private: System::Windows::Forms::ColumnHeader^  Course_Add;
	private: System::Windows::Forms::ColumnHeader^  Course_Enroll;
	private: System::Windows::Forms::ColumnHeader^  Grades_Add;
	private: System::Windows::Forms::ColumnHeader^  Grades_View;
	private: System::Windows::Forms::ColumnHeader^  Current_Year;
	private: System::Windows::Forms::ColumnHeader^  Current_Sem;
	private: System::Windows::Forms::ColumnHeader^  Midsem_Start_Date;
	private: System::Windows::Forms::ColumnHeader^  Endsem_Start_Date;

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
			this->User_id = (gcnew System::Windows::Forms::ColumnHeader());
			this->Course_Add = (gcnew System::Windows::Forms::ColumnHeader());
			this->Course_Enroll = (gcnew System::Windows::Forms::ColumnHeader());
			this->Grades_Add = (gcnew System::Windows::Forms::ColumnHeader());
			this->Grades_View = (gcnew System::Windows::Forms::ColumnHeader());
			this->Current_Year = (gcnew System::Windows::Forms::ColumnHeader());
			this->Current_Sem = (gcnew System::Windows::Forms::ColumnHeader());
			this->Midsem_Start_Date = (gcnew System::Windows::Forms::ColumnHeader());
			this->Endsem_Start_Date = (gcnew System::Windows::Forms::ColumnHeader());
			this->SuspendLayout();
			// 
			// listView1
			// 
			this->listView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::ColumnHeader^  >(9) {
				this->User_id, this->Course_Add,
					this->Course_Enroll, this->Grades_Add, this->Grades_View, this->Current_Year, this->Current_Sem, this->Midsem_Start_Date, this->Endsem_Start_Date
			});
			this->listView1->Location = System::Drawing::Point(3, 2);
			this->listView1->Name = L"listView1";
			this->listView1->Size = System::Drawing::Size(738, 304);
			this->listView1->TabIndex = 0;
			this->listView1->UseCompatibleStateImageBehavior = false;
			// 
			// permissions
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(742, 549);
			this->Controls->Add(this->listView1);
			this->Name = L"permissions";
			this->Text = L"permissions";
			this->Load += gcnew System::EventHandler(this, &permissions::permissions_Load);
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void permissions_Load(System::Object^  sender, System::EventArgs^  e) {
	}
	};
}
