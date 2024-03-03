#pragma once

using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Drawing;
using namespace System::Data::SqlClient;


ref class SeatingHelper
{
public:

	static SqlDataReader^ fetchSeating(String^ query)
	{
		try {
			String^ connectionString = "Server=tcp:cs346.database.windows.net,1433;Initial Catalog=ass2;Persist Security Info=False;User ID=superuser;Password=Admin@123;MultipleActiveResultSets=False;Encrypt=True;TrustServerCertificate=False;Connection Timeout=30;";
			SqlConnection^ con = gcnew SqlConnection(connectionString);

			if (con->State == ConnectionState::Open) {
				con->Close();
			}

			SqlCommand^ cmd = gcnew SqlCommand(query, con);

			con->Open();
			SqlDataReader^ dr = cmd->ExecuteReader();

			return dr;
		}
		catch (Exception^ ex) {
			MessageBox::Show(ex->Message);
			return nullptr;
		}
	}
};
