# CS346_Assignment2

## Database Details

link: http://www.phpmyadmin.co\
Server: sql6.freemysqlhosting.net\
Name: sql6684530\
User name: sql6684530\
Password: SaH3N2pscd\
Port number: 3306\

## Instructions for setting up

1. Install Visual Studio 2013
2. Install the connector from https://downloads.mysql.com/archives/c-net/
3. Download and install version 6.9.9 of the connector
4. Next download the project and run.
5. Connecting with database is already handled.
6. In case of any issues call Mandal.
7. To see and use the database, it is advised to connect the databse to MySQL Workbench
   or to clone it to a local database server and manage with phpmyadmin on localhost.
8. You can use it directly from the internet but it will be very slow

## Sample code for running insert queries into the database tables

```cpp
String^ constr = "Server=sql6.freemysqlhosting.net;Uid=sql6684530;Pwd=SaH3N2pscd;Database=sql6684530";
MySqlConnection^ con = gcnew MySqlConnection(constr);

String^ query = "INSERT INTO signup (Name, DOB, Contact, Address, Email, UserType, Password_hash) VALUES (@Name, @Date, @Contact, @Address, @Email, @UserType, MD5(@Password));";
MySqlCommand^ cmd = gcnew MySqlCommand(query, con);

cmd->Parameters->AddWithValue("@Name", name);
cmd->Parameters->AddWithValue("@Date", formattedDate);
cmd->Parameters->AddWithValue("@Contact", contact);
cmd->Parameters->AddWithValue("@Address", address);
cmd->Parameters->AddWithValue("@Email", email);
cmd->Parameters->AddWithValue("@UserType", userType);
cmd->Parameters->AddWithValue("@Password", password);

con->Open();
MySqlDataReader^ dr;
dr = cmd->ExecuteReader();
dr->Close();
```

## Sample code for running select queries into the database tables

```cpp
String^ constr = "Server=sql6.freemysqlhosting.net;Uid=sql6684530;Pwd=SaH3N2pscd;Database=sql6684530";
MySqlConnection^ con = gcnew MySqlConnection(constr);

String^ query = "select Email from auth where email= @Email";
MySqlCommand^ cmd = gcnew MySqlCommand(query, con);
cmd->Parameters->AddWithValue("@Email", email);

con->Open();	
MySqlDataReader^ dr;
dr = cmd->ExecuteReader();

while (dr->Read()){
    // each iteration corresponds to a particular record

    // this is how you can extract a particular column value, for example if the first field was user_id, use GetString(0) (as zero indexing is used) to get the value of userId
    String^ userId = dr->GetString(0); 
}
dr->Close();
```

## Other instructions

1. In case of any changes to the database structure, contact soumya or mandal as we already 
   have the local server set up
2. The startup login page will redirect accordingly and you have to work on three pages - 
   Student, faculty, admin home page.
3. The form redirections have been handled already.
4. Some fields have been added in the other pages also. There also the multiple forms have
   been made. the main homepage of each user will have a panel which can include an innerform.
   So you just have to edit the innerforms of the users
5. If you have any doubts then call me or mandal. 
6. Meet tonight after dinner at 10:30 pm - 17th feb.
7. Preferably make changes only to your portion of the code and not touch the other forms.
8. Push any changes made to the corresponding branch for student, faculty and admin.
9. Merging will be handled by mandal.


## Features in pages 
0. Note : For now we will only consider one academic year. So each course will be present only once. Later we will 
   need to add the year of the course like 2020 - CS346 and 2021 - CS346. So just keep this in mind but do not explicitly
   use this assumption while any data retrieval that would make it hard to change later.
1. Dash board will have the different pages that the user can browse through on the left.
2. the right side will render the inner form.
3. Student - Dash board options
        3.2 Student profile page -\
            a. Just display the student data from the student table\
        3.1 Course enroll page -\
            a. Left side will have list of eligible courses fetched from the database\
            b. on the right show details of the course and a register button \
        3.2 Registered courses - \
            a. List of courses registered with approval status and grade\
        3.3 Fee Payment - \
            a. just keep the button for now. We will tell the TA that we are going to add it if we have time\
        3.4 View timetable - just keep the button\
        3.5 View exam details - just keep the button\
        3.6 Logout button -\
            a. nothing to do. already handled.\
4. Faculty - 
        4.1 Profile\
        4.2 Courses page -\
            a. Same as student course enroll page without the option to register\
        4.3 Add course - \
            a. Course add form\
        4.4 Approve students - \
            a. On the top of the page choose the course \
            b. Below that database view of students registered for the course with student userid, name, email\
            c. below that approve/reject button\
        4.5 Give grades - \
            a. choose course and then student and then grade\
        4.6 View timetable - just keep the button\
        4.7 Logout button -\
            a. nothing to do. already handled.\
5. Admin -
        5.1 Courses database and edit options\
        5.2 registration requests and approve/reject button\
        5.3 Add admin page - to add other admins to the auth database\
        5.4 View timetable - just keep the button\
        5.5 View exam details - just keep the button\
        4.8 Logout button -\
            a. nothing to do. already handled.\
