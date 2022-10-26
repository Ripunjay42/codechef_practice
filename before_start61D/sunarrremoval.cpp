#include <bits/stdc++.h>
using namespace std;
void sol()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    stack<int> s;
    int ans=0;
    for(int i=0;i<n;i++)
    {
        if(s.empty())
        {
            s.push(a[i]);
        }
        else
        {
            if(a[i]!=s.top())
            {
                ans++;
                s.pop();
            }
            else
            {
                s.push(a[i]);
            }
        }
    }
    while(s.size()>=2)
    {
        int t=s.top();
        s.pop();
        if(t==s.top())
        {
            s.pop();
            s.push(0);
        }
        else
        {
            ans++;
            s.pop();
        }
    }
    cout<<ans<<endl;

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