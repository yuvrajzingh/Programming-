#include<iostream>
using namespace std;
class shape
{
    protected:
        float areac;
        float areat;
        float arear;
};
class circle : public shape
{
    public:
        void area()
        {
            int a;
            cout<< "enter radius :";
            cin>>a;
            areac = 3.14*a*a;
            cout << "Circle area : " << areac << endl;
        }
};
class triangle : public shape
{
public:
        void area()
        {
            int a,b;
            cout << "enter two sides :";
            cin >> a;
            cin >> b;
            areat = 0.5*a*b;
            cout << "Triangle area : " << areat << endl;
        }
};
class rectangle : public shape
{
    public:
        void area()
        {
           int a,b;
            cout << "enter two sides :";
            cin >> a;
            cin >> b;
            arear = a*b;
            cout << "Rectangle area : " << arear << endl;
        }
};
int main()
{
    circle obc;
    obc.area();
    triangle obt;
    obt.area();
    rectangle obr;
    obr.area();
    return 0;
}