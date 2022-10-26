#include <bits/stdc++.h>
using namespace std;
void sol()
{
    int n;
    cin>>n;
    unordered_map<int, int> m;
    for(int i=0;i<=sqrt(n);i++)
    {
        for(int j=0;j<=sqrt(n);j++)
        {
            if((pow(i,2)+pow(j,2))==n)
                m[i]=j;
        }
    }
    if(m.empty())
    {
        cout<<-1<<endl;
    }
    else
    {   
        int min=sqrt(n);
        for(auto it:m)
        {   
            int v=abs(it.first-it.second);
            if(min>v)
            {
                min=v;
            }
        }
        for(auto it:m)
        {
            if(it.first-it.second==min)
            {
                cout<<it.first<<" "<<it.second<<endl;
            }
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