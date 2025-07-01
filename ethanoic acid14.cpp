#include<bits/stdc++.h>
using namespace std;
int main()
{
   int n;
   cin>>n;
   cout<<n<<endl;
   int a=n/100;
   n=n%100;
   int b=n/50;
   n=n%50;
   int c=n/20;
   n=n%20;
   int d=n/10;
   n=n%10;
   int e=n/5;
   n=n%5;
   int f=n/2;
   n=n%2;
   int g=n/1;
   cout<<a<<" nota(s) de R$ 100,00"<<endl;
   cout<<b<<" nota(s) de R$ 50,00"<<endl;
   cout<<c<<" nota(s) de R$ 200,0"<<endl;
   cout<<d<<" nota(s) de R$ 1000"<<endl;
   cout<<e<<" nota(s) de R$ 500"<<endl;
   cout<<f<<" nota(s) de R$ 200"<<endl;
   cout<<g<<" nota(s) de R$ 100"<<endl;

    return 0;
}

