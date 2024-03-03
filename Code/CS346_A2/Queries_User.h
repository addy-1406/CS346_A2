#pragma once
#include "User.h"
#include "DatabaseHelper.h"

namespace CS346_A2 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Queries_User
	/// </summary>
	public ref class Queries_User : public System::Windows::Forms::Form
	{
	public:
		Queries_User(User^ User)
		{
			InitializeComponent();
			user = User;
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~Queries_User()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::ListView^  listView1;
	protected:
	private: System::Windows::Forms::ColumnHeader^  ComplaintID;
	private: System::Windows::Forms::ColumnHeader^  Desc;
	private: System::Windows::Forms::ColumnHeader^  Status;
	private: System::Windows::Forms::ColumnHeader^  Comments;
	private: System::Windows::Forms::RichTextBox^  richTextBox1;
	private: System::Windows::Forms::Button^  button1;




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
			this->ComplaintID = (gcnew System::Windows::Forms::ColumnHeader());
			this->Desc = (gcnew System::Windows::Forms::ColumnHeader());
			this->Status = (gcnew System::Windows::Forms::ColumnHeader());
			this->Comments = (gcnew System::Windows::Forms::ColumnHeader());
			this->richTextBox1 = (gcnew System::Windows::Forms::RichTextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// listView1
			// 
			this->listView1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(177)), static_cast<System::Int32>(static_cast<System::Byte>(212)),
				static_cast<System::Int32>(static_cast<System::Byte>(224)));
			this->listView1->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->listView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::ColumnHeader^  >(4) {
				this->ComplaintID, this->Desc,
					this->Status, this->Comments
			});
			this->listView1->Location = System::Drawing::Point(21, 36);
			this->listView1->Name = L"listView1";
			this->listView1->Size = System::Drawing::Size(915, 276);
			this->listView1->TabIndex = 32;
			this->listView1->UseCompatibleStateImageBehavior = false;
			this->listView1->View = System::Windows::Forms::View::Details;
			// 
			// ComplaintID
			// 
			this->ComplaintID->Text = L"ComplaintID";
			this->ComplaintID->Width = 100;
			// 
			// Desc
			// 
			this->Desc->Text = L"Desc";
			this->Desc->Width = 350;
			// 
			// Status
			// 
			this->Status->Text = L"Status";
			this->Status->Width = 80;
			// 
			// Comments
			// 
			this->Comments->Text = L"Comments";
			this->Comments->Width = 380;
			// 
			// richTextBox1
			// 
			this->richTextBox1->Font = (gcnew System::Drawing::Font(L"Segoe UI Symbol", 10.2F));
			this->richTextBox1->Location = System::Drawing::Point(21, 318);
			this->richTextBox1->Name = L"richTextBox1";
			this->richTextBox1->Size = System::Drawing::Size(915, 158);
			this->richTextBox1->TabIndex = 33;
			this->richTextBox1->Text = L"";
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(20)), static_cast<System::Int32>(static_cast<System::Byte>(93)),
				static_cast<System::Int32>(static_cast<System::Byte>(160)));
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button1->Font = (gcnew System::Drawing::Font(L"Segoe UI Symbol", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->ForeColor = System::Drawing::Color::White;
			this->button1->Location = System::Drawing::Point(391, 509);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(176, 46);
			this->button1->TabIndex = 34;
			this->button1->Text = L"Submit ";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &Queries_User::button1_Click);
			// 
			// Queries_User
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(177)), static_cast<System::Int32>(static_cast<System::Byte>(212)),
				static_cast<System::Int32>(static_cast<System::Byte>(224)));
			this->ClientSize = System::Drawing::Size(958, 578);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->richTextBox1);
			this->Controls->Add(this->listView1);
			this->Name = L"Queries_User";
			this->Text = L"Queries_User";
			this->Load += gcnew System::EventHandler(this, &Queries_User::Queries_User_Load);
			this->ResumeLayout(false);

		}
#pragma endregion
	public: User^ user;
	public: System::Void add_complaint(User^ user){
				try{
					String^ query;

					query = "select count(*) from Complaints";
					//MessageBox::Show(query);
					SqlDataReader^ dr = DatabaseHelper::ExecuteQuery(query);
					//MessageBox::Show("Retrive success");
					dr->Read();
					int x = dr->GetInt32(0);
					dr->Close();

					query = "INSERT INTO Complaints values (@email,@desc,'Pending','NA',@CID)";
					array<SqlParameter^>^ parameters = {
						gcnew SqlParameter("@email", user->email),
						gcnew SqlParameter("@desc", richTextBox1->Text->ToString()),
						gcnew SqlParameter("@CID", x+1)

					};
					dr = DatabaseHelper::ExecuteQuery(query, parameters);
					dr->Close();

				}
				catch (Exception^ ex){
					MessageBox::Show(ex->Message);
				}
	}
	public: System::Void get_Queries(User^ user){
				try{
					String^ query;

					query = "select * from Complaints where Email = @email";

					array<SqlParameter^>^ parameters = {
						gcnew SqlParameter("@email", user->email)

					};
					//MessageBox::Show(query);


					SqlDataReader^ dr = DatabaseHelper::ExecuteQuery(query, parameters);
					//MessageBox::Show("Retrive success");

					listView1->Items->Clear();
					bool col = true;
					//MessageBox::Show("Retrive success");
					while (dr->Read()) {
						int ComplaintID = dr->GetInt32(4);
						String^ Desc = dr->GetString(1);
						String^ Comments = dr->GetString(3);
						String^ Status = dr->GetString(2);

						ListViewItem^ item = gcnew ListViewItem(ComplaintID.ToString());
						item->SubItems->Add(Desc->ToString());
						item->SubItems->Add(Status->ToString());
						item->SubItems->Add(Comments->ToString());
						if (col)
						{
							item->BackColor = Color::LightGray;
							col = false;
						}
						else
						{
							item->BackColor = Color::White;
							col = true;
						}
						listView1->Items->Add(item);

					}
				}
				catch (Exception^ ex){
					MessageBox::Show(ex->Message);
				}

	}
	private: System::Void Queries_User_Load(System::Object^  sender, System::EventArgs^  e) {
				 get_Queries(user);
	}
private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
			 add_complaint(user);
			 get_Queries(user);
}
};
}
