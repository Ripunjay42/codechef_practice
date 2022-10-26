#include <bits/stdc++.h>
using namespace std;
int sol()
{
    int x;
    cin>>x;
    int i;
    for(i=1;i!=0;i++)
    {
        if((x>(i-1)*25) && (x<=(i*25)))
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