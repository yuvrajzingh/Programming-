#include<iostream>
using namespace std;

class shape
{
    public:
        virtual void getArea()=0; //pure virtual function

};

class circle:public shape 
{
    public: 
        void getArea()
        {
            cout<<"enter radius for circle : ";
            int r;
            cin>>r;
            cout<<"area of circle is : "<<(3.14*r*r);
        }
};
class square:public shape 
{
    public: 
        void getArea()
        {
            cout<<"enter side for square : ";
            int r;
            cin>>r;
            cout<<"area of square is : "<<(r*r);
        }
};
class rectangle:public shape 
{
    public: 
        void getArea()
        {
            cout<<"enter length and breadth for rectangle : ";
            int l, b ;
            cin>>l>>b;
            cout<<"area of rectangle is : "<<(l*b);
        }
};


int main()
{
    circle c;
    c.getArea();
    cout<<endl;
    square s;
    s.getArea();
    cout<<endl;
    rectangle r;
    r.getArea();
    return 0;
}