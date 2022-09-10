#include <iostream>
using namespace std;

int result(int q, int x, int y, int z){
    return q+(x-y)*z;    
}

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int w,x,y,z;
	    cin>>w>>x>>y>>z;
	    cout<<result(w,x,y,z)<<endl;
	}
	return 0;
}
