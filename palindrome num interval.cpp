/*Print all Palindrome Numbers in the Given Interval. We check each number in the given
interval whether it is palindrome or not using the same logic used in the above program.
We write the logic to check palindrome in a separate function and call
the function with the numbers individually in the given range.*/


#include<iostream>
using namespace std;
int main ()
{
    int startNumber, endNumber, i, currentNumber, reverseNumber, rem;

    cout<<"Enter the first number:";
    cin>>startNumber;
    cout<<"\nEnter the second number:";
    cin>>endNumber;
    cout<<"\nPalindrome number between "<<startNumber<<" and "<<endNumber<<" ::";

    for(i=startNumber;i<=endNumber;i++)
    {
        currentNumber=i;
        reverseNumber=0;

        while(currentNumber){
            rem=currentNumber%10;
            //currentNumber=currentNumber/10;
            reverseNumber=reverseNumber*10+rem;
            currentNumber=currentNumber/10;
        }
        if(i==reverseNumber){
            cout<<"\t"<<i;
        }
    }
    return 0;
}
