#include<iostream>
#include<conio.h>
#include<math.h>
#include<string.h>

using namespace std;

int main()
{
	string name;
	string family;
	float a,b,c,avg;
	
	cout<<"please enter first name: "<<endl;
	cin>>name;
	cout<<"please enter last name: "<<endl;
	cin>>family;
	
	cout<<"please enter your grades (3 lesson): "<<endl;
	cin>>a>>b>>c;
	avg=(a+b+c)/3;
	
	cout<<"you are "<<name<<" "<<family<<endl<<"and your avreage is: "<<avg<<endl;
	
	if (avg>=17)
	
		cout<<"Great"<<endl;
		
	else if(avg>=12 && avg<17)
	
		cout<<"Normal"<<endl;
		
	else if(avg<12)
	
		cout<<"Fail"<<endl;
	
	return 0;
}
