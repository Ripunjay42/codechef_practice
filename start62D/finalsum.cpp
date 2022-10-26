#include <bits/stdc++.h>
using namespace std;
void sol()
{
    int n,q;
    cin>>n>>q;
    int a[n];
    int sum=0;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        sum+=a[i];
    }
    while(q--)
    {
        int l,r;
        cin>>l>>r;
        if((r-l)%2==0)
            sum++;
    }
    cout<<sum<<endl;
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