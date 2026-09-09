/*
    Factorial
    Calculate N!.
    Example: 5! = 120
*/
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cout<<"Enter a Number = ";
    cin>>n;
    int fact = 1;
    for(int i = 1; i<=n ; i++)
    {
        fact = fact * i;
    } 
    cout<<"Factorial of "<<n<<" = "<<fact<<endl;
    return 0;
}