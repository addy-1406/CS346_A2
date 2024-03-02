#pragma once
#include "MyForm.h"
#include "Register.h"
#include "User.h"
#include "Welcome_Pic.h"
#include "TimeTable.h"

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


	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::PictureBox^  pictureBox3;
	private: System::Windows::Forms::PictureBox^  pictureBox4;
	private: System::Windows::Forms::PictureBox^  pictureBox5;



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
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->pictureBox3 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox4 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox5 = (gcnew System::Windows::Forms::PictureBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox5))->BeginInit();
			this->SuspendLayout();
			// 
			// panel1
			// 
			this->panel1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->panel1->Location = System::Drawing::Point(293, -1);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(970, 675);
			this->panel1->TabIndex = 0;
			this->panel1->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &Login_Register::panel1_Paint);
			// 
			// pictureBox1
			// 
			this->pictureBox1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(12)), static_cast<System::Int32>(static_cast<System::Byte>(45)),
				static_cast<System::Int32>(static_cast<System::Byte>(72)));
			this->pictureBox1->Location = System::Drawing::Point(0, -1);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(296, 675);
			this->pictureBox1->TabIndex = 1;
			this->pictureBox1->TabStop = false;
			this->pictureBox1->Click += gcnew System::EventHandler(this, &Login_Register::pictureBox1_Click);
			// 
			// pictureBox2
			// 
			this->pictureBox2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(12)), static_cast<System::Int32>(static_cast<System::Byte>(45)),
				static_cast<System::Int32>(static_cast<System::Byte>(72)));
			this->pictureBox2->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox2.BackgroundImage")));
			this->pictureBox2->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->pictureBox2->Location = System::Drawing::Point(71, 30);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(155, 164);
			this->pictureBox2->TabIndex = 2;
			this->pictureBox2->TabStop = false;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(12)), static_cast<System::Int32>(static_cast<System::Byte>(45)),
				static_cast<System::Int32>(static_cast<System::Byte>(72)));
			this->label1->Cursor = System::Windows::Forms::Cursors::Hand;
			this->label1->Font = (gcnew System::Drawing::Font(L"Segoe UI Symbol", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::White;
			this->label1->Location = System::Drawing::Point(112, 261);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(66, 28);
			this->label1->TabIndex = 5;
			this->label1->Text = L"Login";
			this->label1->Click += gcnew System::EventHandler(this, &Login_Register::label1_Click);
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
			this->label2->Location = System::Drawing::Point(112, 312);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(91, 28);
			this->label2->TabIndex = 6;
			this->label2->Text = L"Register";
			this->label2->Click += gcnew System::EventHandler(this, &Login_Register::label2_Click);
			// 
			// pictureBox3
			// 
			this->pictureBox3->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(12)), static_cast<System::Int32>(static_cast<System::Byte>(45)),
				static_cast<System::Int32>(static_cast<System::Byte>(72)));
			this->pictureBox3->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox3.BackgroundImage")));
			this->pictureBox3->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pictureBox3->Cursor = System::Windows::Forms::Cursors::Hand;
			this->pictureBox3->Location = System::Drawing::Point(71, 261);
			this->pictureBox3->Name = L"pictureBox3";
			this->pictureBox3->Size = System::Drawing::Size(35, 31);
			this->pictureBox3->TabIndex = 7;
			this->pictureBox3->TabStop = false;
			this->pictureBox3->Click += gcnew System::EventHandler(this, &Login_Register::pictureBox3_Click);
			// 
			// pictureBox4
			// 
			this->pictureBox4->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(12)), static_cast<System::Int32>(static_cast<System::Byte>(45)),
				static_cast<System::Int32>(static_cast<System::Byte>(72)));
			this->pictureBox4->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox4.BackgroundImage")));
			this->pictureBox4->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pictureBox4->Cursor = System::Windows::Forms::Cursors::Hand;
			this->pictureBox4->Location = System::Drawing::Point(71, 312);
			this->pictureBox4->Name = L"pictureBox4";
			this->pictureBox4->Size = System::Drawing::Size(35, 31);
			this->pictureBox4->TabIndex = 8;
			this->pictureBox4->TabStop = false;
			this->pictureBox4->Click += gcnew System::EventHandler(this, &Login_Register::pictureBox4_Click);
			// 
			// pictureBox5
			// 
			this->pictureBox5->BackColor = System::Drawing::Color::Silver;
			this->pictureBox5->Location = System::Drawing::Point(23, 215);
			this->pictureBox5->Name = L"pictureBox5";
			this->pictureBox5->Size = System::Drawing::Size(245, 2);
			this->pictureBox5->TabIndex = 17;
			this->pictureBox5->TabStop = false;
			// 
			// Login_Register
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::White;
			this->ClientSize = System::Drawing::Size(1262, 673);
			this->Controls->Add(this->pictureBox5);
			this->Controls->Add(this->pictureBox4);
			this->Controls->Add(this->pictureBox3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
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
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox5))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	public: Form^ Global_form;
	public: Panel^ OuterPanel;
	private: System::Void panel1_Paint(System::Object^  sender, System::Windows::Forms::PaintEventArgs^  e) {
				 
	}
private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
		
}
private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
		
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
private: System::Void pictureBox3_Click(System::Object^  sender, System::EventArgs^  e) {
			 MyForm^ lp = gcnew MyForm(OuterPanel, this);
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
private: System::Void label1_Click(System::Object^  sender, System::EventArgs^  e) {
			 MyForm^ lp = gcnew MyForm(OuterPanel, this);
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
private: System::Void label2_Click(System::Object^  sender, System::EventArgs^  e) {
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
private: System::Void pictureBox4_Click(System::Object^  sender, System::EventArgs^  e) {
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
private: System::Void pictureBox5_Click(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void pictureBox1_Click(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void button1_Click_1(System::Object^  sender, System::EventArgs^  e) {

}
};
}
