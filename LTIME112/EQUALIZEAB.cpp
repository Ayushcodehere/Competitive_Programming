#include <bits/stdc++.h>
using namespace std;

string solve(int a, int b, int x){
    if((b-a)%(x*2)==0){
        return "YES";
    }
    else{
        return "NO";
    }
}

int main() {
	int t;
    cin>>t;
    while(t--){
        int a,b,x;
        cin>>a>>b>>x;
        cout<<solve(min(a,b),max(a,b),x)<<endl;
    }
	return 0;
}
