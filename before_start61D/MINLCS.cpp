#include <bits/stdc++.h>
using namespace std;
void sol()
{
    int n;
    cin>>n;
    string a;
    string b;
    cin>>a;
    cin>>b;
    map<char, int> m1;
    map<char, int> m2;
    for(int i=0;i<n;i++)
    {
        m1[a[i]]++;
        m2[b[i]]++;
    }
    int ans=0;
    for(int i=0;i<n;i++)
    {   
        int  x=0, y=0;
        if(m1.find(a[i])!=m1.end())
        {
            x=m1[a[i]];
        }
        if(m2.find(a[i])!=m2.end())
        {
            y=m2[a[i]];
        }
        int k=min(x,y);
        ans=max(ans,k);
    }
    cout<<ans<<endl;
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