#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int main()
{
    int x,y, sum=0,i;
    int min,max;
    cout<<"Enter your 1st number: ";
    cin>>x;
    cout<<"Enter your 2nd number: ";
    cin>>y;

    if(x<y){
        min=x;
        max=y;
    }
    else{
        max=x;
        min=y;
    }
    for(i=(min+1);i<max;++i){
        if(i%2!=0){
            sum=sum+i;
        }
    }
    cout<<sum;
    return 0;
}
