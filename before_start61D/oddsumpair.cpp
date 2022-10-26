#include <bits/stdc++.h>
using namespace std;
void sol()
{
    int a,b,c;
    cin>>a>>b>>c;
    int x=a+b;
    int y=b+c;
    if(x%2==1 || y%2==1)
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