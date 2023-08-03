#include <bits/stdc++.h>
#include <iostream>
using namespace std;
int main()
{
    double salary;
    int product;
    char word[256];
    double Total;
    cout<<"Enter your employee name:";
    cin>>word;
    cout<<"\nEnter your employee salary=";
    cin>>salary;
    cout<<"\nEnter her total sale product=";
    cin>>product;
    Total=salary+(product*15)/100;
//cout<<"\nYour employee Total salary="<<Total;
    cout<<fixed;
    cout<<"Total salary="<<setprecision(2)<<Total;
    return 0;
}

