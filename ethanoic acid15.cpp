#include<bits/stdc++.h>
using namespace std;
int main()
{
   int n;
   cin>>n;
   int a=n/3600;
   n=n%3600;
   int b=n/60;
   n=n%60;
   cout<<a<<":"<<b<<":"<<n<<endl;
    return 0;
}

