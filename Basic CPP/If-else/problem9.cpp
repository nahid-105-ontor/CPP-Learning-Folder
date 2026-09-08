/*
    9. Leap Year
    Take a year and determine whether it is a leap year.

    Remember the proper rules:

    Divisible by 400 → leap year
    OR divisible by 4 but not divisible by 100 → leap year
    Otherwise → not a leap year
    Example

    Input: 2024
    Output: Leap Year
*/
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int year;
    cout<<"Enter a Year = ";
    cin>>year;
    if(year%400==0 || year%4==0 && year%100!=0)
    {
        cout<<"Leap Year"<<endl;
    }
    else
    {
        cout<<"Not a Leap Year"<<endl;
    }
    return 0;
}