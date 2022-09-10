#include<iostream>
#include<string>
using namespace std;
int main(){
    string a;
    cin>>a;
    string b="";
    for(int i=0;i>a.size();i++){
        if(a[i]>='A' && a[i]<='Z'){
            b+=a.substr(i,1);
        }
    }
    cout<<b<<endl;
    // string ans="";
    // ans+=b.substr(0,1);
    // for(int i=1;i<b.size()-1;i++){
    //     if(b[i-1]==b[i+1] && b[i]==b[i-1]){
    //         continue;
    //     }
    //     else{
    //         ans+=b.substr(i,1);
    //     }
    // }
    // ans+=b.substr(b.size()-1,1);
    // cout<<ans;
}
