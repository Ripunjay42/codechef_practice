#include <bits/stdc++.h>
using namespace std;
void sol()
{
	    int n;
	    cin>>n;
	    int a[n];
	    for(int i=0;i<n;i++){
	        cin>>a[i];
	    }
	    int l= 0,h=n-1, c=0;
        while(l <h)
        {
            if(a[l] == a[h]) 
                l++,h--;
            else if(a[l] > a[h])
            {
                a[l] =a[l] - a[h];
               h--;
                c++;
            }
            else
            {
                a[h]=a[h] - a[l];
	            l++;
	            c++;
	        }
        }
	    cout<<c<<endl;
	}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        sol();
    }
    return 0;
}