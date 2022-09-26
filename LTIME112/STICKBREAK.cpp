#include<bits/stdc++.h>
using namespace std;
bool solve(int n, int k){
    if(n%k==0){
        return false;
    }
    else{
        return true;
    }
}
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        cout<<solve(n,k)<<"\n";
    }
    return 0;
}