#include<bits/stdc++.h>
using namespace std;
void solve(string a){
    vector<int> arr;
    int plus=0, minus=0;
    for(int i=0;i<a.size();i++){
        if(a[i]>='0' && a[i]<='9'){
            arr.push_back((int)(a[i]-'0'));
        }
        else if(a[i]=='+'){
            plus++;
        }
        else if(a[i]=='-'){
            minus++;
        }
    }
    sort(arr.begin(), arr.end(), greater<int>());
    int itr=0;
    int value=arr.size()-(plus+minus);
    for(itr=0;itr<value;itr++){
        cout<<arr[itr];
    }
    for(int i=0;i<plus;i++){
        cout<<"+"<<arr[itr];
        itr++;
    }
    for(int i=0;i<minus;i++){
        cout<<'-'<<arr[itr];
        itr++;
    }
}

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string a;
        cin>>a;
        solve(a);
        cout<<"\n";
    }
}