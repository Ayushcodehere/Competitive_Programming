#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--){
        int n, even=0, odd=0;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++){
            cin>>arr[i];
            if(arr[i]%2==0){
                even++;
            }
            else{
                odd++;
            }
        }
        if(even==n || odd==n){
            cout<<0<<'\n';
        }
        else{
            cout<<even<<'\n';
        }
    }
    return 0;
}