//a program with a class named addition
#include <iostream>
using namespace std;
//class creation//
 class addition{
	public://encapsulation
		//data members declaration
		int a;
		int b;
		int c;
		int pro;
		//member fuction
		
		int product(){
			return(a*b*c);
		}
		
};

int main ()
{	
	int a,b,c,pro;
	addition  addition1;
	a=addition1.a=22;//calling the datamembers from the class
	b=addition1.b=30;
	c=addition1.c =50;
	pro=addition1.product();//calling the member function from the class
	cout<<"the pr0 is"<<pro<<endl;//output
	return 0;
	
}