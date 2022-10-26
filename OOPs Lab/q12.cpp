#include <iostream>
using namespace std;
class Base1
{
private:
    Base1()
    {
        cout << "In base 1" << endl;
    }
};
class Derived1 : Base1
{
};
int main()
{
    Derived1 ob;
    return 0;
}
