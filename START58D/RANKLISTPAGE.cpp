#include<bits/stdc++.h>
using namespace std;

int solve(int n){
    if(n%25==0){
        return n/25;
    }
    else{
        return n/25+1;
    }
}

int main()
{
    int t;
    cin>>t;
    while(t--){
        int a;
        cin>>a;
        cout<<solve(a)<<'\n';
    }
    return 0;
}