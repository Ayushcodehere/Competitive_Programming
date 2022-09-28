#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--){
        int n,ele, max=0;
        cin>>n;
        int arr[n+1]={0};
        for(int i=0;i<n;i++){
            cin>>ele;
            arr[ele]++;
            max=arr[ele]>max?arr[ele]:max;
        }
        cout<<n-max<<'\n';
    }
    return 0;
}