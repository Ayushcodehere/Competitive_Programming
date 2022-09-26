#include <iostream>
using namespace std;

void solve(int n){
    if(n<7){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
}

int main() {
	int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        solve(n);
    }
	return 0;
}
