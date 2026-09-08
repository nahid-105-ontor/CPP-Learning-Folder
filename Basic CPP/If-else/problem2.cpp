/*
    2. Positive or Negative
    Take a number and determine whether it is positive or negative.

    Input: -10
    Output: Negative

    Also handle 0.
*/
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int number;
    cout<<"Enter a Number = ";
    cin>>number;
    if(number==0)
    {
        cout<<"Zero"<<endl;
    }
    else if(number > 0)
    {
        cout<<"Positive"<<endl;
    }
    else
    {
        cout<<"Negative"<<endl;
    }
    cout<<"Thank You"<<endl;
    return 0 ;
}