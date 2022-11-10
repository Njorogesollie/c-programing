//program to convert celcius to farenheit
#include<iostream>
using namespace std;
float faren(float faren); //function prototype
int main()
{
int f;
cout<<"Enter temperature in celcius :";
cin>>f;
float c=0.5555*(f-32);  //function calling
cout<<"The temperature in farenheit is :"<<c;
return 0;	
}
float faren(float faren)  //function definition
{
	int f;
	float c=0.5555*(f-32);
	return faren;
} 