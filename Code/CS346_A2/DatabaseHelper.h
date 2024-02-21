#pragma once

using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Drawing;
using namespace MySql::Data::MySqlClient;

ref class DatabaseHelper
{
public:
	static MySqlDataReader^ ExecuteQuery(String^ query, array<MySqlParameter^>^ parameters)
	{
		try {
			String^ connectionString = "Server=sql6.freemysqlhosting.net;Uid=sql6684530;Pwd=SaH3N2pscd;Database=sql6684530";
			MySqlConnection^ con = gcnew MySqlConnection(connectionString);

			if (con->State == ConnectionState::Open) {
				con->Close();
			}

			MySqlCommand^ cmd = gcnew MySqlCommand(query, con);

			for each (MySqlParameter^ parameter in parameters) {
				cmd->Parameters->Add(parameter);
			}

			con->Open();
			MySqlDataReader^ dr = cmd->ExecuteReader();

			return dr;
		}
		catch (Exception^ ex) {
			MessageBox::Show("Here: " + ex->Message);
			return nullptr;
		}
	}

	static MySqlDataReader^ ExecuteQuery(String^ query)
	{
		try {
			String^ connectionString = "Server=sql6.freemysqlhosting.net;Uid=sql6684530;Pwd=SaH3N2pscd;Database=sql6684530";
			MySqlConnection^ con = gcnew MySqlConnection(connectionString);

			if (con->State == ConnectionState::Open) {
				con->Close();
			}

			MySqlCommand^ cmd = gcnew MySqlCommand(query, con);

			con->Open();
			MySqlDataReader^ dr = cmd->ExecuteReader();

			return dr;
		}
		catch (Exception^ ex) {
			MessageBox::Show(ex->Message);
			return nullptr;
		}
	}
};
