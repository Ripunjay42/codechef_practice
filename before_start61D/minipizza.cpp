#include <bits/stdc++.h>
using namespace std;
void sol()
{
    int n,x,i;
    cin>>n>>x;
    int a=n*x;
    for(i=1;i!=0;i++)
    {
         if((a>(i-1)*4) && (a<=(i*4)))
        {
            cout<<i<<endl;
            break;
        }
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