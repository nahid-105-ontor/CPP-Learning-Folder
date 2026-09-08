/*
    5. Greater Number
    Take two numbers and print the greater number.

    Input: 15 20
    Output: 20
*/
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int number1 , number2;
    cout<<"Enter First Number = ";
    cin>>number1;
    cout<<"Enter Second Number = ";
    cin>>number2;
    if(number1==number2)
    {
        cout<<"Both Numbers are Equal"<<endl;
    }
    else if(number1>number2)
    {
        cout<<"Greater Number is = "<<number1<<endl;
    }
    else
    {
        cout<<"Greater Number is = "<<number2<<endl;
    }
    return 0;
}