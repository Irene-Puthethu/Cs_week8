#include<iostream>
using namespace std;

int foo(int i);

int main()
{
    int i;

    cout << "Enter a natural number: ";
    cin >> i;

    cout << "Sum =  " << foo(i);

return 0;
}

int foo(int i)
{
    if (i>=1)
        return i + foo(i - 1);
return 0;
}