#include <bits/stdc++.h>
using namespace std;

void solve(string a, int n){
    if(n<=2){
        cout<<a<<endl;
    }

    else{
        sort(a.begin(), a.end());
        cout<<a<<endl;
    }
}

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        string s;
        cin>>n>>s;
        solve(s,n);
    }
    return 0;
}