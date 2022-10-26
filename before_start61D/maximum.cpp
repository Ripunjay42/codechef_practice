#include <bits/stdc++.h>
using namespace std;
int  main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,c=0;
        cin>>n;
        string s;
        cin>>s;
        for(int i=1;i<n-1;i++)
        {
            if(s[i]=='1' && s[i-1]=='0')
            {
                c++;
            }
        }
        if((s[n-2])=='0')
            c++;
        if((s[0])=='1')
            c++;
        cout<<c<<endl;
    }
    return 0;
}