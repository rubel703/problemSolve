#include<iostream>
using namespace std;
int main()
{
    int num,sum=0,rem;
    cout<<"Enter the number:";
    cin>>num;
    while(num>0)
    {
        rem=num%10;
        sum=sum+rem;
        num=num/10;
    }
    cout<<"Sum is="<<sum<<endl;
    return 0;
}
