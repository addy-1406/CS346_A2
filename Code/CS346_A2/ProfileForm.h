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
	private: System::Windows::Forms::Label^  lblName;
	private: System::Windows::Forms::Label^  lblContact;
	private: System::Windows::Forms::Label^  lblEmail;
	private: System::Windows::Forms::Label^  label1;

	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::PictureBox^  pictureBox1;
	private: System::Windows::Forms::Button^  btnPhoto;

	private:
		System::ComponentModel::Container ^components;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::Label^  lblDOB;

	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::Label^  lblOffice;

	private: System::Windows::Forms::Label^  label9;
	private: System::Windows::Forms::Label^  lblYear;

	private: System::Windows::Forms::Label^  label11;
	private: System::Windows::Forms::Label^  lblResearch;

	private: System::Windows::Forms::Label^  label13;
	private: System::Windows::Forms::Label^  lblDesign;

			 int userID;

#pragma region Windows Form Designer generated code
		void InitializeComponent(void)
		{
			this->lblName = (gcnew System::Windows::Forms::Label());
			this->lblContact = (gcnew System::Windows::Forms::Label());
			this->lblEmail = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->btnPhoto = (gcnew System::Windows::Forms::Button());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->lblDOB = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->lblOffice = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->lblYear = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->lblResearch = (gcnew System::Windows::Forms::Label());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->lblDesign = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// lblName
			// 
			this->lblName->AutoSize = true;
			this->lblName->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 19.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
<<<<<<< HEAD
			this->lblName->Location = System::Drawing::Point(313, 280);
			this->lblName->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->lblName->Name = L"lblName";
			this->lblName->Size = System::Drawing::Size(51, 20);
=======
			this->lblName->Location = System::Drawing::Point(438, 53);
			this->lblName->Name = L"lblName";
			this->lblName->Size = System::Drawing::Size(112, 39);
>>>>>>> 36aa4f94eb02629aca74a67a2a1261333afb7216
			this->lblName->TabIndex = 0;
			this->lblName->Text = L"Name";
			// 
			// lblContact
			// 
			this->lblContact->AutoSize = true;
			this->lblContact->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
<<<<<<< HEAD
			this->lblContact->Location = System::Drawing::Point(313, 327);
			this->lblContact->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
=======
			this->lblContact->Location = System::Drawing::Point(599, 231);
>>>>>>> 36aa4f94eb02629aca74a67a2a1261333afb7216
			this->lblContact->Name = L"lblContact";
			this->lblContact->Size = System::Drawing::Size(65, 20);
			this->lblContact->TabIndex = 1;
			this->lblContact->Text = L"Contact";
			// 
			// lblEmail
			// 
			this->lblEmail->AutoSize = true;
			this->lblEmail->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
<<<<<<< HEAD
			this->lblEmail->Location = System::Drawing::Point(313, 379);
			this->lblEmail->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
=======
			this->lblEmail->Location = System::Drawing::Point(599, 268);
>>>>>>> 36aa4f94eb02629aca74a67a2a1261333afb7216
			this->lblEmail->Name = L"lblEmail";
			this->lblEmail->Size = System::Drawing::Size(48, 20);
			this->lblEmail->TabIndex = 2;
			this->lblEmail->Text = L"Email";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 19.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
<<<<<<< HEAD
			this->label1->Location = System::Drawing::Point(261, 26);
			this->label1->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(69, 24);
			this->label1->TabIndex = 3;
			this->label1->Text = L"Profile";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(196, 280);
			this->label2->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(55, 20);
			this->label2->TabIndex = 4;
			this->label2->Text = L"Name:";
=======
			this->label1->Location = System::Drawing::Point(260, 53);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(166, 39);
			this->label1->TabIndex = 3;
			this->label1->Text = L"Welcome";
>>>>>>> 36aa4f94eb02629aca74a67a2a1261333afb7216
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
<<<<<<< HEAD
			this->label3->Location = System::Drawing::Point(196, 327);
			this->label3->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
=======
			this->label3->Location = System::Drawing::Point(479, 231);
>>>>>>> 36aa4f94eb02629aca74a67a2a1261333afb7216
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(69, 20);
			this->label3->TabIndex = 5;
			this->label3->Text = L"Contact:";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
<<<<<<< HEAD
			this->label4->Location = System::Drawing::Point(196, 379);
			this->label4->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
=======
			this->label4->Location = System::Drawing::Point(499, 268);
>>>>>>> 36aa4f94eb02629aca74a67a2a1261333afb7216
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(52, 20);
			this->label4->TabIndex = 6;
			this->label4->Text = L"Email:";
			// 
			// pictureBox1
			// 
<<<<<<< HEAD
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(189, 65);
			this->pictureBox1->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(217, 202);
=======
			this->pictureBox1->Location = System::Drawing::Point(47, 166);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(297, 239);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
>>>>>>> 36aa4f94eb02629aca74a67a2a1261333afb7216
			this->pictureBox1->TabIndex = 7;
			this->pictureBox1->TabStop = false;
			// 
			// btnPhoto
			// 
			this->btnPhoto->Location = System::Drawing::Point(133, 517);
			this->btnPhoto->Name = L"btnPhoto";
			this->btnPhoto->Size = System::Drawing::Size(136, 59);
			this->btnPhoto->TabIndex = 8;
			this->btnPhoto->Text = L"Upload Photo";
			this->btnPhoto->UseVisualStyleBackColor = true;
			this->btnPhoto->Click += gcnew System::EventHandler(this, &ProfileForm::btnPhoto_Click);
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(499, 196);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(61, 25);
			this->label5->TabIndex = 9;
			this->label5->Text = L"DOB:";
			// 
			// lblDOB
			// 
			this->lblDOB->AutoSize = true;
			this->lblDOB->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblDOB->Location = System::Drawing::Point(597, 196);
			this->lblDOB->Name = L"lblDOB";
			this->lblDOB->Size = System::Drawing::Size(55, 25);
			this->lblDOB->TabIndex = 10;
			this->lblDOB->Text = L"DOB";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->Location = System::Drawing::Point(440, 306);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(125, 25);
			this->label7->TabIndex = 11;
			this->label7->Text = L"Office Room:";
			// 
			// lblOffice
			// 
			this->lblOffice->AutoSize = true;
			this->lblOffice->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblOffice->Location = System::Drawing::Point(599, 306);
			this->lblOffice->Name = L"lblOffice";
			this->lblOffice->Size = System::Drawing::Size(63, 25);
			this->lblOffice->TabIndex = 12;
			this->lblOffice->Text = L"Office";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label9->Location = System::Drawing::Point(440, 340);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(127, 25);
			this->label9->TabIndex = 13;
			this->label9->Text = L"Joining Year:";
			this->label9->Click += gcnew System::EventHandler(this, &ProfileForm::label9_Click);
			// 
			// lblYear
			// 
			this->lblYear->AutoSize = true;
			this->lblYear->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblYear->Location = System::Drawing::Point(599, 340);
			this->lblYear->Name = L"lblYear";
			this->lblYear->Size = System::Drawing::Size(53, 25);
			this->lblYear->TabIndex = 14;
			this->lblYear->Text = L"Year";
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label11->Location = System::Drawing::Point(396, 380);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(180, 25);
			this->label11->TabIndex = 15;
			this->label11->Text = L"Research Interests:";
			// 
			// lblResearch
			// 
			this->lblResearch->AutoSize = true;
			this->lblResearch->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblResearch->Location = System::Drawing::Point(597, 380);
			this->lblResearch->Name = L"lblResearch";
			this->lblResearch->Size = System::Drawing::Size(95, 25);
			this->lblResearch->TabIndex = 16;
			this->lblResearch->Text = L"Research";
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label13->Location = System::Drawing::Point(439, 531);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(121, 25);
			this->label13->TabIndex = 17;
			this->label13->Text = L"Designation:";
			// 
			// lblDesign
			// 
			this->lblDesign->AutoSize = true;
			this->lblDesign->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblDesign->Location = System::Drawing::Point(599, 531);
			this->lblDesign->Name = L"lblDesign";
			this->lblDesign->Size = System::Drawing::Size(115, 25);
			this->lblDesign->TabIndex = 18;
			this->lblDesign->Text = L"Designation";
			// 
			// ProfileForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
<<<<<<< HEAD
			this->ClientSize = System::Drawing::Size(625, 457);
=======
			this->ClientSize = System::Drawing::Size(810, 602);
			this->Controls->Add(this->lblDesign);
			this->Controls->Add(this->label13);
			this->Controls->Add(this->lblResearch);
			this->Controls->Add(this->label11);
			this->Controls->Add(this->lblYear);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->lblOffice);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->lblDOB);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->btnPhoto);
>>>>>>> 36aa4f94eb02629aca74a67a2a1261333afb7216
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->lblEmail);
			this->Controls->Add(this->lblContact);
			this->Controls->Add(this->lblName);
			this->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->Name = L"ProfileForm";
			this->Text = L"ProfileForm";
			this->Load += gcnew System::EventHandler(this, &ProfileForm::ProfileForm_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

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
<<<<<<< HEAD
	private: System::Void ProfileForm_Load(System::Object^  sender, System::EventArgs^  e) {
	}
};
}
=======

		void FetchUserData(int userID) {
			try {
				String^ query = "SELECT Name, DOB, Contact, Email, Office_room, Joining_Year, Research_Interests, Designation FROM faculty WHERE User_ID = @UserID";
				array<SqlParameter^>^ parameters = {
					gcnew SqlParameter("@UserID", System::Convert::ToString(userID))
				};

				SqlDataReader^ reader = DatabaseHelper::ExecuteQuery(query, parameters);

				if (reader->Read()) {
					lblName->Text = reader->GetString(0);
					lblDOB->Text = reader->IsDBNull(1) ? "null" : reader->GetDateTime(1).ToString(); // Check if the value is DBNull
					lblContact->Text = reader->GetString(2);
					lblEmail->Text = reader->GetString(3);
					lblOffice->Text = reader->IsDBNull(4) ? "null" : reader->GetString(4); // Check if the value is DBNull
					lblYear->Text = reader->IsDBNull(5) ? "null" : reader->GetInt32(5).ToString(); // Check if the value is DBNull

					// Split research interests by commas and join with newline characters
					lblResearch->Text = reader->IsDBNull(6) ? "null" : reader->GetString(6)->Replace(",", "\n");

					lblDesign->Text = reader->IsDBNull(7) ? "null" : reader->GetString(7); // Check if the value is DBNull
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
							pictureBox1->Image = Image::FromFile("..\\MediaFiles\\profile.jpg");
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
				String^ query = "UPDATE profile_photos SET Photo = @Photo WHERE User_ID = @UserID";
				array<SqlParameter^>^ parameters = {
					gcnew SqlParameter("@UserID", userID),
					gcnew SqlParameter("@Photo", photoData)
				};

				DatabaseHelper::ExecuteQuery(query, parameters);

				MessageBox::Show("Photo uploaded successfully.", "Success", MessageBoxButtons::OK, MessageBoxIcon::Information);
			}
			catch (SqlException^ ex) {
				MessageBox::Show(ex->Message, "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
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
};
}
>>>>>>> 36aa4f94eb02629aca74a67a2a1261333afb7216
