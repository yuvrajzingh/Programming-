#include<iostream>
using namespace std;


class base
{
    protected:
        int val;
};

class derived1 : virtual public base
{
    public:
        derived1()
        {
            val=1;
        }
        void getval()
        {
            cout<<"derived 1 value of data member: "<<val;
        }
};
class derived2 : virtual public base
{
    public:
        derived2()
        {
            val=2;
        }
        void getval()
        {
            cout<<"derived 2 value of data member: "<<val;
        }
};


//hybrid inheritance
class derived3 : public derived2, public derived1 

/*always the right most class being inherited is the one whos data memeber is going to come into the derived class (here for example even though we're calling derived derived2 , derived1 data member will come which is "1")*/

{
    public:
        void getval()
        {
            cout<<"Int value is: \n";
            derived2::getval();
        }
};

int main()
{   
    derived3 obj;
    obj.getval();
    return 0;
}