/*
    Palindrome number
    Check whether a number reads the same forward and backward.
    Example: 121 → Palindrome
    123 → Not Palindrome
*/
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cout<<"Enter a Number = ";
    cin>>n;
    int copy = n;
    int reversed =  0 ;
    while(copy != 0)
    {
        int digit = copy % 10 ;
        copy = copy / 10;
        reversed = reversed * 10 + digit;
    }
    if(n == reversed)
    {
        cout<<"Palindrome Number"<<endl;
    }
    else
    {
        cout<<"Not a palindrome number"<<endl;
    }
    return 0;
}