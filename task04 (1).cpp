#include<iostream>
using namespace std;
void checkSpeed(int Speed);
main()
{
	int Speed;
	cout<<"Speed: ";
	cin>> Speed;
	checkSpeed(Speed);
		
}
void checkSpeed(int Speed)
{
	if(Speed>100)
	{
	
	cout<<"Halt... YOU WILL BE CHALLENGED!!!";
}
if(Speed<=100)
{
	cout<<"Perfect! You're going good.";
}
}
