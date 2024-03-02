#pragma once

#include "DatabaseHelper.h"

using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Drawing;
using namespace System::Data::SqlClient;

ref class TimeTable
{
public:

	static void algorithm(String^ sem, String^ type2, array<String^>^ slotArray, String^ compulsoryCourseRoom){
		// compulsory course
		String^ query = "Select * from course where L <> 0 and ElectiveOrCompulsory = 0 and semester = @sem";
		array<SqlParameter^>^ parameters1 = {
			gcnew SqlParameter("@sem", sem)
		};
		SqlDataReader^ dr = DatabaseHelper::ExecuteQuery(query,parameters1);
		int i = 0;
		while (dr->Read()){
			String^ Course_ID = dr->GetString(0);
			int L = dr->GetInt32(3);
			if (L != 0){
				String^ Room_ID = compulsoryCourseRoom;
				String^ Slot = slotArray[i++];
				query = "insert into timetable (Course_ID, Room_ID, Slot) values (@Course_ID, @Room_ID, @Slot)";
				array<SqlParameter^>^ parameters = {
					gcnew SqlParameter("@Course_ID", Course_ID),
					gcnew SqlParameter("@Room_ID", Room_ID),
					gcnew SqlParameter("@Slot", Slot)
				};
				SqlDataReader^ dr2 = DatabaseHelper::ExecuteQuery(query, parameters);
				dr2->Close();
			}
		}
		dr->Close();


		// elective
		int compulsory = i;
		query = "Select * from course where L <> 0 and ElectiveOrCompulsory = 1 and ( semester = @sem or semester = @type2)";
		array<SqlParameter^>^ parameters2 = {
			gcnew SqlParameter("@sem", sem),
			gcnew SqlParameter("@type2", type2)
		};
		dr = DatabaseHelper::ExecuteQuery(query, parameters2);
		while (dr->Read()){
			String^ Course_ID = dr->GetString(0);
			int L = dr->GetInt32(3);
			if (L != 0){
				String^ Room_ID = "X";
				String^ Slot = slotArray[i++];
				if (i >= 5){
					i = compulsory;
				}
				query = "insert into timetable (Course_ID, Room_ID, Slot) values (@Course_ID, @Room_ID, @Slot)";
				array<SqlParameter^>^ parameters = {
					gcnew SqlParameter("@Course_ID", Course_ID),
					gcnew SqlParameter("@Room_ID", Room_ID),
					gcnew SqlParameter("@Slot", Slot)
				};
				SqlDataReader^ dr2 = DatabaseHelper::ExecuteQuery(query, parameters);
				dr2->Close();
			}
		}
		dr->Close();
	}

	static void algorithmForLab(String^ sem, String^ type2, array<String^>^ slotArray, String^ lab){
		// compulsory course
		String^ query = "Select * from course where P <> 0 and ElectiveOrCompulsory = 0 and semester = @sem";
		array<SqlParameter^>^ parameters1 = {
			gcnew SqlParameter("@sem", sem)
		};
		SqlDataReader^ dr = DatabaseHelper::ExecuteQuery(query, parameters1);
		int i = 0;
		while (dr->Read()){
			String^ Course_ID = dr->GetString(0);
			int P = dr->GetInt32(5);
			if (P != 0){
				String^ Room_ID = lab;
				String^ Slot = slotArray[i++];
				query = "insert into timetable (Course_ID, Room_ID, Slot) values (@Course_ID, @Room_ID, @Slot)";
				array<SqlParameter^>^ parameters = {
					gcnew SqlParameter("@Course_ID", Course_ID),
					gcnew SqlParameter("@Room_ID", Room_ID),
					gcnew SqlParameter("@Slot", Slot)
				};
				SqlDataReader^ dr2 = DatabaseHelper::ExecuteQuery(query, parameters);
				dr2->Close();
			}
		}
		dr->Close();


		// elective
		int compulsory = i;
		query = "Select * from course where P <> 0 and ElectiveOrCompulsory = 1 and ( semester = @sem or semester = @type2)";
		array<SqlParameter^>^ parameters2 = {
			gcnew SqlParameter("@sem", sem),
			gcnew SqlParameter("@type2", type2)
		};
		dr = DatabaseHelper::ExecuteQuery(query, parameters2);
		while (dr->Read()){
			String^ Course_ID = dr->GetString(0);
			int P = dr->GetInt32(5);
			if (P != 0){
				String^ Room_ID = lab;
				String^ Slot = slotArray[i++];
				if (i >= 5){
					i = compulsory;
				}
				query = "insert into timetable (Course_ID, Room_ID, Slot) values (@Course_ID, @Room_ID, @Slot)";
				array<SqlParameter^>^ parameters = {
					gcnew SqlParameter("@Course_ID", Course_ID),
					gcnew SqlParameter("@Room_ID", Room_ID),
					gcnew SqlParameter("@Slot", Slot)
				};
				SqlDataReader^ dr2 = DatabaseHelper::ExecuteQuery(query, parameters);
				dr2->Close();
			}
		}
		dr->Close();
	}

	static void fillElectiveRoom(String^ Slot){
		array<String^>^ classroom = gcnew array<String^> {"5001", "5002", "5003", "5004","5101","5102","5103","5104","5201","5202","5203","5204"};
		String^ query = "Select * from timetable where Room_ID = @Room_ID and Slot = @Slot";
		array<SqlParameter^>^ parameters = {
			gcnew SqlParameter("@Room_ID", "X"),
			gcnew SqlParameter("@Slot",Slot)
		};
		SqlDataReader^ dr = DatabaseHelper::ExecuteQuery(query, parameters);
		int i = 0;
		while (dr->Read()){
			String^ Course_ID = dr->GetString(0);
			query = "update timetable set Room_ID = @Room_ID where Course_ID = @Course_ID";
			array<SqlParameter^>^ parameters = {
				gcnew SqlParameter("@Course_ID", Course_ID),
				gcnew SqlParameter("@Room_ID", classroom[i++])
			};
			SqlDataReader^ dr2 = DatabaseHelper::ExecuteQuery(query, parameters);
			dr2->Close();
		}
		dr->Close();
	}

	
	static void allocateSlots(){
		String^ query = "delete from timetable";
		SqlDataReader^ dr = DatabaseHelper::ExecuteQuery(query);


		// extract ROOM IDS
		array<String^>^ lectureHalls = gcnew array<String^> {"L1", "L2", "L3", "L4"};
		array<String^>^ labs = gcnew array<String^> {"HWS-101", "HWS-102", "HWS-103", "HWS-104"};

		array<String^>^ morningSlotArray = gcnew array<String^> { "A", "B", "C", "D", "E" };
		array<String^>^ eveningSlotArray = gcnew array<String^> { "A1", "B1", "C1", "D1", "E1" };
		//algorithm(1,eveningSlotArray);
		algorithm("2","X", eveningSlotArray, lectureHalls[0]);
		//algorithm(3, morningSlotArray);
		algorithm("4","X", morningSlotArray, lectureHalls[1]);
		//algorithm(5, eveningSlotArray);
		algorithm("6","X", eveningSlotArray, lectureHalls[2]);
		//algorithm(7, morningSlotArray);
		algorithm("8","6,8", morningSlotArray, lectureHalls[3]);

		array<String^>^ morningLabSlotArray = gcnew array<String^> { "ML1", "ML2", "ML3", "ML4", "ML5" };
		array<String^>^ eveningLabSlotArray = gcnew array<String^> { "AL1", "AL2", "AL3", "AL4", "AL5" };

		////////algorithm(1,eveningSlotArray);
		algorithmForLab("2", "X", eveningLabSlotArray, labs[0]);
		////////algorithm(3, morningSlotArray);
		algorithmForLab("4", "X", morningLabSlotArray, labs[1]);
		////////algorithm(5, eveningSlotArray);
		algorithmForLab("6", "X", eveningLabSlotArray, labs[2]);
		////////algorithm(7, morningSlotArray);
		algorithmForLab("8", "6,8", morningLabSlotArray, labs[3]);


		for (int i = 0; i < 5; i++){
			fillElectiveRoom(morningSlotArray[i]);
			fillElectiveRoom(eveningSlotArray[i]);
		}
	}
};