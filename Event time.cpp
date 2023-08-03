
#include<iostream>
using namespace std;
int main()
{
    string temp;
    int d,dd,h,hh,m,mm,s,ss;
    cin>>temp>>d;
    cin>>h>>temp>>m>>temp>>s;
    cin>>temp>>dd;
    cin>>hh>>temp>>mm>>temp>>ss;

    s=ss-s;
    m=mm-m;
    h=hh-h;
    d=dd-d;

    if(s<0){
        s=s+60;
        m--;
    }
    if(m<0){
        m=m+60;
        h--;
    }
    if(h<0){
        h=h+24;
        d--;
    }
    cout<<d<<"Day"<<endl;
    cout<<h<<"Hour"<<endl;
    cout<<m<<"Minute"<<endl;
    cout<<s<<"Second"<<endl;

    return 0;
}
