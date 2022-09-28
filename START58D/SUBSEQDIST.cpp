#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--){
        int n,ele,max=0;
        cin>>n;
        vector<int> arr;
        for(int i=0;i<n;i++){
            cin>>ele;
            arr.push_back(ele);
        }
        sort(arr.begin(), arr.end());
        int start=0, end=0;
        while(start<arr.size() && end<arr.size()){
            if(arr[end]==arr[start]){
                end++;
                continue;
            }
            else{
                max=(end-start)>max?(end-start):max;
                end=start;
            }
        }
        max=(end-start)>max?(end-start):max;
        cout<<max-1;
    }
    return 0;
}