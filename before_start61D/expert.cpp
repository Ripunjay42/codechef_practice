#include <bits/stdc++.h>
using namespace std;
void sol()
{
    float x,y;
    cin>>x>>y;
    float z=x*0.5;
    if(y>=z)
    {
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
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