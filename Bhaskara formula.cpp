#include<bits/stdc++.h>
#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    double a,b,c,t,r1,r2;
    cout<<"First digit input=";
    cin>>a;
    cout<<"\nSecond digit input=";
    cin>>b;
    cout<<"\nThird digit input=";
    cin>>c;
    if(((b*b)-(4*a*c)<0||a==0))
    {
        cout<<"\nImpossible the Solution for equation\n";
    }
    else{
        t=sqrt((b*b)-(4*a*c));
        r1=((-b+t)/2*a);
        r2=((-b-t)/2*a);
        cout<<fixed;
        cout<<setprecision(5)<<"\nR1= "<<r1<<endl;
        cout<<setprecision(5)<<"\nR2= "<<r2<<endl;
    }
    return 0;
}
