#include <bits/stdc++.h>
using namespace std;
#define ll long long int
ll m=998244353;
void sol()
{
    ll n;
    cin>>n;
    ll a[n];
    for(ll i=0;i<n;i++)
    {
        cin>>a[i];
    }
    ll sum=0;
    for(ll i=0;i<n;i++)
    {
        sum+=a[i];
        sum%=m;
    }
    sum*=(sum-1);
    sum%=m;
    cout<<sum<<endl;
}
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        sol();
    }
    return 0;
} 