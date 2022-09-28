#include<bits/stdc++.h>
using namespace std;

int mod(int n){
    if(n<0){
        return -1*n;
    }
    return n;
}

int solve(int arr[], int l, int n){
    int ans=0;
    for(int i=0;i<l;i++){
        ans+=max(mod(arr[i]-n),mod(arr[i]-1));
    }
    return ans;
}

int main()
{
    int t;
    cin>>t;
    while(t--){
        int a,b;
        cin>>a>>b;
        int arr[a];
        for(int i=0;i<a;i++){
            cin>>arr[i];
        }
        cout<<solve(arr, a, b)<<"\n";
    }
    return 0;
}