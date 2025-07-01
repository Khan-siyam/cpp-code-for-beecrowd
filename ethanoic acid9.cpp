#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c;
    cin>>a>>b>>c;
    int max1=(a+b+abs(a-b))/2;
    int max2=(max1+c+abs(max1-c))/2;
cout<<max2<<" eh o maior"<<endl;
    return 0;
}

