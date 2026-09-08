/*
    4. Pass or Fail
    Take a student's marks.

    Marks ≥ 40 → Pass
    Marks < 40 → Fail
    Input: 65
    Output: Pass
*/
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int mark;
    cout<<"Enter Mark = ";
    cin>>mark;
    if(mark>=0 && mark<=100)
    {
        if(mark>=40)
        {
            cout<<"Passed"<<endl;
        }
        else
        {
            cout<<"Failed"<<endl;
        }
    }
    else
    {
        cout<<"Invalid Marks"<<endl;
    }
    return 0;
}