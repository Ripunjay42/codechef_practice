#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int  c[n], t[n];
    for(int i=0;i<n;i++)
    {
        std::cin>>c[i];
    }
    for(int i=0;i<n;i++)
    {
        std::cin>>t[i];
    }
    long int x=100001; 
    long int y=100001; 
    long int z=100001;
    for(int i=0;i<n;i++)
    {
        if((t[i]==1) && c[i]<x)
        {
                x=c[i];
        }
        else if((t[i]==2) && (c[i]<y))
        {
                y=c[i];
        }
        else
        {
            if (c[i]<z)
                    z=c[i];
        }
    }
    if((x+y)<z)
      {
        std::cout<<x+y<<endl;
      }
    else
        {
            std::cout<<z<<endl;
        }   
    return 0;
}