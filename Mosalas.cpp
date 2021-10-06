#include<iostream>
#include<conio.h>
#include<math.h>

using namespace std;

int main()
{
    float a,b,c;
    
    cout << "Enter the size of the triangle side: "<<endl;
    
    cin>>a>>b>>c;
    
    if(a<b+c && b<a+c && c<a+b)
	{
        cout<<"Yes...it's triangle ;)";
    }
    else
         cout<<"Shit...it's not triangle :/";
   
    return 0;
}

