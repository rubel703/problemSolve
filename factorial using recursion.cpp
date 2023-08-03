#include<iostream>
using namespace std;
int main()
{
    int factorial(int);
    int fact,value;
    cout<<"Enter Any Number:";
    cin>>value;
    fact=factorial(value);

    cout<<"Factorial of a number is:"<<fact<<endl;
    return 0;
}

int factorial(int n)
{
    if(n<0)
    {
        return(-1); //wrong number
    }
    if(n==0)
    {
        return(1);  //terminating conditions
    }
        else
        {
            return(n*factorial(n-1));
        }
}
