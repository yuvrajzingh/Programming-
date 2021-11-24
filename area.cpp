#include <iostream>
#define pi 3.14
using namespace std;

class fn
{
public:
    void area(int);             
    void area(int, int);       
    void area(float, int, int);
    void area(int, float, int);
};

void fn::area(int a)
{
    cout << "\nArea of Circle:" << pi * a * a;
}
void fn::area(int a, int b)
{
    cout << "\nArea of rectangle:" << a * b;
}
void fn::area(float t, int a, int b)
{
    cout << "\nArea of triangle:" << t * a * b;
}
void fn::area(int a, float t, int b)
{
    cout << "\nArea of cylinder:" << 2 * t * a * (a + b);
}

int main()
{
    int ch;
    int a, b, r;
    fn obj;
    cout << "\n1.Area of Circle\n2.Area of Rectangle\n3.Area of Triangle\n4.Area of Cylinder\n5.Exit\n";
    cout << "Enter your Choice : ";
    cin >> ch;

    switch (ch)
    {
    case 1:
        cout << "Enter Radius of the Circle: ";
        cin >> r;
        obj.area(r);
        break;
    case 2:
        cout << "Enter Sides of the Rectangle: ";
        cin >> a >> b;
        obj.area(a, b);
        break;
    case 3:
        cout << "Enter Sides of the Triangle: ";
        cin >> a >> b;
        obj.area(0.5, a, b);
        break;
    case 4:
        cout << "Enter Radius and Height of the cyclinder: ";
        cin >> a >> b;
        obj.area(a, pi, b);
        break;
    case 5:
        exit(0);
	default : 
		cout << "Enter proper values";	
    }
    return 0;
}