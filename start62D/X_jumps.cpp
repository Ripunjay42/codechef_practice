#include <bits/stdc++.h>
using namespace std;
void sol()
{
    int x,y;
    cin>>x>>y;
    int a=x/y;
    int b=x%y;
    cout<<a+b<<endl;
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