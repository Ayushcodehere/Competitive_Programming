#include<bits/stdc++.h>
using namespace std;
int solve(int n){
    int ans=0;
    while(n>0){
        ans+=n%3;
        n=n/3;
    }
    return ans;
    
}

int main(){
    int t;
    scanf("%d", &t);
    int n;
    while(t--){
        scanf("%d", &n);
        printf("%d\n",solve(n));
    }
    return 0;
}