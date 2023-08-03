/*  A palindrome number is a number that is same after reverse.
For example 121, 34543, 343, 131, 48984 are the palindrome numbers.  */

/* Palindrome number algorithm
1.Get the number from user
2.Hold the number in temporary variable
3.Reverse the number
4.Compare the temporary number with reversed number
5.If both numbers are same, print palindrome number
6.Else print not palindrome number   */

#include <iostream>
using namespace std;

int main()
{
    int num;

    cout<<"Enter a number \n";
    cin >> num;

    //copy the 'num' to 'temp' and initialize 'rev' with 0
    int temp=num, rev=0;

    //while loop to revesere the 'num'
    while(temp>0)
    {
        rev = rev*10 + temp%10;
        temp = temp/10;
    }

    if(rev == num)
        cout << "Palindrome number \n";
    else
        cout << "Not a Palindrome number \n";

    return 0;
}
