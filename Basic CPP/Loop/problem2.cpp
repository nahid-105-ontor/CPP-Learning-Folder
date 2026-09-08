/*
    Print N to 1
    Take N as input and print:
    N, N-1, N-2, ..., 
*/
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cout<<"Enter The Number = ";
    cin>>n;
    for(int i = n ; i>=1 ; i--)
    {
        cout<<i<<endl;
    }
    return 0;
}