//SUM OF ODD NUMBERS
#include <iostream>
using namespace std;
int main(int argc, char** argv)//main function
{
	int i,x,y,sum=0;//variable declaration
	cout<<"enter starting point"<<endl;//output
	cin>>x;//input command
	cout<<"enter ending pont"<<endl;
	cin>>y;//input command
	
	for (i=x;i<=y;i++){//start stop and step syntax
		cout<<i<<endl;
		sum+=i;
		{
			cout<<"sum of "<<x<<"and"<<y<<"is"<<sum;
		}
	}
	return 0;
}