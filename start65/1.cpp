#include <bits/stdc++.h>
using namespace std;
int sol()
{
    int n;
    cin>>n;
    int m=2*n;
    int a[m];
    unordered_map<int, int> mp;
    for(int i=0;i<m;i++)
    {
        cin>>a[i];
        mp[a[i]]++;
    }
    for(auto x:mp)
    {
        if(x.second>2)
        {
            return 0;
            break;
        }
    }
    return 1;
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        if(sol())
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
    return 0;
}