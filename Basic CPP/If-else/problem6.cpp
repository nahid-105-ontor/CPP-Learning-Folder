/*
    6. Find the Largest of Three
    Take three integers a, b, and c.

    Print the largest number.

    Example

    Input:
    12 45 31

    Output:
    45
*/
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a , b , c;
    cout<<"Enter First Number = ";
    cin>>a;
    cout<<"Enter Second Number = ";
    cin>>b;
    cout<<"Enter Third Number = ";
    cin>>c;
    if(a>b && a>c)
    {
        cout<<"Greatest Number = "<<a<<endl;
    }
    else if(b>c && b>a)
    {
        cout<<"Greatest Number = "<<b<<endl;
    }
    else
    {
        cout<<"Greatest Number = "<<c<<endl;
    }
    cout<<"Thank You"<<endl;
    return 0;
}