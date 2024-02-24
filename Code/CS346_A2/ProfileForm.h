#pragma once
#include "User.h"

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
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::PictureBox^  pictureBox1;
	private: System::Windows::Forms::Button^  btnPhoto;

	private:
		System::ComponentModel::Container ^components;
		int userID;

#pragma region Windows Form Designer generated code
		void InitializeComponent(void)
		{
			this->lblName = (gcnew System::Windows::Forms::Label());
			this->lblContact = (gcnew System::Windows::Forms::Label());
			this->lblEmail = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->btnPhoto = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// lblName
			// 
			this->lblName->AutoSize = true;
			this->lblName->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblName->Location = System::Drawing::Point(417, 344);
			this->lblName->Name = L"lblName";
			this->lblName->Size = System::Drawing::Size(64, 25);
			this->lblName->TabIndex = 0;
			this->lblName->Text = L"Name";
			// 
			// lblContact
			// 
			this->lblContact->AutoSize = true;
			this->lblContact->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblContact->Location = System::Drawing::Point(417, 403);
			this->lblContact->Name = L"lblContact";
			this->lblContact->Size = System::Drawing::Size(80, 25);
			this->lblContact->TabIndex = 1;
			this->lblContact->Text = L"Contact";
			// 
			// lblEmail
			// 
			this->lblEmail->AutoSize = true;
			this->lblEmail->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblEmail->Location = System::Drawing::Point(417, 466);
			this->lblEmail->Name = L"lblEmail";
			this->lblEmail->Size = System::Drawing::Size(60, 25);
			this->lblEmail->TabIndex = 2;
			this->lblEmail->Text = L"Email";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(348, 32);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(90, 29);
			this->label1->TabIndex = 3;
			this->label1->Text = L"Profile";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(262, 344);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(70, 25);
			this->label2->TabIndex = 4;
			this->label2->Text = L"Name:";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(262, 403);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(86, 25);
			this->label3->TabIndex = 5;
			this->label3->Text = L"Contact:";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(262, 466);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(66, 25);
			this->label4->TabIndex = 6;
			this->label4->Text = L"Email:";
			// 
			// pictureBox1
			// 
			this->pictureBox1->Location = System::Drawing::Point(238, 85);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(297, 239);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox1->TabIndex = 7;
			this->pictureBox1->TabStop = false;
			// 
			// btnPhoto
			// 
			this->btnPhoto->Location = System::Drawing::Point(323, 526);
			this->btnPhoto->Name = L"btnPhoto";
			this->btnPhoto->Size = System::Drawing::Size(136, 59);
			this->btnPhoto->TabIndex = 8;
			this->btnPhoto->Text = L"Upload Photo";
			this->btnPhoto->UseVisualStyleBackColor = true;
			this->btnPhoto->Click += gcnew System::EventHandler(this, &ProfileForm::btnPhoto_Click);
			// 
			// ProfileForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(833, 631);
			this->Controls->Add(this->btnPhoto);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->lblEmail);
			this->Controls->Add(this->lblContact);
			this->Controls->Add(this->lblName);
			this->Name = L"ProfileForm";
			this->Text = L"ProfileForm";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private:
		void btnPhoto_Click(System::Object^ sender, System::EventArgs^ e) {
			OpenFileDialog^ openFileDialog1 = gcnew OpenFileDialog();
			openFileDialog1->Filter = "Image Files (.bmp;.jpg;.jpeg,.gif,.png,.tif)|.bmp;.jpg;.jpeg;.gif;.png;.tif";

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

		void FetchUserData(int userID) {
			String^ constr = "Server=sql6.freemysqlhosting.net;Uid=sql6684530;Pwd=SaH3N2pscd;Database=sql6684530";
			MySqlConnection^ con = gcnew MySqlConnection(constr);

			try {
				con->Open();
				String^ query = "SELECT Name, Contact, Email, Photo FROM faculty WHERE User_ID = @UserID";
				MySqlCommand^ cmd = gcnew MySqlCommand(query, con);
				cmd->Parameters->AddWithValue("@UserID", userID);
				MySqlDataReader^ reader = cmd->ExecuteReader();

				if (reader->Read()) {
					lblName->Text = reader->GetString(0);
					lblContact->Text = reader->GetString(1);
					lblEmail->Text = reader->GetString(2);

					// Check if the photo field is not null
					if (reader["Photo"] != nullptr && reader["Photo"] != DBNull::Value) {
						array<Byte>^ imgData = dynamic_cast<array<Byte>^>(reader["Photo"]);
						System::IO::MemoryStream^ ms = gcnew System::IO::MemoryStream(imgData);
						pictureBox1->Image = System::Drawing::Image::FromStream(ms);
					}
					else {
						// If image data is null, set default image
						// Set default image if database image is null
						pictureBox1->Image = Image::FromFile("MediaFiles\\profile.jpg");
					}
				}

				reader->Close();
			}
			catch (MySqlException^ ex) {
				MessageBox::Show(ex->Message, "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
			}
			finally {
				con->Close();
			}
		}

		void UploadImageToDatabase(array<Byte>^ imageArray, int userID) {
			String^ constr = "Server=sql6.freemysqlhosting.net;Uid=sql6684530;Pwd=SaH3N2pscd;Database=sql6684530";
			MySqlConnection^ con = gcnew MySqlConnection(constr);

			try {
				con->Open();
				String^ query = "UPDATE faculty SET Photo = @Photo WHERE User_ID = @UserID";
				MySqlCommand^ cmd = gcnew MySqlCommand(query, con);
				cmd->Parameters->AddWithValue("@Photo", imageArray);
				cmd->Parameters->AddWithValue("@UserID", userID);
				cmd->ExecuteNonQuery();
			}
			catch (MySqlException^ ex) {
				MessageBox::Show(ex->Message, "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
			}
			finally {
				con->Close();
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
	};
}