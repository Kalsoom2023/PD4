#include<iostream>
using namespace std;
void longestTime(int hours,int minutes);
main()
{
	int hours,minutes;
	cout<<"Enter the number of hours: ";
	cin>> hours;
	cout<<"Enter the number of minutes: ";
	cin>> minutes;
	longestTime(hours,minutes);
}
void longestTime(int hours,int minutes)
{
if(minutes/60>hours)
{
	cout<<minutes;
	}	
	if(minutes/60<hours)
	{
		cout<<hours;
	}
}
