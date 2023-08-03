/*Prime number is a number that is greater than 1 and divided by 1 or itself.
In other words, prime numbers can't be divided by other numbers than itself or 1.
For example 2, 3, 5, 7, 11, 13, 17, 19, 23.... are the prime numbers.*/

#include<iostream>
using namespace std;
int main()
{
    int num,i,m,count=0;
    cout<<"Enter Your Number: ";
    cin>>num;
    m=num/2;
    for(i=2; i<m; i++)
    {
        if(num%i==0)
        {
            cout<<"This number is Not Prime";
            ///cout<<"\n";
            count=1;
            break;
        }
    }
    if(count==0)
    {
        cout<<"This number is Prime";
        ///cout<<"\n";
    }
    return 0;
}
