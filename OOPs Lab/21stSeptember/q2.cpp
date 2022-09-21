#include <bits/stdc++.h>
using namespace std;

class triangle
{
protected:
    int a, b, c;

public:
    triangle(int a, int b, int c)
    {
        this->a = a;
        this->b = b;
        this->c = c;
    }
    double area(int a, int b)
    {
        return (double)a * b * 0.5;
    }
    double area(int a, int b, int c)
    {
        double s;
        s = (a + b + c) / 2;
        return sqrt(s * (s - a) * (s - b) * (s - c));
    }
    void display(double a)
    {
        printf("The area of the triangle is %0.2lf\n", a);
    }
    void check()
    {
        if ((a * a == b * b + c * c) || (a * a + c * c == b * b) || (a * a + b * b == c * c))
        {
            printf("It is a right angled triangle\n");
            if (c > a && c > b)
            {
                display(area(a, b));
            }
            else if (b > a && b > c)
            {
                display(area(a, c));
            }
            else if (a > b && a > c)
            {
                display(area(c, b));
            }
        }
        else
        {
            printf("The triangle is not a right angled triangle\n");
            display(area(a, b, c));
        }
    }
};

int main()
{
    int b, c, d;
    cout << "Enter the first side of the triangle: ";
    cin >> b;
    cout << "Enter the second side of the triangle: ";
    cin >> c;
    cout << "Enter the third side of the triangle: ";
    cin >> d;
    triangle a = triangle(b, c, d);
    a.check();
}
