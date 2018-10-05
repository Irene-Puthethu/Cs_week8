//include library
#include<iostream>
using namespace std;

//function for gcd
int gcd(int x, int y);

//Main function
int main(){
	
	//declaring variables in main
	int x,y;
	//asking user for inputs
	cout<<"Enter first number: "<<endl;
 	cin>> x;
	cout<<"Enter second number: "<<endl;
	cin>> y;

	//output sentence
    cout<< "G.C.D of "<<x<<" and "<<y<< " is "<< gcd(x,y)<<endl;
 
return 0;
}

//giving conditions for the functions to operate
int gcd (int x, int y)
{
 	if (y != 0)
 		return gcd(y, x%y);
	else 
		return x;
}


