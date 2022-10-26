#include <iostream>
using namespace std;
class Base1
{
public:
    int x;
    Base1(int i)
    {
        x = i;
    }
};
class Base2
{
public:
    int p, q, r;
    Base2(int a, int b, int c)
    {
        p = a;
        q = b;
        r = c;
    }
};
class Deri : public Base1, public Base2
{
public:
    Deri(int g, int h, int j) : Base1(g), Base2(g, h, j)
    {
        x = g;
        p = g;
        q = h;
        r = j;
    }
    void show()
    {
        cout << "x = " << x << endl;
        cout << "p = " << p << " ,q = " << q << " ,r = " << r << endl;
    }
};
int main()
{
    Deri ob1(4, 6, 9);
    ob1.show();
    return 0;
}
