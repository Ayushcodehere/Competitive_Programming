#include <iostream>
using namespace std;

int solve(int n, int x){
    return min(x,n-x);
}

int main() {
	// your code goes here
    int t;
    cin>>t;
    while(t--){
        int n,x;
        cin>>n>>x;
        cout<<solve(n,x)<<endl;
    }
	return 0;
}
