#include <bits/stdc++.h>
using namespace std;
void sol()
{
    int n;
    string s;
    cin>>n;
    cin>>s;
    int c=0;
    for(int i=0;i<n-1;i++)
    {
        if(s[i]=='1' and s[i+1]=='0')
            c++;
    }
    cout<<c<<endl;

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