
//include library
#include<iostream>
using namespace std;
int ver(int a,int b)
{ 	
    //conditions to end function
	if(a%10==0) 
	{return 1;}
	//other display value
	else
	{b=a%10; 
	cout<<b;
	a=a/10;  
	ver(a,b);
	}

}
int main()
{	int a;
//ask user for a number
	cout<<"Give a number to be reversed: ";
	cin>>a;
	//call function 
	ver(a,1);
	return 0;
}
