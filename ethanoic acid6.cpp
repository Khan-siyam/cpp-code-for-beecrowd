#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    string name;
    cin>>name;
    double A,B,TOTAL;
    cin>>A>>B;
    TOTAL=A+B*0.15;
    cout<<"TOTAL = R$ "<<fixed<<setprecision(2)<<TOTAL<<"\n";
    return 0;
}


