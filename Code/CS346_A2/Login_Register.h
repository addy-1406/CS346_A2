#pragma once
#include "MyForm.h"
#include "Register.h"
#include "User.h"
#include "Welcome_Pic.h"

namespace CS346_A2 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Login_Register
	/// </summary>
	public ref class Login_Register : public System::Windows::Forms::Form
	{
	public:
		Login_Register(Panel^ GlobalPanel, Form^ global_form)
		{
			InitializeComponent();
			OuterPanel = GlobalPanel;
			Global_form = global_form;
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~Login_Register()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Panel^  panel1;
	private: System::Windows::Forms::PictureBox^  pictureBox1;
	private: System::Windows::Forms::PictureBox^  pictureBox2;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Button^  button2;
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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(Login_Register::typeid));
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			this->SuspendLayout();
			// 
			// panel1
			// 
			this->panel1->Location = System::Drawing::Point(293, -1);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(970, 675);
			this->panel1->TabIndex = 0;
			this->panel1->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &Login_Register::panel1_Paint);
			// 
			// pictureBox1
			// 
			this->pictureBox1->BackColor = System::Drawing::Color::DimGray;
			this->pictureBox1->Location = System::Drawing::Point(0, -1);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(296, 675);
			this->pictureBox1->TabIndex = 1;
			this->pictureBox1->TabStop = false;
			// 
			// pictureBox2
			// 
			this->pictureBox2->BackColor = System::Drawing::Color::DimGray;
			this->pictureBox2->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox2.BackgroundImage")));
			this->pictureBox2->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->pictureBox2->Location = System::Drawing::Point(25, 26);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(239, 224);
			this->pictureBox2->TabIndex = 2;
			this->pictureBox2->TabStop = false;
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::DimGray;
			this->button1->ForeColor = System::Drawing::Color::White;
			this->button1->Location = System::Drawing::Point(25, 309);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(210, 64);
			this->button1->TabIndex = 3;
			this->button1->Text = L"Login";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &Login_Register::button1_Click);
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::DimGray;
			this->button2->ForeColor = System::Drawing::Color::White;
			this->button2->Location = System::Drawing::Point(25, 403);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(210, 70);
			this->button2->TabIndex = 4;
			this->button2->Text = L"Register";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &Login_Register::button2_Click);
			// 
			// Login_Register
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::White;
			this->ClientSize = System::Drawing::Size(1262, 673);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->pictureBox2);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->panel1);
			this->MaximizeBox = false;
			this->MaximumSize = System::Drawing::Size(1280, 720);
			this->MinimizeBox = false;
			this->MinimumSize = System::Drawing::Size(1280, 720);
			this->Name = L"Login_Register";
			this->Text = L"Login_Register";
			this->Load += gcnew System::EventHandler(this, &Login_Register::Login_Register_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	public: Form^ Global_form;
	public: Panel^ OuterPanel;
	private: System::Void panel1_Paint(System::Object^  sender, System::Windows::Forms::PaintEventArgs^  e) {
				 
	}
private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
			 MyForm^ lp = gcnew MyForm(OuterPanel,this);
			 // Customize the form's appearance
			 lp->ControlBox = false; // Hide the control box
			 lp->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None; // Remove the border

			 // Set its properties
			 lp->TopLevel = false;
			 lp->AutoScroll = true;
			 lp->Dock = DockStyle::Fill;

			 // Add it to the panel
			 panel1->Controls->Clear();
			 panel1->Controls->Add(lp);
			 lp->Show();
}
private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
			 Register^ rp = gcnew Register();
			 // Customize the form's appearance
			 rp->ControlBox = false; // Hide the control box
			 rp->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None; // Remove the border

			 // Set its properties
			 rp->TopLevel = false;
			 rp->AutoScroll = true;
			 rp->Dock = DockStyle::Fill;

			 // Add it to the panel
			 panel1->Controls->Clear();
			 panel1->Controls->Add(rp);
			 rp->Show();
}
private: System::Void Login_Register_Load(System::Object^  sender, System::EventArgs^  e) {
			 Welcome_Pic^ wcp = gcnew Welcome_Pic();
			 // Customize the form's appearance
			 wcp->ControlBox = false; // Hide the control box
			 wcp->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None; // Remove the border

			 // Set its properties
			 wcp->TopLevel = false;
			 wcp->AutoScroll = true;
			 wcp->Dock = DockStyle::Fill;

			 // Add it to the panel
			 //panel1->Controls->Clear();
			 panel1->Controls->Add(wcp);
			 wcp->Show();
}
};
}
