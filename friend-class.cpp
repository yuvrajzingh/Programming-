#include<iostream>
using namespace std;

class Myclass1
{
    friend class Myclass2;// Myclass2 is a friend of Myclass1

    private:
        int x;
    public:
        Myclass1(int a)
        {
            x = a;
        }    
};

class Myclass2
{
    public:
        void showData(Myclass1 obj)
        {
            cout<<"x value is: "<<obj.x;
        }
};

int main()
{
    Myclass1 obj1(5);
    Myclass2 obj2;
    obj2.showData(obj1);

    return 0;
}