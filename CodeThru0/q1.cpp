#include<bits/stdc++.h>
using namespace std;

int mod(int n){
    if(n>0){
        return n;
    }
    else{
        return -1*n;
    }
}

int main()
{
    int t;
    cin>>t;
    while(t--){
        int a,b,c;
        cin>>a>>b>>c;
        if(mod(c-b)<=mod(a-b)){
            cout<<"AISH\n";
        }
        else{
            cout<<"SAVLON\n";
        }
    }
    return 0;
}