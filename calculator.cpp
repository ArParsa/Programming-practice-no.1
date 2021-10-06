#include<iostream>
#include<math.h>
#include<conio.h>

using namespace std;
 
int main()
{
	float a,b;
	string op;
	cout<<"please enter a: ";
	cin>>a;
	cout<<"please enter b: ";
	cin>>b;
	cout<<"enter operation: ";
	cin>>op;
	
	if(op=="+")
	{
		cout<<a+b;	
	}
	else if(op=="-")
	{
		cout<<a-b;
	}
	else if(op=="*")
	{
		cout<<a*b;
	}
	else if(op=="/" && b!=0)
	{
		cout<<a/b;
	}
	else if(op=="sin")
	{
		a=a*3.14/180;
		b=b*3.14/180;
		cout<<"sin a is: "<<sin(a)<<endl<<"sin b is: "<<sin(b);
	}
	else if(op=="cos")
	{
		a=a*3.14/180;
		b=b*3.14/180;
		cout<<"cos a is: "<<cos(a)<<endl<<"cos b is: "<<cos(b);
	}


	return 0;
}
