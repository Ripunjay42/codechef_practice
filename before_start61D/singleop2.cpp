#include <iostream>
using namespace std;
int  main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,count=0;
        cin>>n;
        char s[n];
        cin>>s;
        for(int i=0;s[i]!='\0';i++)
        {
            count++;
            if(s[i+1]=='1')
            {
                break;
            }
        }
        cout<<count<<endl;
    }
    return 0;
}