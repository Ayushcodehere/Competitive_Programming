#include<bits/stdc++.h>
using namespace std;

class object{
    private:
        int a,b;
    public:
        object(int a, int b=10){
            this->a=a;
            this->b=b;
        }
        object(int a){
            this ->a=a;
            this->b=10;
        }
};

int main(){
    object a = object(1);
    return 0;
}