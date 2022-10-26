#include <iostream>
using namespace std;
class ClassA
{
public:
    int a;
};
class ClassB : virtual public ClassA
{
public:
    int b;
};
class ClassC : virtual public ClassA
{
public:
    int c;
};
class ClassD : public ClassB, public ClassC
{
public:
    int d;
};
int main()
{
    ClassD obj;
    obj.a = 30;
    obj.b = 35;
    obj.c = 60;
    obj.d = 72;
    cout << "\n A : " << obj.a;
    cout << "\n B : " << obj.b;
    cout << "\n C : " << obj.c;
    cout << "\n D : " << obj.d;
    return 0;
}