#include<bits/stdc++.h>
using namespace std;

string solve(string s, int n){
    string res="";
    int start=0, end=n-1;
    while(start<end){
        if(s[start]=='0'){
            res="0"+res;
        }
        else{
            res=res+"1";
        }
        start++;
        if(s[end]=='0'){
            res=res+"0";
        }
        else{
            res="1"+res;
        }
        end--;
    }
    if(n%2==1){
        if(s[n/2]=='0'){
            res="0"+res;
        }
        else{
            res=res+"1";
        }
    }
    return res;
}

int main()
{
    int t;
    cin>>t;
    int n;
    string s;
    while(t--){
        cin>>n>>s;
        cout<<solve(s,n)<<'\n';
    }
    return 0;
}