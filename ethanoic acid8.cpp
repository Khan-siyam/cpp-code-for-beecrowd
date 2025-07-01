#include<bits/stdc++.h>
using namespace std;
int main()
{

    double a,b,c,w,x,y,z,q;
    const double p=3.14159;
    cin>>a>>b>>c;
    w=0.5*a*c;
    x=p*c*c;
    y=0.5*(a+b)*c;
    z=b*b;
    q=a*b;
    cout<<"TRIANGULO: "<<fixed<<setprecision(3)<<w<<endl;
     cout<<"CIRCULO: "<<fixed<<setprecision(3)<<x<<endl;
      cout<<"TRAPEZIO: "<<fixed<<setprecision(3)<<y<<endl;
       cout<<"QUADRADO: "<<fixed<<setprecision(3)<<z<<endl;
        cout<<"RETANGULO: "<<fixed<<setprecision(3)<<q<<endl;
    return 0;
}
