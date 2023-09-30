#include<iostream>
using namespace std;
void Reverse(string data);
main()
{
string data;
cout<<"Enter 'true' or 'false': ";
cin>>data;
Reverse(data);
}
void Reverse(string data)
{
if(data=="true")
{
cout<<"false";
}
if(data=="false")
{
cout<<"true";
}
}
