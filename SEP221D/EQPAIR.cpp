#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int solve(){
    int n, ele;
    scanf("%d", &n);
    int arr[100]={0};
    for(int i=0;i<n;i++){
        scanf("%d", &ele);
        arr[ele]+=1;
    }
    int ans=0;
    for(int i=0;i<100;i++){
        if(arr[i]>2){
            ans+=arr[i]*(arr[i]-1)/2;
        }
    }
    return ans;
}

int main(){
    int t;
    scanf("%d", &t);
    while(t--){
        printf("%d\n", solve());
    }
    return 0;
}