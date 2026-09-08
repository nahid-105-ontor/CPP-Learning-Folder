/*
    Count digits
    Take an integer and count how many digits it has.
    Example: 58392 → 5
*/
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cout<<"Enter a number = ";
    cin>>n;
    int count = 0;
    while(n != 0)
    {
        n = n/10;
        count++;
    }
    cout<<"Total digits : "<<count<<endl;
    return 0;
}
// #include<bits/stdc++.h>
// using namespace std;

// int main()
// {
//     int n;
//     cout << "Enter a number = ";
//     cin >> n;

//     int count = 0;

//     while(n != 0)
//     {
//         n = n/10;
//         count++;
//     }

//     cout << "Total digits : " << count << endl;

//     return 0;
// }
