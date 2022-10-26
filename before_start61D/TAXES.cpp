#include <bits/stdc++.h>
using namespace std;
void sol()
{
   int x;
   cin>>x;
   if(x<=100)
   {
    cout<<x<<endl;
   }
   else
   {
        cout<<(x-10)<<endl;
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