#include<iostream>
using namespace std;
void airlineCompany(string countryName,float ticketPrice);
main()
{
string countryName;
float ticketPrice;

cout<<"Enter the country's name: ";
cin>> countryName;
cout<<"Enter the ticket price in dollars: $";
cin>>ticketPrice;
airlineCompany(countryName,ticketPrice);
}

void airlineCompany(string countryName,float ticketPrice)
{
if(countryName=="Pakistan")
{
cout<<"Final ticket price after discount: $"<<ticketPrice-(0.05*ticketPrice)<<endl;
}
if(countryName=="Ireland")
{
cout<<"Final ticket price after discount: $"<<ticketPrice-(0.1*ticketPrice)<<endl;
}
if(countryName=="India")
{
cout<<"Final ticket price after discount: $"<<ticketPrice-(0.2*ticketPrice)<<endl;
}
if(countryName=="England")
{
cout<<"Final ticket price after discount: $"<<ticketPrice-(0.3*ticketPrice)<<endl;
}
if(countryName=="Canada")
{
cout<<"Final ticket price after discount: $"<<ticketPrice-(0.45*ticketPrice)<<endl;
}
}


