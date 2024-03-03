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
	/// Summary for Queries_Admin
	/// </summary>
	public ref class Queries_Admin : public System::Windows::Forms::Form
	{
	public:
		Queries_Admin(User^ User)
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
		~Queries_Admin()
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
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::RichTextBox^  richTextBox1;
	private: System::Windows::Forms::Button^  button2;

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
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->richTextBox1 = (gcnew System::Windows::Forms::RichTextBox());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// listView1
			// 
			this->listView1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(177)), static_cast<System::Int32>(static_cast<System::Byte>(212)),
				static_cast<System::Int32>(static_cast<System::Byte>(224)));
			this->listView1->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->listView1->CheckBoxes = true;
			this->listView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::ColumnHeader^  >(4) {
				this->ComplaintID, this->Desc,
					this->Status, this->Comments
			});
			this->listView1->Location = System::Drawing::Point(22, 18);
			this->listView1->Name = L"listView1";
			this->listView1->Size = System::Drawing::Size(915, 284);
			this->listView1->TabIndex = 35;
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
			// 
			// Comments
			// 
			this->Comments->Text = L"Comments";
			this->Comments->Width = 400;
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(20)), static_cast<System::Int32>(static_cast<System::Byte>(93)),
				static_cast<System::Int32>(static_cast<System::Byte>(160)));
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button1->Font = (gcnew System::Drawing::Font(L"Segoe UI Symbol", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->ForeColor = System::Drawing::Color::White;
			this->button1->Location = System::Drawing::Point(55, 164);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(176, 46);
			this->button1->TabIndex = 37;
			this->button1->Text = L"Resolve";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &Queries_Admin::button1_Click);
			// 
			// richTextBox1
			// 
			this->richTextBox1->Location = System::Drawing::Point(22, 358);
			this->richTextBox1->Name = L"richTextBox1";
			this->richTextBox1->Size = System::Drawing::Size(915, 124);
			this->richTextBox1->TabIndex = 36;
			this->richTextBox1->Text = L"";
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(20)), static_cast<System::Int32>(static_cast<System::Byte>(93)),
				static_cast<System::Int32>(static_cast<System::Byte>(160)));
			this->button2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button2->Font = (gcnew System::Drawing::Font(L"Segoe UI Symbol", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button2->ForeColor = System::Drawing::Color::White;
			this->button2->Location = System::Drawing::Point(397, 505);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(176, 46);
			this->button2->TabIndex = 38;
			this->button2->Text = L"Resolve";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &Queries_Admin::button2_Click);
			// 
			// Queries_Admin
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(177)), static_cast<System::Int32>(static_cast<System::Byte>(212)),
				static_cast<System::Int32>(static_cast<System::Byte>(224)));
			this->ClientSize = System::Drawing::Size(958, 578);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->listView1);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->richTextBox1);
			this->Name = L"Queries_Admin";
			this->Text = L"Queries_Admin";
			this->Load += gcnew System::EventHandler(this, &Queries_Admin::Queries_Admin_Load);
			this->ResumeLayout(false);

		}
#pragma endregion
		public: User^ user;
	
	public: System::Void get_Queries(){
				try{
					String^ query;

					query = "select * from Complaints";
					//MessageBox::Show(query);
					SqlDataReader^ dr = DatabaseHelper::ExecuteQuery(query);
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
	public: System::Void Resolve_query(){
				for each(Control^control in Controls){
					if (ListView::typeid == control->GetType()){

						ListView^ listView1 = safe_cast<ListView^>(control);
						for each(ListViewItem^ item in listView1->Items)
						{
							if (item->Checked){

								item->SubItems[2]->Text = "Resolved";
								try{
									String^ updateQuery = "UPDATE Complaints SET Status = 'Resolved' WHERE Complaint_ID = '" + item->Text + "'";
									String^ updateQuery1 = "UPDATE Complaints SET Comments = '" + richTextBox1->Text + " ' WHERE Complaint_ID = '" + item->Text + "'";
									SqlDataReader^ dr = DatabaseHelper::ExecuteQuery(updateQuery);
									dr = DatabaseHelper::ExecuteQuery(updateQuery1);
									MessageBox::Show("Query Resolved");
									item->Checked = false;
								}
								catch (Exception^ ex){
									MessageBox::Show(ex->Message);
								}
							}
						}
					}
				}
				richTextBox1->Text = "";
	}
	private: System::Void Queries_Admin_Load(System::Object^  sender, System::EventArgs^  e) {
				 get_Queries();
	}
private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
			 Resolve_query();
			 get_Queries();
}
};
}
