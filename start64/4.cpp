#include <bits/stdc++.h>
using namespace std;
#define ll long long
void sol()
{
   ll n;
   cin>>n;
   vector<ll> a(n);
   for(ll i=0;i<n;i++)
   {
     cin>>a[i]; 
   }
   if(n<=2)
    {
        cout<<"YES"<<endl;
    }
    else if(a[0]==a[n-1] || a[0]==a[n-2] || a[1]==a[n-1])
    {
        cout<<"YES"<<endl;
    }
    else
    {
        bool f=true;
        ll b= a[0];
        for (ll i = 1; i <= n-3; i++)
        {
            if(a[i]==b)
            {
                if(a[i+1]==a[n-1])
                {
                    cout<<"YES"<<endl;
                    f=false;
                    break;
                }
            }
        }
        if(f)
        {
            cout<<"NO"<<endl;
        }    
        
    }
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