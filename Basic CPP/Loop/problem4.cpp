/*
    Print odd numbers
    Take N and print all odd numbers from 1 to N.
*/
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cout<<"Enter a Number : ";
    cin>>n;
    for(int i = 1 ; i<=n ; i++)
    {
        if(i%2!=0)
        {
            cout<<i<<endl;
        }
    }
    return 0;
}