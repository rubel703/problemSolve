#include<iostream>
using namespace std;
int main()
{
    int totalTaka,reminder;

    cout<<"Enter your total amount= ";
    cin>>totalTaka;
    cout<<"Your Taka: "<<totalTaka<<"\n\n";
    cout<<totalTaka/100<<" Single note BDT 100.00\n";
    reminder=(totalTaka%100);
    cout<<reminder/50<<" Single note BDT 50.00\n";
    reminder=(reminder%50);
    cout<<reminder/20<<" Single note BDT 20.00\n";
    reminder=(reminder%20);
    cout<<reminder/10<<" Single note BDT 10.00\n";
    reminder=(reminder%10);
    cout<<reminder/5<<" Single note BDT 5.00\n";
    reminder=(reminder%5);
    cout<<reminder/2<<" Single note BDT 2.00\n";
    reminder=(reminder%2);
    cout<<reminder/1<<" Single note BDT 1.00\n";
    return 0;
}
