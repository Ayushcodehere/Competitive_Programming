#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int n,i,j,count;
	    cin>>n;
	    int ans[n];
	    i=0;
	    j=n-1;
	    count=n;
	    while(j>=i){
	        if(i==j) ans[i++]=count;
	        
	        else{
	        ans[j--]=count;
	        count--;
	        ans[i++]=count;
	        count--;
	        }
	    }
	   
	    for(int p=0;p<n;p++){
	        cout<<ans[p]<<" ";
	    }
	    cout<<"\n";
	}
	return 0;
}
