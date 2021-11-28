#include<iostream>
using namespace std;

class myClass
{
    public:
        int x;
        static int count;

        myClass()  //default constructor
        {
            count++;
        }
};

//initialization
int myClass::count=0;

int main()
{
    cout<<"the count is: "<<myClass::count;
    myClass obj1,obj2;  //default constructor is called
    cout<<"\ncount after 2 is : "<<myClass::count;
    return 0;
}