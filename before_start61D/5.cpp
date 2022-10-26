#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
void sol()
{
    int n ,count=0,cnt=0;
    string s;
    cin>>n;
    cin>>s;
    for(int i=0;i<n;i++)
    {
        if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u')
        {
            count=0;
        }
        else
        {
            count++;
        }
        if(count>3)
        {
            cnt=1;
        }
    }
    if(cnt==1)
    {
        cout<<"NO"<<endl;
    }
    else{
        cout<<"YES"<<endl;
    }

}
int main()
{
    ll t;
    cin>>t;
    for(ll i=0;i<t;i++)
    {
        sol();
    }
    return 0;
}