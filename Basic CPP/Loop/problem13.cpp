/*
    Find the largest digit
    Example:
    58392 → 9
*/
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cout<<"Enter a number = ";
    cin>>n;
    int largest = n % 10;
    int digit = 0;
    while(n != 0)
    {
        digit = n % 10;
        n = n / 10;
        if(digit > largest)
        {
            largest = digit;
        }
    }
    cout <<"largest Number = "<<largest<<endl;
    return 0 ;

}