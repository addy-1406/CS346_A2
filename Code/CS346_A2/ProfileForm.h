#pragma once
#include "User.h"
#include "DatabaseHelper.h"

namespace CS346_A2 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Windows::Forms;
	using namespace System::Drawing;
	using namespace MySql::Data::MySqlClient;
	using namespace System::IO;

	public ref class ProfileForm : public System::Windows::Forms::Form
	{
	public:
		ProfileForm(int userID) // Constructor taking User_ID as input argument
		{
			InitializeComponent();
			this->userID = userID;
			FetchUserData(userID); // Fetch user data based on User_ID
		}

	protected:
		~ProfileForm()
		{
			if (components)
			{
				delete components;
			}
		}





	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::PictureBox^  pictureBox1;
	private: System::Windows::Forms::Button^  btnPhoto;

	private:
		System::ComponentModel::Container ^components;
	private: System::Windows::Forms::Label^  label5;


	private: System::Windows::Forms::Label^  label7;


	private: System::Windows::Forms::Label^  label9;


	private: System::Windows::Forms::Label^  label11;


	private: System::Windows::Forms::Label^  label13;
	private: System::Windows::Forms::TextBox^  txtYear;
	private: System::Windows::Forms::TextBox^  txtEmail;


	private: System::Windows::Forms::TextBox^  txtContact;
	private: System::Windows::Forms::TextBox^  txtRoom;
	private: System::Windows::Forms::TextBox^  txtResearch;



	private: System::Windows::Forms::TextBox^  txtDesign;

	private: System::Windows::Forms::DateTimePicker^  dtpDOB;

	private: System::Windows::Forms::Panel^  panel1;
	private: System::Windows::Forms::Panel^  panel2;
	private: System::Windows::Forms::Button^  btnProfile;






			 int userID;

#pragma region Windows Form Designer generated code
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(ProfileForm::typeid));
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->btnPhoto = (gcnew System::Windows::Forms::Button());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->txtYear = (gcnew System::Windows::Forms::TextBox());
			this->txtEmail = (gcnew System::Windows::Forms::TextBox());
			this->txtContact = (gcnew System::Windows::Forms::TextBox());
			this->txtRoom = (gcnew System::Windows::Forms::TextBox());
			this->txtResearch = (gcnew System::Windows::Forms::TextBox());
			this->txtDesign = (gcnew System::Windows::Forms::TextBox());
			this->dtpDOB = (gcnew System::Windows::Forms::DateTimePicker());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->btnProfile = (gcnew System::Windows::Forms::Button());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->panel1->SuspendLayout();
			this->panel2->SuspendLayout();
			this->SuspendLayout();
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Segoe UI Symbol", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(36, 98);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(60, 20);
			this->label3->TabIndex = 5;
			this->label3->Text = L"Contact";
			this->label3->Click += gcnew System::EventHandler(this, &ProfileForm::label3_Click);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Segoe UI Symbol", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(36, 177);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(46, 20);
			this->label4->TabIndex = 6;
			this->label4->Text = L"Email";
			this->label4->Click += gcnew System::EventHandler(this, &ProfileForm::label4_Click);
			// 
			// pictureBox1
			// 
			this->pictureBox1->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(26, 44);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(347, 410);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox1->TabIndex = 7;
			this->pictureBox1->TabStop = false;
			this->pictureBox1->Click += gcnew System::EventHandler(this, &ProfileForm::pictureBox1_Click);
			// 
			// btnPhoto
			// 
			this->btnPhoto->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(20)), static_cast<System::Int32>(static_cast<System::Byte>(93)),
				static_cast<System::Int32>(static_cast<System::Byte>(160)));
			this->btnPhoto->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(20)),
				static_cast<System::Int32>(static_cast<System::Byte>(93)), static_cast<System::Int32>(static_cast<System::Byte>(160)));
			this->btnPhoto->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnPhoto->Font = (gcnew System::Drawing::Font(L"Segoe UI Symbol", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnPhoto->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->btnPhoto->Location = System::Drawing::Point(106, 484);
			this->btnPhoto->Name = L"btnPhoto";
			this->btnPhoto->Size = System::Drawing::Size(172, 48);
			this->btnPhoto->TabIndex = 8;
			this->btnPhoto->Text = L"Upload Photo";
			this->btnPhoto->UseVisualStyleBackColor = false;
			this->btnPhoto->Click += gcnew System::EventHandler(this, &ProfileForm::btnPhoto_Click);
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Segoe UI Symbol", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(36, 21);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(40, 20);
			this->label5->TabIndex = 9;
			this->label5->Text = L"DOB";
			this->label5->Click += gcnew System::EventHandler(this, &ProfileForm::label5_Click);
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Segoe UI Symbol", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->Location = System::Drawing::Point(36, 251);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(93, 20);
			this->label7->TabIndex = 11;
			this->label7->Text = L"Office Room";
			this->label7->Click += gcnew System::EventHandler(this, &ProfileForm::label7_Click);
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"Segoe UI Symbol", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label9->Location = System::Drawing::Point(247, 21);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(89, 20);
			this->label9->TabIndex = 13;
			this->label9->Text = L"Joining Year";
			this->label9->Click += gcnew System::EventHandler(this, &ProfileForm::label9_Click);
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Font = (gcnew System::Drawing::Font(L"Segoe UI Symbol", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label11->Location = System::Drawing::Point(36, 325);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(127, 20);
			this->label11->TabIndex = 15;
			this->label11->Text = L"Research Interests";
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Font = (gcnew System::Drawing::Font(L"Segoe UI Symbol", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label13->Location = System::Drawing::Point(247, 251);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(89, 20);
			this->label13->TabIndex = 17;
			this->label13->Text = L"Designation";
			this->label13->Click += gcnew System::EventHandler(this, &ProfileForm::label13_Click);
			// 
			// txtYear
			// 
			this->txtYear->Font = (gcnew System::Drawing::Font(L"Segoe UI Symbol", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtYear->Location = System::Drawing::Point(251, 44);
			this->txtYear->Name = L"txtYear";
			this->txtYear->ReadOnly = true;
			this->txtYear->Size = System::Drawing::Size(193, 30);
			this->txtYear->TabIndex = 19;
			this->txtYear->TextChanged += gcnew System::EventHandler(this, &ProfileForm::textBox1_TextChanged);
			// 
			// txtEmail
			// 
			this->txtEmail->Font = (gcnew System::Drawing::Font(L"Segoe UI Symbol", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtEmail->Location = System::Drawing::Point(40, 200);
			this->txtEmail->Name = L"txtEmail";
			this->txtEmail->ReadOnly = true;
			this->txtEmail->Size = System::Drawing::Size(404, 30);
			this->txtEmail->TabIndex = 20;
			this->txtEmail->TextChanged += gcnew System::EventHandler(this, &ProfileForm::txtEmail_TextChanged);
			// 
			// txtContact
			// 
			this->txtContact->Font = (gcnew System::Drawing::Font(L"Segoe UI Symbol", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtContact->Location = System::Drawing::Point(40, 121);
			this->txtContact->Name = L"txtContact";
			this->txtContact->Size = System::Drawing::Size(404, 30);
			this->txtContact->TabIndex = 21;
			this->txtContact->TextChanged += gcnew System::EventHandler(this, &ProfileForm::txtContact_TextChanged);
			// 
			// txtRoom
			// 
			this->txtRoom->Font = (gcnew System::Drawing::Font(L"Segoe UI Symbol", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtRoom->Location = System::Drawing::Point(40, 274);
			this->txtRoom->Name = L"txtRoom";
			this->txtRoom->Size = System::Drawing::Size(193, 30);
			this->txtRoom->TabIndex = 22;
			this->txtRoom->TextChanged += gcnew System::EventHandler(this, &ProfileForm::txtRoom_TextChanged);
			// 
			// txtResearch
			// 
			this->txtResearch->Font = (gcnew System::Drawing::Font(L"Segoe UI Symbol", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtResearch->Location = System::Drawing::Point(40, 348);
			this->txtResearch->Multiline = true;
			this->txtResearch->Name = L"txtResearch";
			this->txtResearch->Size = System::Drawing::Size(404, 106);
			this->txtResearch->TabIndex = 23;
			this->txtResearch->TextChanged += gcnew System::EventHandler(this, &ProfileForm::txtResearch_TextChanged);
			// 
			// txtDesign
			// 
			this->txtDesign->Font = (gcnew System::Drawing::Font(L"Segoe UI Symbol", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtDesign->Location = System::Drawing::Point(251, 274);
			this->txtDesign->Name = L"txtDesign";
			this->txtDesign->Size = System::Drawing::Size(193, 30);
			this->txtDesign->TabIndex = 24;
			this->txtDesign->TextChanged += gcnew System::EventHandler(this, &ProfileForm::txtDesign_TextChanged);
			// 
			// dtpDOB
			// 
			this->dtpDOB->Font = (gcnew System::Drawing::Font(L"Segoe UI Symbol", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->dtpDOB->Location = System::Drawing::Point(40, 44);
			this->dtpDOB->Name = L"dtpDOB";
			this->dtpDOB->Size = System::Drawing::Size(193, 30);
			this->dtpDOB->TabIndex = 25;
			this->dtpDOB->ValueChanged += gcnew System::EventHandler(this, &ProfileForm::dtpDOB_ValueChanged);
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::White;
			this->panel1->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel1->Controls->Add(this->btnProfile);
			this->panel1->Controls->Add(this->label11);
			this->panel1->Controls->Add(this->dtpDOB);
			this->panel1->Controls->Add(this->txtDesign);
			this->panel1->Controls->Add(this->txtResearch);
			this->panel1->Controls->Add(this->txtRoom);
			this->panel1->Controls->Add(this->txtContact);
			this->panel1->Controls->Add(this->txtEmail);
			this->panel1->Controls->Add(this->txtYear);
			this->panel1->Controls->Add(this->label13);
			this->panel1->Controls->Add(this->label9);
			this->panel1->Controls->Add(this->label7);
			this->panel1->Controls->Add(this->label5);
			this->panel1->Controls->Add(this->label4);
			this->panel1->Controls->Add(this->label3);
			this->panel1->Font = (gcnew System::Drawing::Font(L"Segoe UI Symbol", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->panel1->Location = System::Drawing::Point(441, 12);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(489, 562);
			this->panel1->TabIndex = 27;
			this->panel1->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &ProfileForm::panel1_Paint);
			// 
			// btnProfile
			// 
			this->btnProfile->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(20)), static_cast<System::Int32>(static_cast<System::Byte>(93)),
				static_cast<System::Int32>(static_cast<System::Byte>(160)));
			this->btnProfile->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(20)),
				static_cast<System::Int32>(static_cast<System::Byte>(93)), static_cast<System::Int32>(static_cast<System::Byte>(160)));
			this->btnProfile->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnProfile->Font = (gcnew System::Drawing::Font(L"Segoe UI Symbol", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnProfile->ForeColor = System::Drawing::SystemColors::Control;
			this->btnProfile->Location = System::Drawing::Point(143, 484);
			this->btnProfile->Name = L"btnProfile";
			this->btnProfile->Size = System::Drawing::Size(193, 48);
			this->btnProfile->TabIndex = 26;
			this->btnProfile->Text = L"Upload Profile";
			this->btnProfile->UseVisualStyleBackColor = false;
			this->btnProfile->Click += gcnew System::EventHandler(this, &ProfileForm::btnProfile_Click);
			// 
			// panel2
			// 
			this->panel2->BackColor = System::Drawing::Color::White;
			this->panel2->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel2->Controls->Add(this->btnPhoto);
			this->panel2->Controls->Add(this->pictureBox1);
			this->panel2->Location = System::Drawing::Point(43, 12);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(401, 562);
			this->panel2->TabIndex = 28;
			// 
			// ProfileForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(177)), static_cast<System::Int32>(static_cast<System::Byte>(212)),
				static_cast<System::Int32>(static_cast<System::Byte>(224)));
			this->ClientSize = System::Drawing::Size(958, 578);
			this->Controls->Add(this->panel2);
			this->Controls->Add(this->panel1);
			this->Name = L"ProfileForm";
			this->Text = L"ProfileForm";
			this->Load += gcnew System::EventHandler(this, &ProfileForm::ProfileForm_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			this->panel2->ResumeLayout(false);
			this->ResumeLayout(false);

		}
#pragma endregion
	private:
		void btnPhoto_Click(System::Object^ sender, System::EventArgs^ e) {
			OpenFileDialog^ openFileDialog1 = gcnew OpenFileDialog();
			//openFileDialog1->Filter = "Image Files (.bmp;.jpg;.jpeg,.gif,.png,.tif)|.bmp;.jpg;.jpeg;.gif;.png;.tif";

			if (openFileDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK) {
				try {
					pictureBox1->Image = Image::FromFile(openFileDialog1->FileName);

					// Convert Image to byte array
					array<Byte>^ imageArray = ImageToByteArray(pictureBox1->Image);

					// Upload the image to the database
					UploadImageToDatabase(imageArray, userID);
				}
				catch (Exception^ ex) {
					MessageBox::Show(ex->Message, "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
				}
			}
		}
		System::Void btnProfile_Click(System::Object^  sender, System::EventArgs^  e) {
					 try {
						
										// Get the updated values from the text boxes and date time picker
						 String^ newDOB = dtpDOB->Value.ToString("yyyy-MM-dd");
						 String^ newContact = txtContact->Text;
						 String^ newRoom = txtRoom->Text;
						 String^ newDesignation = txtDesign->Text;
						 String^ newResearchInterests = txtResearch->Text->Replace("\n", ",");

						 // Update the values in the database
						 String^ query = "UPDATE faculty SET DOB = @DOB, Contact = @Contact, Office_room = @Room, Designation = @Designation, Research_Interests = @Research WHERE User_ID = @UserID";
						 array<SqlParameter^>^ parameters = {
							 gcnew SqlParameter("@DOB", newDOB),
							 gcnew SqlParameter("@Contact", newContact),
							 gcnew SqlParameter("@Room", newRoom),
							 gcnew SqlParameter("@Designation", newDesignation),
							 gcnew SqlParameter("@Research", newResearchInterests),
							 gcnew SqlParameter("@UserID", userID)
						 };

						 DatabaseHelper::ExecuteQuery(query, parameters);

						 MessageBox::Show("Profile updated successfully.", "Success", MessageBoxButtons::OK, MessageBoxIcon::Information);
					 }
					 catch (SqlException^ ex) {
						 MessageBox::Show(ex->Message, "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
					 }
		}


		void FetchUserData(int userID) {
			try {
				String^ query = "SELECT Name, DOB, Contact, Email, Office_room, Joining_Year, Research_Interests, Designation FROM faculty WHERE User_ID = @UserID";
				array<SqlParameter^>^ parameters = {
					gcnew SqlParameter("@UserID", System::Convert::ToString(userID))
				};

				SqlDataReader^ reader = DatabaseHelper::ExecuteQuery(query, parameters);

				if (reader->Read()) {
					//lblName->Text = reader->GetString(0);
					dtpDOB->Value = reader->IsDBNull(1) ? DateTime::Now : reader->GetDateTime(1);
					txtContact->Text = reader->GetString(2);
					txtEmail->Text = reader->GetString(3);
					txtRoom->Text = reader->IsDBNull(4) ? "null" : reader->GetString(4);
					txtYear->Text = reader->IsDBNull(5) ? "null" : reader->GetInt32(5).ToString();
					txtResearch->Text = reader->IsDBNull(6) ? "null" : reader->GetString(6)->Replace(",", "\n");
					txtDesign->Text = reader->IsDBNull(7) ? "null" : reader->GetString(7);
					reader->Close();
					// Fetch photo from profile_photos table
					query = "SELECT Photo FROM profile_photos WHERE User_ID = @UserID";
					parameters = gcnew array<SqlParameter^> { gcnew SqlParameter("@UserID", userID) };
					reader = DatabaseHelper::ExecuteQuery(query, parameters);

					if (reader->Read() && reader["Photo"] != nullptr && reader["Photo"] != DBNull::Value) {
						array<Byte>^ imgData = safe_cast<array<Byte>^>(reader["Photo"]);
						MemoryStream^ ms = gcnew MemoryStream(imgData);
						pictureBox1->Image = Image::FromStream(ms);
					}
					else {
						// If photo is null in profile_photos table, use default photo
						try {
							pictureBox1->Image = Image::FromFile("..\\MediaFiles\\student_default.png");
						}
						catch (Exception^ ex) {
							MessageBox::Show("Error loading default image: " + ex->Message);
						}
					}

					reader->Close();
							
						
				}

				reader->Close();
			}
			catch (SqlException^ ex) {
				MessageBox::Show(ex->Message, "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
			}
		}

	
		void UploadImageToDatabase(array<Byte>^ photoData, int userID) {
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

		void DisplayImageFromDatabase(array<Byte>^ imageArray) {
			try {
				// Convert byte array back to Image
				MemoryStream^ ms = gcnew MemoryStream(imageArray);
				pictureBox1->Image = Image::FromStream(ms);
			}
			catch (Exception^ ex) {
				MessageBox::Show(ex->Message, "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
			}
		}

		array<Byte>^ ImageToByteArray(System::Drawing::Image^ image) {
			MemoryStream^ ms = gcnew MemoryStream();
			image->Save(ms, System::Drawing::Imaging::ImageFormat::Png);
			return ms->ToArray();
		}
	private: System::Void label9_Click(System::Object^  sender, System::EventArgs^  e) {
	}
private: System::Void textBox1_TextChanged(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void panel1_Paint(System::Object^  sender, System::Windows::Forms::PaintEventArgs^  e) {
}
private: System::Void dtpDOB_ValueChanged(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void txtContact_TextChanged(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void txtEmail_TextChanged(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void txtRoom_TextChanged(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void txtDesign_TextChanged(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void txtResearch_TextChanged(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void label3_Click(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void label4_Click(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void label7_Click(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void label5_Click(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void label13_Click(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void ProfileForm_Load(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void pictureBox1_Click(System::Object^  sender, System::EventArgs^  e) {
}
};
}