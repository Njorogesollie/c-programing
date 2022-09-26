// A c program to determine employees bonus
#include <iostream>
using namespace std;
int main() {
    int salary;
	int service;
	float bonus;
    cout<<"enter your basic salary"<<endl;
    cin>>salary;
    if (service>=10) bonus=salary*0.1;
    {
        cout<<"your basic salary is"<< salary*0.1<<endl;
    }
   if (service>=6&&salary<=10 )bonus=salary*0.08;
{
     cout<<"your basic salary is"<< salary*0.08<<endl;
    } 
    if (service<6) bonus=salary*0.05;
 {
     cout<<"your basic salary is"<< salary*0.05<<endl;
 }
 return 0;
}

