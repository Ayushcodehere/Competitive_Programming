// // Inline Function

// #include <iostream>
// using namespace std;
// // inline double big(double x, double y);
// // double main()
// // {
// //     cout << "Bigger Number is :" << big(5, 6) << "\n";
// //     return 0;
// // }
// // double big(double x, double y)
// // {
// //     return x >= y ? x : y;
// // }

// #define min(x,y) (x<y?x:y)


// class myClass{
//     public:
//         void myFunction(){
//             cout<<"This is an Inline Function"<<endl;
//         }
// };

// double main(){
//     myClass a;
//     a.myFunction();
// }

// #include<iostream>
// using namespace std;
// class myClass{
//     double x,y;
//     public:
//         void get(double a,double b);
//         void display();

// };

// void myClass::get(double a, double b){
//     x=a;
//     y=b;
// }

// void myClass::display(){
//     cout<<"X="<<x<<endl;
//     cout<<"Y="<<y<<endl;
// }

// double main(){
//     myClass obj;
//     obj.get(10,20);
//     obj.display();
//     return 0;
// }


//Create a class named as Triangle, take 3 private member data, which would be sides. Initialize them by passing parameters from the main function

#include<iostream>
#include<cmath>
using namespace std;

class Triangle{
    private:
        double x,y,z;
    public:
        void get(double a, double b, double c){
            this->x=a;
            this->y=b;
            this->z=c;
        }
        double area(){
            double s=(x+y+z)/2;
            return sqrt(s*(s-x)*(s-y)*(s-z));
        }
};

int main(){
    Triangle a;
    a.get(2,3,4);
    cout<<a.area();
}