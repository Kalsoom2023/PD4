#include<iostream>
using namespace std;
void tpChecker(int people,int tp);
main()
{

int people,tp;
cout<<"Number of people in the household: ";
cin>> people;
cout<<"Number of rolls of TP: ";
cin>> tp;
tpChecker(people,tp);

}
void tpChecker(int people,int tp)
{
int tplastfor=(tp*500)/(people*57);
if(tplastfor>=14)
{
	cout<<"Your TP will last "<<tplastfor<<" days, no need to panic!";
}
if(tplastfor<14)
{
	cout<<"Your TP will only last "<<tplastfor<<" days, buy more!";
}	
}

