/*
    15. Mini Login System
    Store a username and password in your program.

    The correct credentials are:

    username = admin
    password = 1234

    Take username and password as input.

    Print:

    Login Successful if both are correct
    Wrong Password if username is correct but password is wrong
    User Not Found if username is wrong
    Example

    Input:
    admin 1234

    Output:
    Login Successful
*/
#include<bits/stdc++.h>
using namespace std;
int main()
{
    string username = "admin";
    string password="1234";
    string gusername;
    string gpassword;
    cout<<"Enter Your Username : ";
    cin>>gusername;
    cout<<"Enter Your Password : ";
    cin>>gpassword;
    if((gusername == username)&&(gpassword == password))
    {
        cout<<"Login Successfull"<<endl;
    }
    else if(gusername!=username)
    {
        cout<<"User Not Found"<<endl;
    }
    else
    {
        cout<<"Wrong Password"<<endl;
    }
    return 0;
}