#include<iostream>
#include<math.h>

using namespace std;

int main ()
{
	float weight,height,bmi;
	
	cout<<"Please enter your weight:"<<endl;
	
	cin>>weight;
	
	cout<<"Please enter your height:"<<endl;
	
	cin>>height;
	
	bmi=weight/(height*height);
	
	cout<<"your BMI is: "<<bmi<<endl;
	
	if(bmi<18.5)
			cout<<"you are UNDERWEIGHT !!!"<<endl;
		else if(bmi>=18.5 && bmi<=24.9)
			cout<<"you are NORMAL :D"<<endl;
		else if(bmi>=25 && bmi<=29.9)
			cout<<"you are OVERWEIGHT :)"<<endl;
		else if(bmi>=30 && bmi<=34.9)
			cout<<"you are OBESE :|"<<endl;
		else if(bmi>35)
			cout<<"you are EXTREMELY OBESE -_-"<<endl;
		
			
	return 0;
		
	
}
