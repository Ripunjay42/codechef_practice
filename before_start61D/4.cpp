#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
void sol()
{
    ll a,b;
    cin>>a>>b;
    ll limak=0,bob=0;
    int i= 1;
    while(1)
    {
        if(i%2==1)
        {
            limak+=i;
        }
        else
        {
            bob+=i;
        }
        
        if(limak>a)
        {
            cout<<"Bob"<<endl;
            break;
        }
        else if(bob>b)
        {
            cout<<"Limak"<<endl;
            break;
        }
        
        i++;
        
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