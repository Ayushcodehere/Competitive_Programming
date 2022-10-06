#include<bits/stdc++.h>
using namespace std;

void solve(string s){
    int count=0;
    for(int i=0;i<s.size();i++){
        if(s[i]=='a'||s[i]=='e'||s[i]=='o'||s[i]=='i'||s[i]=='u'){
            count++;
            if(count>2){
                cout<<"Happy\n";
                return;
            }
            continue;
        }
        else{
            count=0;
        }
        
    }
    cout<<"Sad\n";
    return;
}

int main()
{
    int t;
    cin>>t;
    string s;
    while(t--){
        cin>>s;
        solve(s);
    }
    return 0;
}