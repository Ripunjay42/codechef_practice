#include <bits/stdc++.h>
using namespace std;
void sol()
{
    int n,ex=0;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        ex^=a[i];
    }
    cout<<ex<<endl;
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