#include <bits/stdc++.h>
using namespace std;
#define ll long long
void sol()
{
   ll a,b;
   cin>>a>>b;
   int t=0;
    while(gcd(a,b)>1)
    {
        b/=gcd(a,b);
    }
    if(b<=1)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;

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