/*
    1. Even or Odd
    Take an integer and check whether it is even or odd.
    Input: 8
    Output: Even

*/
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int number;
    cout<<"Enter a number = ";
    cin>>number;
    if(number%2==0)
    {
        cout<<"Even"<<endl;
    }
    else{
        cout<<"Odd"<<endl;
    }
    cout<<"Thank You"<<endl;
    return 0;
}