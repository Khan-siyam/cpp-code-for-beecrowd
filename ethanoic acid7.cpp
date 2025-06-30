#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    int a,b,c,d;
    double e,f,t;
    cin>>a>>b>>e;
    cin>>c>>d>>f;
    t=b*e+d*f;
    cout<<"VALOR A PAGAR: R$ "<<fixed<<setprecision(2)<<t<<"\n";
    return 0;
}

