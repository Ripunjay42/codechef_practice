#include <bits/stdc++.h>
using namespace std;
void sol()
{
    int a,b;
    cin>>a>>b;
    int c=b%a;
    if(c)
    {
        if(b>2*a)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
    }
    else
    {
        cout<<"YES"<<endl;
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