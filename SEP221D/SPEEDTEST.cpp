#include <iostream>
using namespace std;
void result(float a, float b, float c, float d){
    if(a/b>c/d){
        cout<<"Alice"<<endl;
    }
    else if(a/b<c/d){
        cout<<"Bob"<<endl;
    }
    else{
        cout<<"Equal"<<endl;
    }
}
int main() {
	int t;
	cin>>t;
	while(t--){
	    float a,b,c,d;
	    cin>>a>>b>>c>>d;
	    result(a,b,c,d);
	}
	return 0;
}
