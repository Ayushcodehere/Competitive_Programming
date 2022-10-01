#include<bits/stdc++.h>
using namespace std;

void solve(int w, int x, int y, int z){
    if(x+y+z==w||x+y==w||y+z==w||x+z==w||x==w||y==w||z==w){
        cout<<"YES\n";
    }
    else{
        cout<<"NO\n";
    }
}

int main()
{
    int t;
    cin>>t;
    while(t--){
        int w,x,y,z;
        cin>>w>>x>>y>>z;
        solve(w,x,y,z);
    }
    return 0;
}