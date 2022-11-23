#include <bits/stdc++.h>
using namespace std;
void sol()
{
    string s;
    cin>>s;
    int c1=0;
    int c2=0;
    for(int i=0;i<s.length();i++)
    {
        if(s[i]=='1')
        {
            s[i]='0';
        }
        else{
            s[i]='1';
        }
        for(int j=0;j<s.length();j++)
        {
            if(s[j]=='0' && s[j+1]=='1')
            {
                c1++;
            }
            if(s[j]=='1' && s[j+1]=='0')
            {
                c2++;
            }
        }
        if(c1==c2)
        {
            c++;
        }        
    }
    cout<<c<<endl;
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        sol();
    }
    return 0;
}