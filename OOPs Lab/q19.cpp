#include <iostream>
#include <math.h>
using namespace std;
class A
{
protected:
    int x;

public:
    A()
    {
        cout << "Enter x" << endl;
        cin >> x;
    }
    friend int operator-(int y, A ob)
    {
        int dif2;
        dif2 = y - ob.x;
        return dif2;
    }
    friend int operator-(A ob, int y)
    {
        int dif;
        dif = ob.x - y;
        return dif;
    }
};
int main()
{
    int y;
    cout << "Enter an integer" << endl;
    cin >> y;
    A a;
    int d1, d2;
    d1 = a - y;
    cout << "a-y = " << d1 << endl;
    d2 = y - a;
    cout << "y-a = " << d2 << endl;
    return 0;
}