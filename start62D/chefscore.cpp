#include <bits/stdc++.h>
using namespace std;
void sol()
{
    int n,x,y;
    cin>>n>>x>>y;
    if(y%x==0)
    {
        cout<<"YES"<<endl;
    }
    else
    {
        cout<<"NO"<<endl;
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