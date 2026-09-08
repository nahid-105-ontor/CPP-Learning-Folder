/*
    10. Electricity Bill
    Take the number of electricity units used.

    Calculate the bill using:

    First 100 units → 5 taka/unit
    Next 100 units → 7 taka/unit
    Above 200 units → 10 taka/unit
    Example

    Input: 250
    Output: 2000
*/
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int unit;
    cout<<"Enter The Unit :";
    cin>>unit;
    int bill;
    if(unit>0 && unit<=100)
    {
        bill = unit * 5;
    }
    else if(unit>100 && unit<=200)
    {
        bill = 100 * 5 + (unit-100) * 7;
    }
    else
    {
        bill = 100 * 5 + 100 * 7 + (unit-200) * 10 ;
    }
    cout<<"Total Bill : "<<bill;
    return 0;

}