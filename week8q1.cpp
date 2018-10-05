//include library
#include<iostream>
using namespace std;

//Declaring function
int func(int a, int b){
  if(b==0){
    return 1;
  }
  else{
    return a*func(a,b-1);
  }
}
int main(){
  int a,b;
    //Ask user for values and take it
    cout<<"Enter a base: "<<endl;
    cin>>a;
    cout<<"Enter an exponent: "<<endl;
    cin>>b;
    //Give output by calling function
    cout<<"The value of the "<<b<<"nd/th power of "<<a<<" is= "<<func(a,b);
    
return 0;
}
