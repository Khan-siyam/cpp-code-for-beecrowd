#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    float A,B,C;
    double MEDIA;
    cin>>A;
    cin>>B;
    cin>>C;
    MEDIA=(A*2+B*3+C*5)/(2+3+5);
    cout<<"MEDIA = "<<fixed<<setprecision(1)<<MEDIA<<"\n";
    return 0;
}



