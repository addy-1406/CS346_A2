#pragma once

#include "DatabaseHelper.h"
#include <string.h>
#include <msclr/marshal_cppstd.h>
using namespace System::Security::Cryptography;
using namespace System::Text;

using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Drawing;
using namespace System::Data::SqlClient;

ref class MiscellaneousFunctions
{
public:
	static String^ FormatString(String^ str) {
		int newCount = Int32::Parse(str);
		String^ formattedStr = newCount.ToString("D3");
		return formattedStr;
	}
	static String^ generateUserIdProf(String^ JoiningYear){
		String^ query = "select count(User_ID) from [dbo].[faculty] where Joining_Year = @Year;";
		array<SqlParameter^>^ parameters = {
			gcnew SqlParameter("@joiningYear", JoiningYear)
		};
		SqlDataReader^ dr = DatabaseHelper::ExecuteQuery(query, parameters);
		dr->Read();
		String^ count = dr->GetString(0);
		dr->Close();
		String^ userId = JoiningYear + FormatString(count);
		return userId;
	}

	static String^ generateUserIdStudent(String^ JoiningYear){
		String^ query = "select count(User_ID) from [dbo].[faculty] where Joining_Year = @Year;";
		array<SqlParameter^>^ parameters = {
			gcnew SqlParameter("@joiningYear", JoiningYear)
		};
		SqlDataReader^ dr = DatabaseHelper::ExecuteQuery(query, parameters);
		dr->Read();
		String^ count = dr->GetString(0);
		dr->Close();
		String^ userId = JoiningYear + "1" + FormatString(count);
		return userId;
	}


	static String^ ComputeMD5Hash(String^ input) {
		array<Byte>^ hashBytes;

		// Convert the managed string to a standard C++ string
		std::string strInput = msclr::interop::marshal_as<std::string>(input);

		// Compute MD5 hash
		{
			MD5^ md5 = MD5::Create();
			hashBytes = md5->ComputeHash(Encoding::UTF8->GetBytes(input));
		}

		// Convert the hash bytes back to a managed string
		pin_ptr<Byte> pinnedHashBytes = &hashBytes[0];
		String^ result = BitConverter::ToString(hashBytes)->Replace("-", "");

		return result;
	}
};
