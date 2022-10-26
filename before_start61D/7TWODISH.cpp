#include <bits/stdc++.h>
using namespace std;
void sol()
{
    int n,a,b,c;
    int count=0;
    cin>>n>>a>>b>>c;
    while(1)
    {
        if(a>=1 && b>=1)
        {
            count++;
            a--;
            b--;
        }
        else if(b>=1 && c>=1)
        {
            count++;
            b--;
            c--;
        }
        else{
            break;
        }
    }
    if(count>=n)
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