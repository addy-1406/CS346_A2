#pragma once
#include "User.h"
#include "DatabaseHelper.h"
#include "MiscellaneousFunctions.h"
#include <msclr/marshal_cppstd.h> // Required for marshaling strings

namespace CS346_A2 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::IO;

	/// <summary>
	/// Summary for Student_Profile
	/// </summary>
	public ref class Student_Profile : public System::Windows::Forms::Form
	{
	public:
		Student_Profile(User^ User)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
			user = User;
			stu = gcnew Student_data;
			get_profile(user);
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~Student_Profile()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TextBox^  textBox2;
	protected:
	private: System::Windows::Forms::Label^  label6;

	private: System::Windows::Forms::TextBox^  textBox7;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::TextBox^  textBox6;
	private: System::Windows::Forms::Label^  label12;
	private: System::Windows::Forms::TextBox^  textBox4;
	private: System::Windows::Forms::Label^  label11;
	private: System::Windows::Forms::Label^  label10;
	private: System::Windows::Forms::TextBox^  textBox3;
	private: System::Windows::Forms::Label^  label9;
	private: System::Windows::Forms::DateTimePicker^  dateTimePicker1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::PictureBox^  pictureBox1;
	private: System::Windows::Forms::TextBox^  textBox5;
	private: System::Windows::Forms::TextBox^  textBox8;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::PictureBox^  pictureBox2;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::PictureBox^  pictureBox3;


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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(Student_Profile::typeid));
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->textBox7 = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->dateTimePicker1 = (gcnew System::Windows::Forms::DateTimePicker());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->textBox8 = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->pictureBox3 = (gcnew System::Windows::Forms::PictureBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->BeginInit();
			this->SuspendLayout();
			// 
			// textBox2
			// 
			this->textBox2->Font = (gcnew System::Drawing::Font(L"Segoe UI Symbol", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox2->Location = System::Drawing::Point(529, 292);
			this->textBox2->Name = L"textBox2";
			this->textBox2->ReadOnly = true;
			this->textBox2->Size = System::Drawing::Size(363, 30);
			this->textBox2->TabIndex = 53;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->BackColor = System::Drawing::Color::White;
			this->label6->Font = (gcnew System::Drawing::Font(L"Segoe UI Symbol", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->Location = System::Drawing::Point(525, 269);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(208, 20);
			this->label6->TabIndex = 54;
			this->label6->Text = L"Enrollment Year / Joining Year";
			// 
			// textBox7
			// 
			this->textBox7->Font = (gcnew System::Drawing::Font(L"Segoe UI Symbol", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox7->Location = System::Drawing::Point(529, 228);
			this->textBox7->Multiline = true;
			this->textBox7->Name = L"textBox7";
			this->textBox7->Size = System::Drawing::Size(363, 32);
			this->textBox7->TabIndex = 38;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::Color::White;
			this->label3->Font = (gcnew System::Drawing::Font(L"Segoe UI Symbol", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(525, 205);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(62, 20);
			this->label3->TabIndex = 50;
			this->label3->Text = L"Address";
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(20)), static_cast<System::Int32>(static_cast<System::Byte>(93)),
				static_cast<System::Int32>(static_cast<System::Byte>(160)));
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button1->Font = (gcnew System::Drawing::Font(L"Segoe UI Symbol", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->ForeColor = System::Drawing::Color::White;
			this->button1->Location = System::Drawing::Point(629, 510);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(176, 46);
			this->button1->TabIndex = 40;
			this->button1->Text = L"Update Profile";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &Student_Profile::button1_Click);
			// 
			// textBox6
			// 
			this->textBox6->Font = (gcnew System::Drawing::Font(L"Segoe UI Symbol", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox6->Location = System::Drawing::Point(529, 463);
			this->textBox6->Name = L"textBox6";
			this->textBox6->PasswordChar = '*';
			this->textBox6->Size = System::Drawing::Size(363, 30);
			this->textBox6->TabIndex = 37;
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->BackColor = System::Drawing::Color::White;
			this->label12->Font = (gcnew System::Drawing::Font(L"Segoe UI Symbol", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label12->Location = System::Drawing::Point(525, 440);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(71, 20);
			this->label12->TabIndex = 48;
			this->label12->Text = L"Password";
			// 
			// textBox4
			// 
			this->textBox4->Font = (gcnew System::Drawing::Font(L"Segoe UI Symbol", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox4->Location = System::Drawing::Point(529, 405);
			this->textBox4->Name = L"textBox4";
			this->textBox4->ReadOnly = true;
			this->textBox4->Size = System::Drawing::Size(363, 30);
			this->textBox4->TabIndex = 36;
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->BackColor = System::Drawing::Color::White;
			this->label11->Font = (gcnew System::Drawing::Font(L"Segoe UI Symbol", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label11->Location = System::Drawing::Point(525, 382);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(46, 20);
			this->label11->TabIndex = 47;
			this->label11->Text = L"Email";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->BackColor = System::Drawing::Color::White;
			this->label10->Font = (gcnew System::Drawing::Font(L"Segoe UI Symbol", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label10->Location = System::Drawing::Point(743, 85);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(62, 20);
			this->label10->TabIndex = 46;
			this->label10->Text = L"Roll No.";
			// 
			// textBox3
			// 
			this->textBox3->Font = (gcnew System::Drawing::Font(L"Segoe UI Symbol", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox3->Location = System::Drawing::Point(529, 171);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(363, 30);
			this->textBox3->TabIndex = 35;
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->BackColor = System::Drawing::Color::White;
			this->label9->Font = (gcnew System::Drawing::Font(L"Segoe UI Symbol", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label9->Location = System::Drawing::Point(525, 148);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(60, 20);
			this->label9->TabIndex = 45;
			this->label9->Text = L"Contact";
			// 
			// dateTimePicker1
			// 
			this->dateTimePicker1->CalendarFont = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->dateTimePicker1->Font = (gcnew System::Drawing::Font(L"Segoe UI Symbol", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->dateTimePicker1->Location = System::Drawing::Point(529, 108);
			this->dateTimePicker1->Name = L"dateTimePicker1";
			this->dateTimePicker1->Size = System::Drawing::Size(192, 30);
			this->dateTimePicker1->TabIndex = 39;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::White;
			this->label2->Font = (gcnew System::Drawing::Font(L"Segoe UI Symbol", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(525, 85);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(40, 20);
			this->label2->TabIndex = 44;
			this->label2->Text = L"DOB";
			// 
			// textBox1
			// 
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Segoe UI Symbol", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox1->Location = System::Drawing::Point(529, 45);
			this->textBox1->Name = L"textBox1";
			this->textBox1->ReadOnly = true;
			this->textBox1->Size = System::Drawing::Size(363, 30);
			this->textBox1->TabIndex = 34;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::White;
			this->label1->Font = (gcnew System::Drawing::Font(L"Segoe UI Symbol", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::SystemColors::ControlText;
			this->label1->Location = System::Drawing::Point(525, 22);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(49, 20);
			this->label1->TabIndex = 33;
			this->label1->Text = L"Name";
			// 
			// pictureBox1
			// 
			this->pictureBox1->BackColor = System::Drawing::Color::White;
			this->pictureBox1->Location = System::Drawing::Point(477, 7);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(468, 562);
			this->pictureBox1->TabIndex = 42;
			this->pictureBox1->TabStop = false;
			this->pictureBox1->Click += gcnew System::EventHandler(this, &Student_Profile::pictureBox1_Click);
			// 
			// textBox5
			// 
			this->textBox5->Font = (gcnew System::Drawing::Font(L"Segoe UI Symbol", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox5->Location = System::Drawing::Point(747, 108);
			this->textBox5->MaximumSize = System::Drawing::Size(145, 30);
			this->textBox5->MinimumSize = System::Drawing::Size(145, 30);
			this->textBox5->Name = L"textBox5";
			this->textBox5->ReadOnly = true;
			this->textBox5->Size = System::Drawing::Size(145, 30);
			this->textBox5->TabIndex = 55;
			// 
			// textBox8
			// 
			this->textBox8->Font = (gcnew System::Drawing::Font(L"Segoe UI Symbol", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox8->Location = System::Drawing::Point(529, 349);
			this->textBox8->Name = L"textBox8";
			this->textBox8->ReadOnly = true;
			this->textBox8->Size = System::Drawing::Size(363, 30);
			this->textBox8->TabIndex = 56;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->BackColor = System::Drawing::Color::White;
			this->label4->Font = (gcnew System::Drawing::Font(L"Segoe UI Symbol", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(525, 326);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(122, 20);
			this->label4->TabIndex = 57;
			this->label4->Text = L"Current Semester";
			// 
			// pictureBox2
			// 
			this->pictureBox2->BackColor = System::Drawing::Color::White;
			this->pictureBox2->Location = System::Drawing::Point(17, 7);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(468, 562);
			this->pictureBox2->TabIndex = 58;
			this->pictureBox2->TabStop = false;
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(20)), static_cast<System::Int32>(static_cast<System::Byte>(93)),
				static_cast<System::Int32>(static_cast<System::Byte>(160)));
			this->button2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button2->Font = (gcnew System::Drawing::Font(L"Segoe UI Symbol", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button2->ForeColor = System::Drawing::Color::White;
			this->button2->Location = System::Drawing::Point(154, 510);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(176, 46);
			this->button2->TabIndex = 59;
			this->button2->Text = L"Upload Photo";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &Student_Profile::button2_Click);
			// 
			// pictureBox3
			// 
			this->pictureBox3->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox3.BackgroundImage")));
			this->pictureBox3->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->pictureBox3->Location = System::Drawing::Point(61, 45);
			this->pictureBox3->Name = L"pictureBox3";
			this->pictureBox3->Size = System::Drawing::Size(381, 448);
			this->pictureBox3->TabIndex = 60;
			this->pictureBox3->TabStop = false;
			// 
			// Student_Profile
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(177)), static_cast<System::Int32>(static_cast<System::Byte>(212)),
				static_cast<System::Int32>(static_cast<System::Byte>(224)));
			this->ClientSize = System::Drawing::Size(958, 578);
			this->Controls->Add(this->pictureBox3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->pictureBox2);
			this->Controls->Add(this->textBox8);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->textBox5);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->textBox7);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->textBox6);
			this->Controls->Add(this->label12);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->label11);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->dateTimePicker1);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->pictureBox1);
			this->Name = L"Student_Profile";
			this->Text = L"Student_Profile";
			this->Load += gcnew System::EventHandler(this, &Student_Profile::Student_Profile_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	public: User^ user;
	public:	Student_data^ stu;

	public: System::Void get_profile(User^ user){
				try{
					String^ query = "SELECT * FROM [dbo].[student] where User_ID = @user_ID_fetch";
					array<SqlParameter^>^ parameters = {
						gcnew SqlParameter("@user_ID_fetch", System::Convert::ToString(user->userID))
					};

					SqlDataReader^ dr = DatabaseHelper::ExecuteQuery(query, parameters);
					while (dr->Read()){
						// each iteration corresponds to a particular record
						// this is how you can extract a particular column value, for example if the first field was user_id, use GetString(0) (as zero indexing is used) to get the value of userId
						stu->userID = dr->GetInt32(0);
						stu->email = dr->GetString(7);
						System::DateTime dob = dr->GetDateTime(2);
						// Convert DateTime to String^ with desired format
						stu->DOB = dob.ToString("yyyy-MM-dd");
						stu->Contact = dr->GetString(3);
						stu->Enrollment_Year = dr->GetInt32(4);
						stu->Address = dr->GetString(5);
						stu->Name = dr->GetString(1);
						stu->Current_semester = dr->GetInt32(6);
					}
					dr->Close();
				}
				catch (Exception^ ex){
					MessageBox::Show(ex->Message);
				}
				profile_photo_fetch(user);
				
		
	}
			
	public: System::Void update_profile(User^ user){
				try {
					String^ query = "UPDATE [dbo].[student] SET DOB = @DOB, Contact = @Contact, Address = @Address WHERE User_ID = @User_ID";
					DateTime^ dateTime = dateTimePicker1->Value;
					String^ formattedDate = dateTime->ToString("yyyy-MM-dd");
					String^ contact = textBox3->Text;
					String^ Address = textBox7->Text;
					array<SqlParameter^>^ parameters = {
						gcnew SqlParameter("@DOB", formattedDate),
						gcnew SqlParameter("@Contact", contact),
						gcnew SqlParameter("@Address", Address),
						gcnew SqlParameter("@User_ID", System::Convert::ToString(user->userID))
					};
					SqlDataReader^ dr = DatabaseHelper::ExecuteQuery(query, parameters);
					dr->Close();
					
					if (textBox6->Text == "")
					{
						return;
					}

					query = "UPDATE [dbo].[auth] SET Password_Hash = @Password WHERE UserID = @User_ID";
					String^ Password = textBox6->Text;
					String^ password_hash = MiscellaneousFunctions::ComputeMD5Hash(Password);
					array<SqlParameter^>^ parameters1 = {
						gcnew SqlParameter("@Password", password_hash),
						gcnew SqlParameter("@User_ID", System::Convert::ToString(user->userID))
					};
					dr = DatabaseHelper::ExecuteQuery(query, parameters1);
					dr->Close();
					textBox6->Text = "";
					MessageBox::Show("Successfully updated data");
				}
				catch (Exception^ ex) {
					MessageBox::Show(ex->Message);
				}



	}
	
	private: System::Void pictureBox1_Click(System::Object^  sender, System::EventArgs^  e) {
	}
	public: array<unsigned char>^ ImageToByteArray(System::Drawing::Image^ image) {
				 System::IO::MemoryStream^ memoryStream = gcnew System::IO::MemoryStream();
				 image->Save(memoryStream, System::Drawing::Imaging::ImageFormat::Png); // Save as PNG for simplicity
				 return memoryStream->ToArray();
			 }

private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
			 get_profile(user);
			 // Update query here
			 update_profile(user);
			 get_profile(user);
				 
}

	public: System::Void Upload_Profile_Photo(User^ user, System::Drawing::Image^ image) {
				try {
					// Convert the image to a byte array
					array<unsigned char>^ photoBytes = ImageToByteArray(image);

					// Prepare SQL query
					String^ query = "INSERT INTO Profile_photos (User_ID, Photo) VALUES (@User_ID, @Photo);";

					// Prepare parameters
					array<SqlParameter^>^ parameters = {
						gcnew SqlParameter("@User_ID", System::Convert::ToString(user->userID)),
						gcnew SqlParameter("@Photo", System::Data::SqlDbType::VarBinary, photoBytes->Length)
					};

					// Set the byte array representing the image to the parameter
					parameters[1]->Value = photoBytes;

					// Execute the query
					// (Assuming DatabaseHelper::ExecuteQuery is defined elsewhere)
					SqlDataReader^ dr = DatabaseHelper::ExecuteQuery(query, parameters);
				}
				catch (Exception^ ex) {
					throw gcnew Exception("Error uploading profile photo: " + ex->Message);
				}
	}
			public: System::Void profile_photo_fetch(User^ user)
			{
						String^ query = "SELECT Photo FROM profile_photos WHERE User_ID = @UserID";
						array<SqlParameter^>^ parameters = gcnew array<SqlParameter^> { gcnew SqlParameter("@UserID", System::Convert::ToString(user->userID)) };
						SqlDataReader^ reader = DatabaseHelper::ExecuteQuery(query, parameters);

						if (reader->Read() && reader["Photo"] != nullptr && reader["Photo"] != DBNull::Value) {
							array<Byte>^ imgData = safe_cast<array<Byte>^>(reader["Photo"]);
							MemoryStream^ ms = gcnew MemoryStream(imgData);
							pictureBox3->BackgroundImage = Image::FromStream(ms);
						}
						else {
							// If photo is null in profile_photos table, use default photo
							try {
								pictureBox3->BackgroundImage = Image::FromFile("..\\MediaFiles\\student_default.png");
							}
							catch (Exception^ ex) {
								MessageBox::Show("Error loading default image: " + ex->Message);
							}
						}

						reader->Close();
			}
private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
			 OpenFileDialog^ openFileDialog1 = gcnew OpenFileDialog();
			 //openFileDialog1->Filter = "Image Files (.bmp;.jpg;.jpeg,.gif,.png,.tif)|.bmp;.jpg;.jpeg;.gif;.png;.tif";

			 if (openFileDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK) {
				 try {
					 pictureBox3->BackgroundImage = Image::FromFile(openFileDialog1->FileName);

					 // Convert Image to byte array
					 array<Byte>^ imageArray = ImageToByteArray(pictureBox3->BackgroundImage);

					 // Upload the image to the database
					 UploadImageToDatabase(imageArray, user->userID);
				 }
				 catch (Exception^ ex) {
					 MessageBox::Show(ex->Message, "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
				 }
			 }
}
		 public: System::Void UploadImageToDatabase(array<Byte>^ photoData, int userID) {
					 try {
						 String^ query = "INSERT INTO profile_photos values(@UserID, @Photo)";
						 array<SqlParameter^>^ parameters = {
							 gcnew SqlParameter("@UserID", userID),
							 gcnew SqlParameter("@Photo", photoData)
						 };

						 DatabaseHelper::ExecuteQuery(query, parameters);

						 MessageBox::Show("Photo uploaded successfully.", "Success", MessageBoxButtons::OK, MessageBoxIcon::Information);
					 }
					 catch (SqlException^ ex) {
						 try {
							 String^ query = "UPDATE profile_photos SET Photo = @Photo WHERE User_ID = @UserID";
							 array<SqlParameter^>^ parameters = {
								 gcnew SqlParameter("@UserID", userID),
								 gcnew SqlParameter("@Photo", photoData)
							 };

							 DatabaseHelper::ExecuteQuery(query, parameters);

							 MessageBox::Show("Photo uploaded successfully.", "Success", MessageBoxButtons::OK, MessageBoxIcon::Information);
						 }
						 catch (SqlException^ ex)
						 {
							 MessageBox::Show(ex->Message);

						 }
						 
					 }
		 }
private: System::Void Student_Profile_Load(System::Object^  sender, System::EventArgs^  e) {
			 get_profile(user);
			 textBox1->Text = stu->Name;
			 textBox3->Text = stu->Contact;
			 textBox2->Text = System::Convert::ToString(stu->Enrollment_Year);
			 textBox7->Text = stu->Address;
			 textBox8->Text = System::Convert::ToString(stu->Current_semester);
			 textBox5->Text = System::Convert::ToString(stu->userID);
			 textBox4->Text = stu->email;
			 System::DateTime dateTimeValue = System::DateTime::ParseExact(stu->DOB, "yyyy-MM-dd", System::Globalization::CultureInfo::InvariantCulture);
			 dateTimePicker1->Value = dateTimeValue;
			 
}
};
}
