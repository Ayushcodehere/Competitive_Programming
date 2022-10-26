#include <iostream>
using namespace std;
class Figure
{
protected:
    double x;

public:
    Figure(double a)
    {
        x = a;
    }
    virtual void show_area() = 0;
};
class Circle : public Figure
{
public:
    Circle(double b) : Figure(b){};
    void show_area()
    {
        cout << "area = " << x * x * 3.14 << endl;
    }
};
class Square : public Figure
{
public:
    Square(double b) : Figure(b){};
    void show_area()
    {
        cout << "area = " << x * x << endl;
    }
};
int main()
{
    Square a(5);
    a.show_area();
    Circle b(10);
    b.show_area();
    return 0;
}
