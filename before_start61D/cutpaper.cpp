#include <bits/stdc++.h>
using namespace std;
void sol()
{
    int n,k;
    cin>>n>>k;
    int w=n-(n%k);
    int x=w*w;
    int y=k*k;
    int z=x/y;
    cout<<z<<endl;

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