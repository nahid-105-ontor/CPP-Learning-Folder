/*
    Sum from 1 to N
    Calculate:
    1 + 2 + 3 + ... + N
*/
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the number : ";
    cin>>n;
    int sum = 0;
    for(int i = 1 ; i<=n ; i++)
    {
        sum = sum + i;
    }
    cout<<"Total = "<<sum<<endl;
    return 0;
}