#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    vector<int> arr;
	    
	    arr.push_back(n-1);
	    arr.push_back(n-2);
	    for(int i=1;i<n-2;i++){
	        arr.push_back(i);
	    }
	    arr.push_back(n);
	    
	    for(int j=0; j<n;j++){
	        cout<<arr[j]<<" ";
	    }
	    cout<<"\n";
	}
	return 0;
}