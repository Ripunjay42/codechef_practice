#include <bits/stdc++.h>
using namespace std;
int  main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int count=1;
        string s;
        cin>>s;
        int c1=0;
        int c2=0;
        int l=s.length();
        for(int i=0;i<l-1;i++)
        {
            if(s[i]=='a' && s[i+1]=='b')
            {
                c1++;
            }
        }
        for(int i=0;i<l-1;i++)
        {
            if(s[i]=='b' && s[i+1]=='a')
            {
                c2++;
            }
        }
        int sum=0;
        if(c1==0 && c2==0)
        {
            sum=1;
        }
        else;
        sum=pow(2,c1+c2);
        sum=sum%998244353;
        cout<<sum<<endl;
    }
    return 0;
}