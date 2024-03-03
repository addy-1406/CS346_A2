#pragma once

namespace CS346_A2 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace MySql::Data::MySqlClient;

	/// <summary>
	/// Summary for Register
	/// </summary>
	public ref class Register : public System::Windows::Forms::Form
	{
	public:
		Register()
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
		~Register()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^  label1;
	protected:
	private: System::Windows::Forms::TextBox^  textBox1;


	private: System::Windows::Forms::TextBox^  textBox3;

	private: System::Windows::Forms::TextBox^  textBox4;



	private: System::Windows::Forms::TextBox^  textBox6;

	private: System::Windows::Forms::TextBox^  textBox7;

	private: System::Windows::Forms::DateTimePicker^  dateTimePicker1;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::ComboBox^  comboBox1;
	private: System::Windows::Forms::PictureBox^  pictureBox1;

	private: System::Windows::Forms::Label^  label8;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label9;
	private: System::Windows::Forms::Label^  label10;
	private: System::Windows::Forms::Label^  label11;
	private: System::Windows::Forms::Label^  label12;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Label^  label3;

	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::TextBox^  textBox2;
	private: System::Windows::Forms::Label^  label6;

	private: System::Windows::Forms::Label^  label13;



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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(Register::typeid));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->textBox7 = (gcnew System::Windows::Forms::TextBox());
			this->dateTimePicker1 = (gcnew System::Windows::Forms::DateTimePicker());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label13 = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::White;
			this->label1->Font = (gcnew System::Drawing::Font(L"Segoe UI Symbol", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::SystemColors::ControlText;
			this->label1->Location = System::Drawing::Point(47, 82);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(49, 20);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Name";
			// 
			// textBox1
			// 
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Segoe UI Symbol", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox1->Location = System::Drawing::Point(51, 105);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(363, 30);
			this->textBox1->TabIndex = 1;
			// 
			// textBox3
			// 
			this->textBox3->Font = (gcnew System::Drawing::Font(L"Segoe UI Symbol", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox3->Location = System::Drawing::Point(51, 251);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(363, 30);
			this->textBox3->TabIndex = 5;
			// 
			// textBox4
			// 
			this->textBox4->Font = (gcnew System::Drawing::Font(L"Segoe UI Symbol", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox4->Location = System::Drawing::Point(51, 469);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(363, 30);
			this->textBox4->TabIndex = 7;
			// 
			// textBox6
			// 
			this->textBox6->Font = (gcnew System::Drawing::Font(L"Segoe UI Symbol", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox6->Location = System::Drawing::Point(51, 537);
			this->textBox6->Name = L"textBox6";
			this->textBox6->PasswordChar = '*';
			this->textBox6->Size = System::Drawing::Size(363, 30);
			this->textBox6->TabIndex = 11;
			// 
			// textBox7
			// 
			this->textBox7->Font = (gcnew System::Drawing::Font(L"Segoe UI Symbol", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox7->Location = System::Drawing::Point(51, 323);
			this->textBox7->Multiline = true;
			this->textBox7->Name = L"textBox7";
			this->textBox7->Size = System::Drawing::Size(363, 32);
			this->textBox7->TabIndex = 13;
			this->textBox7->TextChanged += gcnew System::EventHandler(this, &Register::textBox7_TextChanged);
			// 
			// dateTimePicker1
			// 
			this->dateTimePicker1->CalendarFont = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->dateTimePicker1->Font = (gcnew System::Drawing::Font(L"Segoe UI Symbol", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->dateTimePicker1->Location = System::Drawing::Point(51, 178);
			this->dateTimePicker1->Name = L"dateTimePicker1";
			this->dateTimePicker1->Size = System::Drawing::Size(192, 30);
			this->dateTimePicker1->TabIndex = 14;
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(20)), static_cast<System::Int32>(static_cast<System::Byte>(93)),
				static_cast<System::Int32>(static_cast<System::Byte>(160)));
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button1->Font = (gcnew System::Drawing::Font(L"Segoe UI Symbol", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->ForeColor = System::Drawing::Color::White;
			this->button1->Location = System::Drawing::Point(48, 592);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(176, 46);
			this->button1->TabIndex = 15;
			this->button1->Text = L"Register";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &Register::button1_Click);
			// 
			// comboBox1
			// 
			this->comboBox1->AllowDrop = true;
			this->comboBox1->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->comboBox1->Font = (gcnew System::Drawing::Font(L"Segoe UI Symbol", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"Faculty", L"Student" });
			this->comboBox1->Location = System::Drawing::Point(269, 178);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(145, 31);
			this->comboBox1->TabIndex = 16;
			// 
			// pictureBox1
			// 
			this->pictureBox1->BackColor = System::Drawing::Color::White;
			this->pictureBox1->Location = System::Drawing::Point(-1, 56);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(462, 616);
			this->pictureBox1->TabIndex = 17;
			this->pictureBox1->TabStop = false;
			this->pictureBox1->Click += gcnew System::EventHandler(this, &Register::pictureBox1_Click);
			// 
			// label8
			// 
			this->label8->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(20)), static_cast<System::Int32>(static_cast<System::Byte>(93)),
				static_cast<System::Int32>(static_cast<System::Byte>(160)));
			this->label8->Font = (gcnew System::Drawing::Font(L"Segoe UI Symbol", 19.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label8->ForeColor = System::Drawing::Color::White;
			this->label8->Location = System::Drawing::Point(0, 0);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(967, 63);
			this->label8->TabIndex = 19;
			this->label8->Text = L"USER REGISTRATION";
			this->label8->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->label8->Click += gcnew System::EventHandler(this, &Register::label8_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::White;
			this->label2->Font = (gcnew System::Drawing::Font(L"Segoe UI Symbol", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(47, 155);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(40, 20);
			this->label2->TabIndex = 20;
			this->label2->Text = L"DOB";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->BackColor = System::Drawing::Color::White;
			this->label9->Font = (gcnew System::Drawing::Font(L"Segoe UI Symbol", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label9->Location = System::Drawing::Point(47, 228);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(60, 20);
			this->label9->TabIndex = 21;
			this->label9->Text = L"Contact";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->BackColor = System::Drawing::Color::White;
			this->label10->Font = (gcnew System::Drawing::Font(L"Segoe UI Symbol", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label10->Location = System::Drawing::Point(265, 155);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(72, 20);
			this->label10->TabIndex = 22;
			this->label10->Text = L"User Role";
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->BackColor = System::Drawing::Color::White;
			this->label11->Font = (gcnew System::Drawing::Font(L"Segoe UI Symbol", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label11->Location = System::Drawing::Point(47, 446);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(46, 20);
			this->label11->TabIndex = 23;
			this->label11->Text = L"Email";
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->BackColor = System::Drawing::Color::White;
			this->label12->Font = (gcnew System::Drawing::Font(L"Segoe UI Symbol", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label12->Location = System::Drawing::Point(47, 514);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(71, 20);
			this->label12->TabIndex = 24;
			this->label12->Text = L"Password";
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(20)), static_cast<System::Int32>(static_cast<System::Byte>(93)),
				static_cast<System::Int32>(static_cast<System::Byte>(160)));
			this->button2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button2->Font = (gcnew System::Drawing::Font(L"Segoe UI Symbol", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button2->ForeColor = System::Drawing::Color::White;
			this->button2->Location = System::Drawing::Point(238, 592);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(176, 46);
			this->button2->TabIndex = 25;
			this->button2->Text = L"Reset";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &Register::button2_Click);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::Color::White;
			this->label3->Font = (gcnew System::Drawing::Font(L"Segoe UI Symbol", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(47, 300);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(62, 20);
			this->label3->TabIndex = 26;
			this->label3->Text = L"Address";
			// 
			// label4
			// 
			this->label4->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(177)), static_cast<System::Int32>(static_cast<System::Byte>(212)),
				static_cast<System::Int32>(static_cast<System::Byte>(224)));
			this->label4->Font = (gcnew System::Drawing::Font(L"Segoe UI Symbol", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(12)), static_cast<System::Int32>(static_cast<System::Byte>(45)),
				static_cast<System::Int32>(static_cast<System::Byte>(72)));
			this->label4->Location = System::Drawing::Point(604, 103);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(262, 46);
			this->label4->TabIndex = 28;
			this->label4->Text = L"INSTRUCTIONS";
			// 
			// label5
			// 
			this->label5->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(177)), static_cast<System::Int32>(static_cast<System::Byte>(212)),
				static_cast<System::Int32>(static_cast<System::Byte>(224)));
			this->label5->Font = (gcnew System::Drawing::Font(L"Segoe UI Symbol", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(12)), static_cast<System::Int32>(static_cast<System::Byte>(45)),
				static_cast<System::Int32>(static_cast<System::Byte>(72)));
			this->label5->Location = System::Drawing::Point(509, 162);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(428, 392);
			this->label5->TabIndex = 29;
			this->label5->Text = resources->GetString(L"label5.Text");
			this->label5->Click += gcnew System::EventHandler(this, &Register::label5_Click);
			// 
			// textBox2
			// 
			this->textBox2->Font = (gcnew System::Drawing::Font(L"Segoe UI Symbol", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox2->Location = System::Drawing::Point(51, 397);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(363, 30);
			this->textBox2->TabIndex = 30;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->BackColor = System::Drawing::Color::White;
			this->label6->Font = (gcnew System::Drawing::Font(L"Segoe UI Symbol", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->Location = System::Drawing::Point(47, 374);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(208, 20);
			this->label6->TabIndex = 31;
			this->label6->Text = L"Enrollment Year / Joining Year";
			// 
			// label13
			// 
			this->label13->Font = (gcnew System::Drawing::Font(L"Segoe UI Symbol", 12, System::Drawing::FontStyle::Bold));
			this->label13->ForeColor = System::Drawing::Color::Green;
			this->label13->Location = System::Drawing::Point(518, 471);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(369, 152);
			this->label13->TabIndex = 33;
			// 
			// Register
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(177)), static_cast<System::Int32>(static_cast<System::Byte>(212)),
				static_cast<System::Int32>(static_cast<System::Byte>(224)));
			this->ClientSize = System::Drawing::Size(958, 674);
			this->Controls->Add(this->label13);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->textBox7);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->textBox6);
			this->Controls->Add(this->label12);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->label11);
			this->Controls->Add(this->comboBox1);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->dateTimePicker1);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->pictureBox1);
			this->Name = L"Register";
			this->Text = L"Register";
			this->Load += gcnew System::EventHandler(this, &Register::Register_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	public: Form^ globalForm;
	private: System::Void Register_Load(System::Object^  sender, System::EventArgs^  e) {

	}
	private: System::Void label7_Click(System::Object^  sender, System::EventArgs^  e) {
	}

	
			 bool IsPasswordValid(String^ password)
			 {
				 // Check if the password is at least 8 characters
				 if (password->Length < 8)
				 {
					 return false;
				 }

				 // Check for at least one uppercase letter, one lowercase letter, and one special character
				 bool hasUppercase = false;
				 bool hasLowercase = false;
				 bool hasSpecialChar = false;

				 for each (Char c in password)
				 {
					 if (Char::IsUpper(c))
					 {
						 hasUppercase = true;
					 }
					 else if (Char::IsLower(c))
					 {
						 hasLowercase = true;
					 }
					 else if (!Char::IsLetterOrDigit(c))
					 {
						 hasSpecialChar = true;
					 }
				 }

				 // Check if all criteria are met
				 return hasUppercase && hasLowercase && hasSpecialChar;
			 }


 private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
			 String^ name = textBox1->Text;
			 DateTime^ dateTime = dateTimePicker1->Value;
			 String^ formattedDate = dateTime->ToString("yyyy-MM-dd");
			 String^ contact = textBox3->Text;
			 String^ email = textBox4->Text;
			 String^ userType = comboBox1->Text;
			 String^ password = textBox6->Text;
			 String^ address = textBox7->Text;
			 String^ enrollment_year = textBox2->Text;
			 String^ password_hash = MiscellaneousFunctions::ComputeMD5Hash(password);

			 label13->ForeColor = System::Drawing::Color::Red;
			 if (name == "" || formattedDate == "" || contact == "" || email == "" || userType == "" || password == "" || address == "" || enrollment_year == ""){
				 label13->Text = "Please fill all values!";
			 }
			 else if (contact->Length != 10){
				 label13->Text = "Contact must be 10 digits!";
			 }
			 else if (!(email->EndsWith("@iitg.ac.in", StringComparison::OrdinalIgnoreCase))){
				 label13->Text = "Email must end with @iitg.ac.in";
			 }
			 else if (enrollment_year->Length != 4){
				 label13->Text = "Enrollment year must be 4 digits!";
			 }
			 else if (!IsPasswordValid(password)){
				 label13->Text = "Please enter a stronger password!";
			 }
			 else{
				 String^ query = "SELECT COUNT(*) FROM [dbo].[signup] WHERE Email=@Email";
				 array<SqlParameter^>^ parameters1 = {
					 gcnew SqlParameter("@Email", email)
				 };
				 SqlDataReader^ dr = DatabaseHelper::ExecuteQuery(query, parameters1);
				 dr->Read();
				 int c = dr->GetInt32(0);
				 dr->Close();
				 if (c != 0){
					 label13->Text = "Email already registered!";
				 }
				 else{
					 try{

						 String^ query = "INSERT INTO signup (Name, DOB, Contact, Address, Email, UserType, Password_hash, enrollment_year) VALUES (@Name, @Date, @Contact, @Address, @Email, @UserType, @Password_hash, @EY);";
						 array<SqlParameter^>^ parameters = {
							 gcnew SqlParameter("@Name", name),
							 gcnew SqlParameter("@Date", formattedDate),
							 gcnew SqlParameter("@Contact", contact),
							 gcnew SqlParameter("@Address", address),
							 gcnew SqlParameter("@Email", email),
							 gcnew SqlParameter("@UserType", userType),
							 gcnew SqlParameter("@Password_hash", password_hash),
							 gcnew SqlParameter("@EY", enrollment_year)
						 };


						 SqlDataReader^ dr = DatabaseHelper::ExecuteQuery(query, parameters);
						 dr->Close();
						 label13->ForeColor = System::Drawing::Color::Green;
						 label13->Text = "Your registration request is sent successfully !";
					 }
					 catch (Exception^ ex){
						 MessageBox::Show(ex->Message);
					 }
				 }
			 }
}
private: System::Void label8_Click(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void label5_Click(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void pictureBox1_Click(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void textBox7_TextChanged(System::Object^  sender, System::EventArgs^  e) {
}


private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
			 textBox1->Text = "";
			 textBox3->Text = "";
			 textBox4->Text = "";
			 comboBox1->Text = "";
			 textBox6->Text = "";
			 textBox7->Text = "";
			 textBox2->Text = "";
			 label13->Text = "";
}
};
}
