#include <iostream>
#include <fstream>
#include <string>
#include <conio.h>
#include <windows.h>

using namespace std;

//Structure defining

//For students
struct student
{
 string fname;//for student first name
 string lname;//for student last name
 int Registration;//for Registration number
 int no_of_Courses;
 string Programme;//for class info
 int Student_ID;
 string Courses;
}studentData;//Variable of student type

//For teachers
struct teacher
{
 string fst_name;//first name of teacher
 string lst_name;//last name of teacher
 string qualification;//Qualification of teacher


 string subj;//subject taught
 string lec;//Lecture per Week
 int staff_id;
 int cel_no;//Phone number



}tech[50];//Variable of teacher type

//Main function

int main()
{



int i=0,j;//for processing usage
int f;
char choice;//for getting choice
string find;//for sorting
string srch;

while(1)//outer loop
{
 system("cls");//Clear screen

//Level 1-Display process
 cout<<"\t\t\t\t\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\";
 cout<<"\n\n\t\t\t\t\t  SCHOOL DATA ENTTY SYSTEM\n\n";
 cout<<"\t\t\t\t\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\";
 cout<<"\n\n\t\t\t\t\t\t:MAIN SECTION:\n\n";
 cout<<"\t\t\t\t\t1. Student Information"<<endl;
 cout<<"\t\t\t\t\t2. Teacher Information"<<endl;
 cout<<"\t\t\t\t\t3. Exit Program"<<endl;
  cout<<"\n\n\t\t\t\tEnter Your Choice: ";
 cin>>choice;

system("cls");//Clear screen

switch(choice)//First switch
{

case '1': //Student
 {
while(1)//inner loop-1
{
system("cls");
//Second display
cout<<"\t\t\t\tSTUDENTS INFORMATION AND BIO DATA SECTION\n\n\n";
cout<<"\t\t\t\t\t1. Create new entry\n";
cout<<"\t\t\t\t\t2. Find and display entry\n";
cout<<"\t\t\t\t\t3. Jump to main\n";
cout<<"\n\n\t\t\t\tEnter your choice: ";
cin>>choice;

switch (choice)//Second switch

{
case '1'://Insert data
{  ofstream f1("student.txt",ios::app);

for( i=0;choice!='n';i++)
{

if((choice=='y')||(choice=='Y')||(choice=='1'))
{
	system("CLS");
 cout << "\t\t\t\t\tNEW ENTRY\n\n";
 cout << "\t\t\t\t\tEnter First name: ";
 cin >> studentData.fname;
 cout << "\n\t\t\t\t\tEnter Last Name: ";
 cin >> studentData.lname;
 cout << "\n\t\t\t\t\tEnter Registration Number: ";
 cin >> studentData.Registration;
 studentData.Student_ID = studentData.Registration + 11;
 cout << "\n\t\t\t\t\tEnter Programme: ";

 cin >> studentData.Programme;
 cout << "\n\t\t\t\t\tEnter Number the of Courses Registered for The Semester: ";
 cin >> studentData.no_of_Courses;

 cout << "\n\t\t\t\t\tEnter Courses For the Semester: ";


 for (f = 0;f <= studentData.no_of_Courses; f++)
 {
     cin >> studentData.Courses;
 }


 f1 << studentData.fname << endl<<studentData.lname << endl << studentData.Registration << endl << studentData.Programme << endl << studentData.no_of_Courses << endl << studentData.Courses << endl;
 cout << "\n\n\t\t\t\t\tYour Student ID is " << studentData.Student_ID << endl;
 cout << "\n\n\t\t\t\t\tDo you want to enter data: ";
 cout << "\n\t\t\t\t\tPress Y for Continue and N to Finish:  ";
 cin >> choice;
}
}
f1.close();
}
continue;//control back to inner loop -1

case '2'://Display data
{  ifstream f2("student.txt");
system("CLS");
cout << "\n\t\t\t\tDISPLAY STUDENT'S ENTRY\n";
cout << "\n\t\t\t\t\tEnter First name to be displayed: ";
cin >> find;
cout << endl;
int notFound = 0;
for( j=0;(j<i)||(!f2.eof());j++)
{

getline(f2,studentData.fname);

if(studentData.fname==find)
{
 notFound = 1;
 cout << "\n\t\t\t\t\tFirst Name: "<<studentData.fname<<endl;
 cout << "\n\t\t\t\t\tLast Name: "<<studentData.lname<<endl;

 cout << "\n\t\t\t\t\tRegistration Number: "<< studentData.Registration << endl;

 cout << "\n\t\t\t\t\tProgramme: "<<studentData.Programme << endl << endl;
 cout << "\n\t\t\t\t\tStudent ID : " << studentData.Student_ID << endl << endl;
 cout << "\n\t\t\t\t\tNumber of courses for the semester: " << studentData.no_of_Courses << endl << endl;
 cout << "\n\t\t\t\t\tCourses for the semester: " << studentData.Courses << endl<< endl;
}

}


if(notFound == 0){

cout<<"\n\t\t\tNo Record Found"<<endl;
cout<<"\n\t\t\tPlease Check Your Spelling And Try Again" << endl;
}
f2.close();
cout << "\n\t\t\t\t\tOr press any key two times to proceed";
getch();//To hold data on screen
getch();//To hold data on screen

}
continue;//Takes you back to inner loop -1

case '3'://Jumps to main
{
break;//inner switch breaking
}
}

break;//inner loop-1 breaking
}
continue;//Control pass to 1st loop
}

case '2'://Teachers biodata
{
while(1)//inner loop-2
{
system("cls");//Clear screen
//Level-2 Display process
cout<<"\t\t\t\tINSTRUCTOR INFORMATION AND BIODATA SECTION\n\n\n";
cout<<"\t\t\t\t\t1. Create new entry\n";
cout<<"\t\t\t\t\t2. Find and display\n";
cout<<"\t\t\t\t\t3. Jump to main\n";
cout<<"\n\n\t\t\t\tEnter your choice: ";
cin>>choice;

switch (choice)//Third switch
{
case '1'://Insert data
{
ofstream t1("teacher.txt",ios::app);

for(i=0;choice!='n'&& choice!='N';i++)
{

 if((choice=='y')||(choice=='Y')||(choice=='1'))
 {
 	system("CLS");
  cout<<"\t\t\t\t\tEnter First name: ";
  cin>>tech[i].fst_name;
  cout<<"\n\t\t\t\t\tEnter Last name:: ";
  cin>>tech[i].lst_name;
  cout<<"\n\t\t\t\t\tEnter Qualification: ";
  cin>>tech[i].qualification;




  cout<<"\n\t\t\t\t\tEnter Subject: ";
  cin>>tech[i].subj;
  cout<<"\n\t\t\t\t\tEnter Lecture(per Week): ";
  cin>>tech[i].lec;


  cout<<"\n\t\t\t\t\tEnter Phone Number: ";
  cin>>tech[i].cel_no;


  t1<<tech[i].fst_name<<endl<<tech[i].lst_name<<endl
   <<tech[i].qualification<<endl<<endl
   <<endl<<tech[i].subj<<endl<<tech[i].lec
   <<endl<<endl<<tech[i].cel_no<<endl;
  cout<<"\n\n\t\t\t\t\tDo you want to enter data: ";
  cin>>choice;
 }//if
}//for loop
//for finding through name
system("cls");

t1.close();
}//case 1

continue;//Control pass to inner loop-2

case '2'://Display data
{
ifstream t2("teacher.txt");
system("CLS");
cout<<"\n\t\t\t\tDISPLAY TEACHER'S ENTRY\n";
cout<<"\n\t\t\t\t\tEnter name to be displayed: ";
cin>>find;

cout<<endl;
int notFound = 0;
for( j=0;((j<i)||(!t2.eof()));j++)
{

 getline(t2,tech[j].fst_name);

 if(tech[j].fst_name==find)
 {
  notFound = 1;
  cout<<"\n\t\t\t\t\tFirst name: "<<tech[j].fst_name<<endl;
  getline(t2,tech[j].lst_name);
  cout<<"\n\t\t\t\t\tLast name: "<<tech[j].lst_name<<endl;
  getline(t2,tech[j].qualification);
  cout<<"\n\t\t\t\t\tQualification: "<<tech[j].qualification<<endl;




  getline(t2,tech[j].subj);
  cout<<"\n\t\t\t\t\tSubject: "<<tech[j].subj<<endl;

  getline(t2,tech[j].lec);
  cout<<"\n\t\t\t\t\tLecture (per Week): "<<tech[j].lec<<endl;





 }//if

}//for loop
t2.close();
if(notFound == 0){

 cout<<"\n\t\t\tNo Record Found"<<endl;
}
cout<<"Press any key two times to proceed";
getch();//To hold data on screen
getch();//To hold data on screen
}//case 2

continue;//Control pass to inner loop-2

case '3'://Jump to main
{
break;//inner switch
}//case 3

}//inner switch

break;//inner while
}//inner loop

continue;//control pass to 1st loop
}//outer case 2

case '3':
{
	cout<<"\n Brought To You By code-projects.org";
break;//outer case 3
}//outer case 3
}
break;//outer loop
}
}


