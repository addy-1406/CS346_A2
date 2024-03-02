#pragma once

using namespace System;

public ref class User{
public :
	int userID;	
	String ^email;
	String^ userType;
};

public ref class Student_data{
public:
	int userID;
	String ^email;
	String ^DOB;
	String ^Contact;
	int Enrollment_Year;
	String ^Address;
	String ^Name;
	int Current_semester;
};