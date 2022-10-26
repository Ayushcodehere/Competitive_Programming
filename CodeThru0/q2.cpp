#include<bits/stdc++.h>
using namespace std;

bool solve(int arr[], int s, int e, int x, int y){
    int max=arr[s], min=arr[s];
    for(int i=s;i<=e;i++){
        max=arr[i]>max?arr[i]:max;
        min=arr[i]<min?arr[i]:min;
    }
    if(max==max(x,y)&&min==min(x,y)){
        cout<<e-s+1<<"\n";
        return true;
    }
    else{
        return false;
    }
}

int main()
{
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        int x,y;
        cin>>x>>y;
        int start=0, end=n-1;
        while(!solve(arr, start, end, x, y)){
            
        }
    }
    return 0;
}