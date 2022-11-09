#include <bits/stdc++.h>
using namespace std;
int sol()
{
   int n;
   cin>>n;
   string s;
   cin>>s;
   int m=n/2;
   char a[m], b[m];
   for(int i=0;i<m;i++)
   {
        if(s[i]!=s[m+i])
        {
            return 1;
        }
   }
   return 0;
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        if(sol())
            cout<<"NO"<<endl;
        else    
            cout<<"YES"<<endl;
    }
    return 0;
}