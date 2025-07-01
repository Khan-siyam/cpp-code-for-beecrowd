#include<bits/stdc++.h>
using namespace std;
int main()
{
    double x1,x2,y1,y2,r,a,b,c,d;
    cin>>x1>>y1;
    cin>>x2>>y2;
    //cout<<x1<<x2<<y1<<y2<<endl;
    a=(x1-x2)*(x1-x2);
    //cout<<a<<endl;
    b=(y1-y2)*(y1-y2);
   // cout<<b<<endl;
    c=a+b;
    //cout<<c<<endl;
    d=sqrt(c);
    cout<<fixed<<setprecision(4)<<d<<endl;
    return 0;
}

