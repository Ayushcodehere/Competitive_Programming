#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int t;
    cin>>t;
    while(t--){
        bool zero=false;
        int n, ele, count=0;
        cin>>n;
        for(int i=0;i<n;i++){
            cin>>ele;
            if(ele<0){
                count++;
            }
            else if(ele==0){
                zero=true;
            }
        }
        if(zero || count % 2==0){
            cout<<0<<"\n";
        }
        else{
            cout<<1<<"\n";
        }
    }
	return 0;
}
