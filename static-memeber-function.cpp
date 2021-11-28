#include<iostream>
using namespace std;


class myClass
{
    private:
        int x;
        static int count;
    public:
        //default constructor
        myClass()
        {
            count++;
        }

        static int getcount()
        {
            return count;
        }


};
//initialization
int myClass::count=0;

int main()
{
    cout<<"intial count : "<<myClass::getcount();
    myClass obj1, obj2;//default constructor
    cout<<"\ncount after 2 objects : "<<myClass::getcount();
    return 0;
}