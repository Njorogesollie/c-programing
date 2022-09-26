// a program code to check voter eleigibility
#include <iostream>
using namespace std;
int main(){
	int age;
	cout<<"how old are you?"<<endl;
	cin>>age;
	if(age>=18 ){
		cout<<"you are aleigible"<<endl;
	}
	else{
		cout<<"not eleigile"<<endl;
	}
	return 0;
}