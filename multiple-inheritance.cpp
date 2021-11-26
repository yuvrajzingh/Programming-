#include<iostream>
using namespace std;

class A
{
    public:
        void printMessage()
        {
            cout<<"print class A message function"<<endl;
        }
};
class B
{
    public:
        void printMessage()
        {
            cout<<"print class B message function"<<endl;
        }
};
class AB : public A, public B
{
    public:
        void printMessage()
        {
            A::printMessage();    //class A printMessage function would be called
            B::printMessage();    //class B printMessage function would be called  
           
            cout<<"print class AB message function"<<endl;
        }
};


int main()
{
    AB obj;
    obj.printMessage();
    return 0;
}