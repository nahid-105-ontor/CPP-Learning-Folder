/*
    7. Grade Calculator
    Take a student's mark from 0 to 100.

    Print:

    80–100 → A
    70–79 → B
    60–69 → C
    50–59 → D
    Below 50 → F
    Example

    Input: 76
    Output: B
*/
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int mark;
    cout<<"Enter Marks = ";
    cin>>mark;
    if(mark>=0 && mark<=100)
    {
        if(mark>=80 && mark<=100)
        {
            cout<<"Grade : A"<<endl;
        }
        else if(mark>=70 && mark<=79)
        {
            cout<<"Grade : B"<<endl;
        }
        else if(mark>=60 && mark<=69)
        {
            cout<<"Grade : C"<<endl;
        }
        else if(mark>=50 && mark<=59)
        {
            cout<<"Grade : D"<<endl;
        }
        else
        {
            cout<<"Grade : F"<<endl;
        }

    }
    else
    {
        cout<<"Invalid Mark"<<endl;
    }
    cout<<"Thanks For Enquery"<<endl;
    return 0;
}