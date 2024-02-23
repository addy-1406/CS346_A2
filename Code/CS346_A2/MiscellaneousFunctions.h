#pragma once

#include "DatabaseHelper.h"

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
	String^ FormatString(String^ str) {
		int newCount = Int32::Parse(str);
		String^ formattedStr = newCount.ToString("D3");
		return formattedStr;
	}
	String^ generateUserIdProf(String^ JoiningYear){
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

	String^ generateStudentIdProf(String^ JoiningYear){
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
};
