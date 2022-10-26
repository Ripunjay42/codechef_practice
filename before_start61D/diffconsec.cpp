#include <bits/stdc++.h>
using namespace std;
void sol()
{
    int n;
    cin>>n;
    string s;
    cin>>s;
    int c=0;
    for(int i=0;i<n;i++)
    {
        if(s[i]=='0' && s[i+1]=='0')
        {
            c++;
        }
        if(s[i]=='1' && s[i+1]=='1')
        {
            c++;
        }
    }
    cout<<c<<endl;
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