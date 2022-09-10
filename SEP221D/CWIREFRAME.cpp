#include <iostream>
using namespace std;

int result(int l, int b, int c){
    return 2*c*(l+b);
}

int main() {
    int t;
    cin>>t;
    while(t--){
        int l,b,c;
        cin>>l>>b>>c;
        cout<<result(l,b,c)<<endl;
    }
    return 0;
}
