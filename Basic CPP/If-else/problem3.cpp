/*
    3. Eligible to Vote
    Take the user's age.

    Age ≥ 18 → Eligible
    Age < 18 → Not Eligible
    Input: 20
    Output: Eligible
*/
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int age;
    cout<<"This Program Determine that are you eligible for vote?"<<endl;
    cout<<"Enter Your Age = ";
    cin>>age;
    if(age>=18)
    {
        cout<<"Eligible"<<endl;
    }
    else
    {
        cout<<"Not Eligible"<<endl;
    }
    cout<<"Thank You For your Enqurey"<<endl;
    return 0;
}
