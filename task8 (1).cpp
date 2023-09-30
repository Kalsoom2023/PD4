#include<iostream>
using namespace std;
void pet(int holidays);
main()
{
	int holidays;
	cout<<"Holidays: ";
	cin>>holidays;
	pet(holidays);
}
void pet(int holidays)
{
	int workingdays=365-holidays;
	int difference;
	if((workingdays*63+holidays*127)>30000)
	{
		difference=(workingdays*63+holidays*127)-30000;
			cout<<"Tom will run away"<<endl;
		cout<<(difference/60)<<" hours and "<<(difference%60)<<" minutes for play";
	}
	if((workingdays*63+holidays*127)<30000)
	{
		difference=30000-(workingdays*63+holidays*127);
		cout<<"Tom sleeps well"<<endl;
		cout<<(difference/60)<<" hours and "<<(difference%60)<<" minutes less for play";
	}

	
}


