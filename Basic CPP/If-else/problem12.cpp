/*
    13. Simple ATM
    You have an account balance and want to withdraw some money.

    Input:

    balance withdrawal

    Rules:

    Withdrawal must be greater than 0
    Withdrawal cannot be greater than the balance
    If withdrawal is valid, subtract it from the balance
    Otherwise print an appropriate error message
    Example

    Input:
    5000 1200

    Output:
    Withdrawal Successful
    Remaining Balance: 3800
*/
#include<bits/stdc++.h>
using namespace std;
int main()
{
    cout<<"ABC Private Bank Limited"<<endl;
    cout<<"Welcome to Our ATM Service"<<endl;
    int balance;
    cout<<"Deposite Amount : ";
    cin>>balance;
    int withdraw;
    cout<<"Withdrawal Anount : ";
    cin>>withdraw;
    if(withdraw<=0)
    {
        cout<<"Invalid Withdrawal Amount"<<endl;
    }
    if(withdraw > balance)
    {
        cout<<"Invalid Operation Request"<<endl;
        return 0;
    }
    if(balance>withdraw)
    {
        cout<<"Withdrawal Successful"<<endl;
        balance = balance - withdraw;
        cout<<"Remaining Balance = "<<balance<<" BDT"<<endl;
    }
    cout<<"Thank You for Using Us"<<endl;
    return 0;


}