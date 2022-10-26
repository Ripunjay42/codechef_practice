#include <bits/stdc++.h>
using namespace std;
void sol()
{
    int a,b;
    cin>>a>>b;
    for(int i=2;i!=0;i++)
        for(int j=2;j!=0;j++)
            {
                if(pow(i,a)==pow(j,b))
                {
                    cout<<"yes"<<endl;
                    break;
                }
            }
    cout<<"NO"<<endl;
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