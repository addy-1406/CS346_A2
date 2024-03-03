#pragma once
#include "DatabaseHelper.h"
#include <string>


namespace CS346_A2 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for classroomlist
	/// </summary>
	public ref class classroomlist : public System::Windows::Forms::Form
	{
	public:
		classroomlist(void)
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
		~classroomlist()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::DataGridView^  dataGridView1;
	protected:
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column2;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column3;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::TextBox^  textBox2;
	private: System::Windows::Forms::TextBox^  textBox3;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label4;
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
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->Column1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column2 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column3 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->SuspendLayout();
			// 
			// dataGridView1
			// 
			this->dataGridView1->AllowUserToAddRows = false;
			this->dataGridView1->CellBorderStyle = System::Windows::Forms::DataGridViewCellBorderStyle::None;
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(3) {
				this->Column1,
					this->Column2, this->Column3
			});
			this->dataGridView1->Location = System::Drawing::Point(209, 70);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->RowHeadersVisible = false;
			this->dataGridView1->Size = System::Drawing::Size(305, 210);
			this->dataGridView1->TabIndex = 0;
			// 
			// Column1
			// 
			this->Column1->HeaderText = L"Room_ID";
			this->Column1->Name = L"Column1";
			this->Column1->ReadOnly = true;
			this->Column1->Width = 75;
			// 
			// Column2
			// 
			this->Column2->HeaderText = L"Capacity";
			this->Column2->Name = L"Column2";
			this->Column2->ReadOnly = true;
			this->Column2->Width = 75;
			// 
			// Column3
			// 
			this->Column3->HeaderText = L"Room_Type";
			this->Column3->Name = L"Column3";
			this->Column3->ReadOnly = true;
			this->Column3->Width = 150;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(316, 32);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(91, 13);
			this->label1->TabIndex = 1;
			this->label1->Text = L"List of Classrooms";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(362, 331);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(100, 20);
			this->textBox1->TabIndex = 2;
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(362, 379);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(100, 20);
			this->textBox2->TabIndex = 3;
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(362, 421);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(100, 20);
			this->textBox3->TabIndex = 4;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(209, 331);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(77, 13);
			this->label2->TabIndex = 5;
			this->label2->Text = L"Enter Room ID";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(206, 382);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(76, 13);
			this->label3->TabIndex = 6;
			this->label3->Text = L"Enter Capacity";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(206, 428);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(90, 13);
			this->label4->TabIndex = 7;
			this->label4->Text = L"Enter Room Type";
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->Location = System::Drawing::Point(545, 369);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(104, 30);
			this->button1->TabIndex = 8;
			this->button1->Text = L"INSERT";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &classroomlist::button1_Click);
			// 
			// classroomlist
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(177)), static_cast<System::Int32>(static_cast<System::Byte>(212)),
				static_cast<System::Int32>(static_cast<System::Byte>(224)));
			this->ClientSize = System::Drawing::Size(720, 476);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->dataGridView1);
			this->Margin = System::Windows::Forms::Padding(2);
			this->MaximumSize = System::Drawing::Size(736, 515);
			this->MinimumSize = System::Drawing::Size(736, 515);
			this->Name = L"classroomlist";
			this->Text = L"classroomlist";
			this->Load += gcnew System::EventHandler(this, &classroomlist::classroomlist_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion


		void display_classroom_list()
		{

			try
			{
				String^ query = "SELECT [Room_ID],[Capacity],[Room_Type] FROM [dbo].[classroom]";

				SqlDataReader^ reader = DatabaseHelper::ExecuteQuery(query);
				dataGridView1->Rows->Clear();

				while (reader->Read())
				{
					int Capacity = reader->GetInt32(1);

					String^ RoomID = reader->GetString(0);
					String^ RoomType = reader->GetString(2);
					// Add row to DataGridView
					dataGridView1->Rows->Add(RoomID, Capacity, RoomType);

				}

				// Close the reader
				reader->Close();
			}
			catch (SqlException^ ex)
			{
				// Handle SQL exceptions
				MessageBox::Show(ex->Message);
			}
		}

		void insert_into_db(){

			String^ roomid = textBox1->Text;
			String^ cap_str = textBox2->Text;
			String^ roomtype = textBox3->Text;

			int capacity = 0;
			try
			{
				capacity = Convert::ToInt32(cap_str);
			}
			catch (Exception^ ex)
			{
				MessageBox::Show("Enter valid integer value for capacity.");
				return;
			}



			try{
				String^	query = "INSERT INTO [dbo].[classroom] VALUES (@roomid, @cap_str, @roomtype)";
				array<SqlParameter^>^ parameters = {
					gcnew SqlParameter("@roomid", roomid),
					gcnew SqlParameter("@cap_str", capacity),
					gcnew SqlParameter("@roomtype", roomtype)
				};

				SqlDataReader^ dr = DatabaseHelper::ExecuteQuery(query, parameters);
				dr->Close();
				MessageBox::Show("Insertion Successfull");
			}
			catch (SqlException^ ex)
			{
				// Handle SQL exceptions
				MessageBox::Show(ex->Message);
			}


		}
	private: System::Void classroomlist_Load(System::Object^  sender, System::EventArgs^  e) {
				 display_classroom_list();

	}
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
				 insert_into_db();
				 display_classroom_list();
	}
	};
}
