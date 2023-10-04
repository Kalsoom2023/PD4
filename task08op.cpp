#include<iostream>
#include<windows.h>
using namespace std;
void calculateAggregate(string, float, float, float);
void compareMarks(string, int, string, int);
void printMenu();
int main()
{
float choice,matricMarksStd1,matricMarksStd2,interMarksStd1,interMarksStd2,ecatMarksStd2,ecatMarksStd1;
	string nameStd1,nameStd2;
	
while(true)
{
   printMenu();
   cout<<"Your choice: ";
cin>> choice;
if(choice==1)
{
	system("cls");
	cout<<"You chose 1"<<endl;
	cout<<"Enter your name: ";
	cin>> nameStd1;
	cout<<"Enter your matric marks out of 1100: ";
	cin>> matricMarksStd1;
	cout<<"Enter your inter marks out of 550: ";
	cin>> interMarksStd1;
	cout<<"Enter your ecat marks out of 400: ";
	cin>>ecatMarksStd1;
	system("cls");
	
	
}
if(choice==2)
{
	system("cls");
	cout<<"You chose 2"<<endl;
	cout<<"Enter your name: ";
	cin>> nameStd2;
	cout<<"Enter your matric marks out of 1100: ";
	cin>> matricMarksStd2;
	cout<<"Enter your inter marks out of 550: ";
	cin>> interMarksStd2;
	cout<<"Enter your ecat marks out of 400: ";
	cin>>ecatMarksStd2;
	system("cls");
}
if(choice==3)
{
	system("cls");
calculateAggregate( nameStd1,matricMarksStd1,interMarksStd1,ecatMarksStd1 );
Sleep(400);
system("cls");	
}
if(choice==4)
{
	system("cls");
calculateAggregate(nameStd2,matricMarksStd2,interMarksStd2,ecatMarksStd2);
Sleep(400);
system("cls");	
}
if(choice==5)
{
	system("cls");
  compareMarks( nameStd1,ecatMarksStd1, nameStd2,ecatMarksStd2);
  Sleep(400);	
}
}

}
void calculateAggregate1(string nameStd1, int matricMarksStd1, int interMarksStd1, int ecatMarksStd1)
{
	
	cout<<nameStd1<<"'s aggregate is: "<<0.3*matricMarksStd1+0.3*interMarksStd1+0.4*ecatMarksStd1;
	
}
void calculateAggregate(string name, float matricMarks, float interMarks, float ecatMarks)
{
    float aggregate;
    aggregate = ((matricMarks/1100)*30) + ((interMarks/550)*30) + ((ecatMarks/400)*40);
    cout << "The Aggregate for Admission  is: " <<aggregate <<"%" << endl;
}
void compareMarks(string nameStd1,int ecatMarksStd1, string nameStd2, int ecatMarksStd2)
{
	if(ecatMarksStd1>ecatMarksStd2)
	{
		cout<<"Roll number1 is first student";
	}
	if(ecatMarksStd2>ecatMarksStd1)
{
	cout<<"Roll number 1 is 2nd student"<<endl;
}
}
void printMenu()
{
cout<<"*********************"<<endl;
cout<<"*     UET LAHORE    *"<<endl;
cout<<"*********************"<<endl;
cout<<endl;
cout<<endl;
cout<<"WELCOME TO UET ADMISSION MANAGEMENT SYSTEM"<<endl;
cout<<endl;
cout<<"Press 1 to enter the details of first student!"<<endl;
cout<<"Press 2 to enter the details of second student!"<<endl;
cout<<"Press 3 to calculate aggregate of first student!"<<endl;
cout<<"Press 4 to calculate aggregate of second student:"<<endl;
cout<<"Press 5 to calculate student with 1st roll number!"<<endl;
}





