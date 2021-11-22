#include<iostream>
using namespace std;

class BaseClass
{
    public: 

    void show()
    {
        cout<<"base class show function called"<<endl;
    }
    virtual void print()
    {
        cout<<"base class print function called"<<endl;
    }
};

class Derived : public BaseClass
{
    void show()
    {
        cout<<"derived class show function called"<<endl;
    }
    void print()
    {
        cout<<"derived class print function called"<<endl;
    }
    
};


int main()
{
    BaseClass *ptr;

    Derived derivedObj;
    ptr = &derivedObj;
    
    // run time polymorphism
    ptr->print();  //derived class print function called. 
    ptr->show();   //base class show function called. 
    return 0;
}