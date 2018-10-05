#include<iostream>
using namespace std;

int foo(int i, int n);

int main()
{
   int n;
   cout<< "Enter a natural number: "<<endl;
   cin>>n;
   cout<<"The natural numbers  are: "<<endl;
   foo(1,n);

}
 
int foo(int i,int n)
{
   
    if(i>n)
    return 0;
    else
    {
    cout<<i<<endl;
    i++;
    foo(i,n);
    return 0;
}

}
 
