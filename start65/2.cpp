#include <bits/stdc++.h>
using namespace std;

int main()
{
   int t;
    cin>>t;
    while(t--)
    {
        int n,k;
    cin>>n>>k;
    int a[n];
    int f=0;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        if(a[i]==k and i!=n-1)
        {
            f=1;
        }
    }
    if(n==1 and k==a[0])
    {
         cout<<"YES"<<endl;
         continue;
    }
    if(!f)
    {
        cout<<"NO"<<endl;
    }
    else
    {
        cout<<"YES"<<endl;
    }        
}
return 0;
}