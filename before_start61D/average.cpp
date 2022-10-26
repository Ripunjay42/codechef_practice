#include <bits/stdc++.h>
using namespace std;
void sol()
{
    int n,k;
    long long int v;
    int sum=0;
    cin>>n>>k>>v;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        sum+=a[i];
    }
    long long int b;
    int ans;
    b=((v*(n+k))-sum);
    if(b>0 && b%k==0)
    {   
        ans=b/k;
        cout<<ans<<endl;
    }
    else
    {
        cout<<-1<<endl;
    }
}
int main()
{
    int t;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        sol();
    }
    return 0;
}