#pragma once
#include "Login_Register.h"
#include "StudentHome.h"
#include "FacultyHome.h"
#include "AdminHome.h"



namespace CS346_A2 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Global_Page
	/// </summary>
	public ref class Global_Page : public System::Windows::Forms::Form
	{
	public:
		Global_Page(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			this->MinimizeBox = true;
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~Global_Page()
		{
			if (components)
			{
				delete components;
			}
		}
	public: System::Windows::Forms::Panel^  panel1;
	protected:

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
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->SuspendLayout();
			// 
			// panel1
			// 
			this->panel1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->panel1->BackColor = System::Drawing::Color::White;
			this->panel1->Location = System::Drawing::Point(-4, -1);
			this->panel1->MaximumSize = System::Drawing::Size(1270, 675);
			this->panel1->MinimumSize = System::Drawing::Size(1270, 675);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(1270, 675);
			this->panel1->TabIndex = 0;
			this->panel1->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &Global_Page::panel1_Paint);
			// 
			// Global_Page
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1262, 673);
			this->Controls->Add(this->panel1);
			this->MaximizeBox = false;
			this->MaximumSize = System::Drawing::Size(1280, 720);
			this->MinimizeBox = false;
			this->MinimumSize = System::Drawing::Size(1280, 720);
			this->Name = L"Global_Page";
			this->Text = L"Global_Page";
			this->Load += gcnew System::EventHandler(this, &Global_Page::Global_Page_Load);
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void panel1_Paint(System::Object^  sender, System::Windows::Forms::PaintEventArgs^  e) {
				 
	}
	public: System::Void Login_reg_Load(void) {
				Login_Register^ lrp = gcnew Login_Register(this->panel1,this);
				//Welcome_Pic^ lrp = gcnew Welcome_Pic();
				// Customize the form's appearance
				lrp->ControlBox = false; // Hide the control box
				lrp->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None; // Remove the border

				// Set its properties
				lrp->TopLevel = false;
				lrp->AutoScroll = true;
				lrp->Dock = DockStyle::Fill;

				// Add it to the panel
				//panel1->Controls->Clear();
				panel1->Controls->Add(lrp);
				lrp->Show();
	}
	public: System::Void Global_Page_Load(System::Object^  sender, System::EventArgs^  e) {
				Login_reg_Load();
	}
	
	};
}
