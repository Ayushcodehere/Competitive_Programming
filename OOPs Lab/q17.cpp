#include <iostream>
#include <math.h>
using namespace std;
class cal
{
protected:
    double x;
    double y;

public:
    cal() {}
    cal(int p, int q)
    {
        x = p;
        y = q;
    }
    cal operator+(cal t)
    {
        cal temp;
        temp.x = x + t.x;
        temp.y = y + t.y;
        return temp;
    }
    cal operator-(cal t)
    {
        cal temp;
        temp.x = x - t.x;
        temp.y = y - t.y;
        return temp;
    }
    cal operator*(cal t)
    {
        cal temp;
        temp.x = x * t.x;
        temp.y = y * t.y;
        return temp;
    }
    cal operator/(cal t)
    {
        cal temp;
        temp.x = x / t.x;
        temp.y = y / t.y;
        return temp;
    }
    void display()
    {
        cout << "x = " << x << endl;
        cout << "y = " << y << endl;
    }
};
int main()
{
    cal a(8, 4), b(2, 4), c;
    c = a + b;
    cout << "a + b : " << endl;
    c.display();
    c = a - b;
    cout << "a - b : " << endl;
    c.display();
    c = a * b;
    cout << "a * b : " << endl;
    c.display();
    c = a / b;
    cout << "a / b : " << endl;
    c.display();
    return 0;
}
