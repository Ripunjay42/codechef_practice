#include <bits/stdc++.h>
using namespace std;
int mopt(int a[], int n)
{
    int size = (*max_element(a, a + n)) + 1;
    int f[size];
    for (int i=0;i<size;i++)
        f[i] = 0;
    for (int i=0;i<n;i++)
        f[a[i]]++;
    int max_freq = *max_element(f, f + size) ;
    return (n - max_freq); 
}
int main()
{
    int t;
    cin>>t;
    for(int i=0;i<t;i++)
    {   
        int n;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++)
        {
             cin>>a[i];
        }
        cout<<mopt(a,n)<<endl;
    }
    return 0;
}