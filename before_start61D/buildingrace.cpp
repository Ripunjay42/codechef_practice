#include <iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        float a,b,x,y;
        cin>>a>>b>>x>>y;
        float t1,t2;
        t1=a/x;
        t2=b/y;
        if(t1==t2)
        {
            cout<<"Both"<<endl;
        }
        else if(t1<t2)
        {
            cout<<"Chef"<<endl;
        }
        else{
            cout<<"Chefina"<<endl;
        }
    }
    return 0;
}