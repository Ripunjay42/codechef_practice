#include <bits/stdc++.h>
using namespace std;
void sol()
{
   int n,c=0;
   cin>>n;
   int a[n];
   for(int i=0;i<n;i++)
   {
    cin>>a[i];
   }
    for(int i=1;i<n-1;i++)
    {
        if(a[i]!=a[i+1] || a[i]!=a[i-1])
        {
            c++;
        }
    }
    if(a[n-1]!=a[n-2])
    {
        c++;
    }
    if(a[0]!=a[1])
	{    
        c++;
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