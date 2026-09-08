/*
    8. Divisible by 5 and 3.Take an integer n.

    Print:

    Both if divisible by both 5 and 3
    5 only if divisible by 5 but not 3
    3 only if divisible by 3 but not 5
    Neither otherwise
    Example

    Input: 30
    Output: Both
*/
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int number;
    cout<<"Enter a Number = ";
    cin>>number;
    if(number%5==0 && number%3==0)
    {
        cout<<"Both"<<endl;
    }
    else if(number%5==0 && number%3!=0)
    {
        cout<<" 5 Only"<<endl;
    }
    else if(number%5!=0 && number%3==0)
    {
        cout<<"3 Only"<<endl;
    }
    else
    {
        cout<<"Neither"<<endl;
    }
    cout<<"Thanks For Using This"<<endl;
    return 0;
}