#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
void sol()
{
    ll a,b,a1,b1,a2,b2;
    cin>>a>>b>>a1>>b1>>a2>>b2;
    if(a>b) swap(a,b);
    if(a1>b1) swap(a1,b1);
    if(a2>b2) swap(a2,b2);
    
    if(a==a1 && b==b1)
    {
        cout<<"1"<<endl;
    }
    else if(a==a2 && b==b2)
    {
        cout<<"2"<<endl;
    }
    else
    {
        cout<<"0"<<endl;
    }
}
int main()
{
    ll t;
    cin>>t;
    for(ll i=0;i<t;i++)
    {
        sol();
    }
    return 0;
}
