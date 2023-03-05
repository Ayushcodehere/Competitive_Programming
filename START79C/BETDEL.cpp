#include <iostream>
using namespace std;

void solve(int a, int b){
    if(((100-a))<((100-b)*2)){
        cout<<"FIRST\n";
    }
    else if (((100-a))>((100-b)*2)){
        cout<<"SECOND\n";
    }
    else{
        cout<<"BOTH\n";
    }
}

int main() {
	// your code goes here
    int t;
    cin>>t;
    while(t--){
        int a,b;
        cin>>a>>b;
        solve(a,b);
    }
	return 0;
}
