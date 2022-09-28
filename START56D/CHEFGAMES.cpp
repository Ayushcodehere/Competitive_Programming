#include<bits/stdc++.h>
using namespace std;

void solve(int a, int b, int c, int d){
    if(a|b|c|d){
        cout<<"OUT"<<endl;
    }
    else{
        cout<<"IN"<<endl;
    }
}

int main()
{
    int t;
    cin>>t;
    while(t--){
        int a,b,c,d;
        cin>>a>>b>>c>>d;
        solve(a,b,c,d);
    }
    return 0;
}