//including library 
#include<iostream>
using namespace std;

//declare function
int fact(int x);

//main body
int main()
{
    int x;
    //ask user for number.
    cout << "Enter a positive integer: ";
    cin >> x;
    //output the answer
    cout<< x<< "! = " << fact(x);

    return 0;
}
//call the function
int fact(int x)
{   //conditions
    if(x != 1)
        return x * fact(x - 1);
    else
        return 1;
}