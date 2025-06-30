#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    double A,R;
    const double p=3.14159;
    cin>>R;
    A=p*R*R;
    cout<<"A="<<fixed<<setprecision(4)<<A<<"\n";
    return 0;
}


