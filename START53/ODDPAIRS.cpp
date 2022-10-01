#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int T;
	cin>>T;
	while(T--){
	    long long int n;
	    cin>>n;
	    long long int ans= (n*(n+1)/2)-(n/2);
	    if(n%2==0)
	    cout<<ans<<endl;
	    else
	    cout<<ans-1<<endl;
	}
	return 0;
}
