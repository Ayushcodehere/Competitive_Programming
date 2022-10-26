#include <iostream>
using namespace std;
class Base
{
public:
    int x;
    virtual void show() { x = 0; };
};
class Derived1 : public Base
{
public:
    int y;
    void show()
    {
        x = 33;
        y = 40;
        cout << "x in derived = " << x << endl;
        cout << "y in derived = " << y << endl;
        cout << "\n";
    }
};
class Derived2 : public Derived1
{
public:
    int y;
    void show()
    {
        x = 22;
        y = 45;
        cout << "x in derived = " << x << endl;
        cout << "y in derived = " << y << endl;
        cout << "\n";
    }
};
int main()
{
    Base *bptr;
    Derived2 d;
    bptr = &d;
    bptr->show();
    return 0;
}
