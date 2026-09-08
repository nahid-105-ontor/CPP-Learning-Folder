/*
    Sum of digits
    Example:
    58392 → 5 + 8 + 3 + 9 + 2 = 27
*/
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cout<<"Enter a Number = ";
    cin>>n;
    int sum =0;
    while(n != 0 )
    {
        int digit  = n % 10;
        n = n/10;
        sum = sum + digit;
    }
    cout<<"Total = "<<sum<<endl;
    return 0;
}