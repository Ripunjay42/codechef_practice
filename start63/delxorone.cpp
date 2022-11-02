#include <bits/stdc++.h>
using namespace std;
void sol()
{
    int n;
    cin>>n;
    int a[n];
    map<int, int> m;
    for (int i = 0; i < n; i++)
    {   
        cin>>a[i];
        m[a[i]]++;
    }
    int res=0;
    int b[n+1]={0};
    for (auto it:m)
    {
        res=max(res, it.second);
        b[it.first]=it.second;
    }
    int res1=0;
    for (int i = 0; i < n; i++)
    {
        if((i^(i+1))<=1)
        {
            res1=max(res1,b[i]+b[i+1]);
        }
    }
    res=max(res,res1);
    cout<<n-res<<endl;
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