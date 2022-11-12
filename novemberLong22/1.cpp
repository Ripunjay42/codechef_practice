#include <bits/stdc++.h>
using namespace std;
#define ll long long int 
ll m = 1000000007;
ll k=1000001;
ll fac[1000001];
int main()
{   
    int t;
    cin>>t;
    fac[0]=1;
    fac[1]=1;
    for(int i=2;i<k;i++)
    {
        fac[i]=(i*fac[i-1])%m;
    }
    while(t--)
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
             sum+=fac[a[i]];
             sum%=m;
        }
        cout<<sum<<endl;
    }
    return 0;
}