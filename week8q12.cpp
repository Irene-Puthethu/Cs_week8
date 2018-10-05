//include library
#include<iostream>
using namespace std;

//function for lcm
int lcm(int x, int y);
int n=1;


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
    	cout<< "L.C.M of "<<x<<" and "<<y<< " is "<< lcm(x,y) <<endl;
 
return 0;
}

//giving conditions for the functions to operate
int lcm (int x, int y)
{	
 	if (n%x==0 && n%y==0)
 		return n;
	else {
                n++;
                lcm(x,y);
	     }
     return n;

}
