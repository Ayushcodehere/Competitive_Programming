#include<bits/stdc++.h>
using namespace std;
string sort(string a){
    sort(a.begin(), a.end());
    return a;
}
int main(){
    string a,b;
    int t;
    cin>>t;
    while(t--){
        cin>>a>>b;
        a=sort(a);
        b=sort(b);
        if(a==b){
            cout<<"happy"<<endl;
        }
        else{
            cout<<"sad"<<endl;
        }
    }
    return 0;
}