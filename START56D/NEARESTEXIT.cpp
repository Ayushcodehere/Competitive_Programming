#include<bits/stdc++.h>
using namespace std;

void solve(int n){
    if(n<=50){
        cout<<"LEFT"<<endl;
    }
    else{
        cout<<"RIGHT"<<endl;
    }
}

int main()
{
    int n;
    cin>>n;
    while(n--){
        int t;
        cin>>t;
        solve(t);
    }
   return 0;
}