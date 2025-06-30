#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    int A,B;
    float C;
    double SALARY;
    cin>>A>>B;
    cin>>C;
    SALARY=B*C;
    cout<<"NUMBER = "<<A<<"\n";
    cout<<"SALARY = U$ "<<fixed<<setprecision(2)<<SALARY<<"\n";
    return 0;
}

