#include <bits/stdc++.h>
using namespace std;
#define ll long long int
void sol()
{
    ll n,k,l;
    cin>>n>>k>>l;
    n-=l+k;
    if(n<0)
    {
        n=abs(n);
        l=l-n;
        k=k-n;
        n=0;
    }
    ll res=0;
    res=(k*(n+l))+(n*l)+((n*(n-1))/2);
    cout<<res<<endl;
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        sol();
    }
    return 0;
}