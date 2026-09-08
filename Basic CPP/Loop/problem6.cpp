/*
    Multiplication table
    Take a number N and print its multiplication table from 1 to 10.
*/
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cout<<"Enter a number = ";
    cin>>n;
    for(int i =1 ; i<= 10; i++)
    {
        cout<<i<<" * "<<n<<" = "<<n*i<<endl;
    }
    return 0;
}

