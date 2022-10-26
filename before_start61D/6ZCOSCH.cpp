#include <bits/stdc++.h>
using namespace std;
// typedef long long ll;
void sol()
{
    int r;
    cin>>r;
    if(r>=1 && r<=50)
    {
        cout<<"100"<<endl;
    }    
    else if(r>=51 && r<=100)
    {
        cout<<"50"<<endl;
    }
    else{
        cout<<"0"<<endl;
    }
}
int main()
{

    sol();
    return 0;
}