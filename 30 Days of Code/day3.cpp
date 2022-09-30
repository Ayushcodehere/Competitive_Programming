#include<bits/stdc++.h>
using namespace std;

void solve(int n){
    if(n%2==1){
        cout<<"Weird"<<'\n';
    }
    else{
        if(n<6){
            cout<<"Not Weird"<<'\n';
        }
        else if(n<21){
            cout<<"Weird"<<'\n';
        }
        else{
            cout<<"Not Weird"<<'\n';
        }
    }
}

int main()
{
    int n;
    cin>>n;
    solve(n);
    return 0;
}