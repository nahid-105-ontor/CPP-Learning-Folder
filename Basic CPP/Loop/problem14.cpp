/*
    Count a specific digit
    Take a number and a digit, then count how many times that digit occurs.
    Example: 122321, digit 2 → 3 times
*/
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int number;
    cout<<"Enter a Number = ";
    cin>>number;
    int copy = number;
    int digit;
    cout<<"Which digit you want to count = ";
    cin>>digit;
    int count = 0;
    while(number != 0)
    {
        int last_digit = number % 10 ;
        number = number / 10;
        if(digit == last_digit)
        {
            count++;
        }
    }
    cout<<digit<<" occures "<<count<<" times in "<<copy<<endl;
    return 0;
}