#include <bits/stdc++.h>
using namespace std;
void sol()
{
    int n;
    cin>>n;
    string s;
    cin>>s;
    int o=0, z=0;
    if(n%2==0)
    {
        for(int i=0;i<n;i++)
        {
           if(s[i]=='1')
           {
            o++;
           }
           else{
            z++;
            }
        }
        if(o%2==0 && z%2==0)
        {
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
    else{
        cout<<"YES"<<endl;
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