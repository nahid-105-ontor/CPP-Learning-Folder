/*
    Reverse a number
    Example:
    12345 → 54321
*/
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cout<<"Enter a number = ";
    cin>>n;
    int nc = n;
    int reversed=0;
    while(n != 0)
    {
        int digit = n % 10;
        n = n / 10;
        reversed = reversed * 10 + digit;
    }
    cout<<"Real Number = "<< nc <<endl;
    cout<<"Reversed Number = "<<reversed<<endl;
    return 0;
}