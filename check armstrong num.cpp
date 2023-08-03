/* Armstrong number is a number that is equal to the sum of cubes of its digits.
for example 153,370,371,407 are the Armstrong number. */

#include<iostream>
using namespace std ;
int main()
{
    int num,rem,sum=0,temp;
    cout<<"Enter your number:";
    cin>>num;
    temp=num;
    while(num>0)
    {
        rem=num%10;
        sum=sum+(rem*rem*rem);
        num=num/10;
    }
    if(temp==sum)
    {
        cout<<"\nArmstrong Number."<<endl;
    }
    else
    {
        cout<<"\nNot Armstrong Number."<<endl;
    }
}
