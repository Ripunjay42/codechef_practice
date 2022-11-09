#include <bits/stdc++.h>
using namespace std;
void sol()
{
   int n;
   cin>>n;
   int a[n];
   int minm=INT_MAX;
   for(int i=0;i<n;i++)
   {
        cin>>a[i];
        minm=min(minm,a[i]);
   }
   int res=0; 
   int t=0;
   for(int i=0;i<n;i++)
   {
     if((a[i])!=minm)
     {
        if(a[i]%minm==0)
        {
                res++;
        }
        else
        {
            t=1;
            break;
        }
      }
    }
     if(t)
        cout<<n<<endl;
     else
        cout<<res<<endl;
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