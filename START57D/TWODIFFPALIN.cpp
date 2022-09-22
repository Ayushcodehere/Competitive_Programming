#include<bits/stdc++.h>
using namespace std;
void solve(int x, int y){
    if(x*y%2==0 && x>1 && y>1 && x+y>3){
        cout<<"Yes\n";
    }
    else{
        cout<<"No\n";
    }
}

int main(){
    int t,x,y;
    cin>>t;
    while(t--){
        cin>>x>>y;
        solve(x,y);
    }
}