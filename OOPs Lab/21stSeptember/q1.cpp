#include<bits/stdc++.h>
using namespace std;
class shape{
    private:
        int x,y;
    public:
        void get(){
            printf("Enter the length of the shape: \n");
            cin>>x;
            printf("Enter the breadth of the shape: \n");
            cin>>y;
        }
        int area(){
            return x*y;
        }
};

int main(){
    shape a;
    a.get();
    printf("The area of the input shape is %d", a.area());
    return 0;
}