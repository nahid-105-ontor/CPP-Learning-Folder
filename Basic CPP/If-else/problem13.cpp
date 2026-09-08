/*
    14. Three-Side Comparison
    Take three integers a, b, and c.

    Print:

    All Equal if all three are equal
    Two Equal if exactly two are equal
    All Different if none are equal
    Example

    Input:
    5 7 5

    Output:
    Two Equal
*/
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a;
    int b;
    int c;
    cout<<"Enter First Number = ";
    cin>>a;
    cout<<"Enter Second Number = ";
    cin>>b;
    cout<<"Enter Third Number = ";
    cin>>c;
    if(a==b && b==c)
    {
        cout<<"All Equal"<<endl;
    }
    else if(a==b || a==c || b==c)
    {
        cout<<"Two Equal"<<endl;
    }
    else
    {
        cout<<"All Different"<<endl;
    }
    return 0;
    
}