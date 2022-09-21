#include<bits/stdc++.h>
using namespace std;

class object{
    public:
        static int count;
        object(){
            count++;
            cout<<"Object no."<<count<<" Created\n";
        }
};

int object::count=0;

int main(){
    object a,b,c;
    cout<<"The number of objects created are: "<< a.count;
}