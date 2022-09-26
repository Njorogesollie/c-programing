//a program to average the performance of a student for 5 subjects
#include <iostream>
using namespace std;
int main(){
	int math;
	int sci;
	int fre;
	int cre;
	int eng;
	double avg;
	cout<<"enter your marks for 5 units"<<endl;
	cin>>math;
	cin>>sci;
	cin>>fre;
	cin>>cre;
	cin>>eng;
	avg=(math+sci+fre+cre+eng)/5;
	if (avg>=70&&avg<=100)
	{
		cout<<"grade A"<<endl;
	}
	else if(avg>=60&&avg<=69)
	{
		cout<<"grade B"<<endl;
	}
   else if(avg>=50&&avg<=59)
	{
		cout<<"grade C"<<endl;
	}
	else if(avg>=40&&avg<=49)
	{
		cout<<"grade D"<<endl;
	}
	else 
	{
		cout<<"fail"<<endl;
	}
	return 0;
	
}