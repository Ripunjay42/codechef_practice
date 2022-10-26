#include <bits/stdc++.h>
using namespace std;
void sol()
{
    int n;
    cin>>n;
    map<int,int> m;
    for(int i=0;i<n;i++)
    {   
        int e;
        cin>>e;
        m[e]++;
    }
    int max=0;
    for(auto i:m)
    {
        if(i.second>=max)
            max=i.second;
    }
    cout<<n-max<<endl;
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