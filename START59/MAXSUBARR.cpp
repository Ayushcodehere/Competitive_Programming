#include<bits/stdc++.h>
using namespace std;

int solve(int arr[], int n, int sum){
    int sum1=0, sum2=0;
    bool a=true;
    int neg;
    int negSum=0;
    for(int i=0;i<n;i++){
        if(arr[i]>=0){
            sum1+=arr[i];
            if(!a){
                negSum+=arr[i];
            }
        }
        else if(a){
            sum1+=arr[i];
            a=false;
            neg=-1*arr[i];
        }
        else{
            break;
        }
    }
    if(neg>negSum){
        sum1=sum1-negSum+neg;
    }
    a=true;
    neg=0;
    negSum=0;
    for(int i=n-1;i>=0;i--){
        if(arr[i]>=0){
            sum2+=arr[i];
            if(!a){
                negSum+=arr[i];
            }
        }
        else if(a){
            sum2+=arr[i];
            a=false;
            neg=-1*arr[i];
        }
        else{
            break;
        }
    }
    if(neg>negSum){
        sum2=sum2-negSum+neg;
    }
    return max(sum1,sum2)+sum;
}

int main()
{
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int arr1[n];
        for(int i=0;i<n;i++){
            cin>>arr1[i];
        }
        int m;
        cin>>m;
        int sum=0, ele;
        for(int i=0;i<m;i++){
            cin>>ele;
            if(ele>0){
                sum+=ele;
            }
        }
        cout<<solve(arr1,n,sum)<<'\n';
    }
    return 0;
}