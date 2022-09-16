#include<bits/stdc++.h>
using namespace std;

string lower(string a){
    for(int i=0;i<a.size();i++){
        if(a[i]>='A' && a[i]<='Z'){
            a[i]=a[i]-('A'-'a');
        }
    }
    return a;
}

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    string one;
    string two;
    cin>>one>>two;
    one=lower(one);
    two=lower(two);
    for(int i=0;i<one.size();i++){
        if(one[i]<two[i]){
            cout<<-1<<endl;
            return 0;
        }
        else if(one[i]>two[i]){
            cout<<1<<endl;
            return 0;
        }
    }
    cout<<0<<endl;
    return 0;
}
