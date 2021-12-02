#include<iostream>
using namespace std;

class weight
{
    private: 
        int kg;
    public:
        weight()
        {
            kg = 0;
        }
        weight(int x)
        {
            kg = x;
        }

        void printWeight()
        {
            cout<<" weight in kg : "<<kg<<endl;
        }

        weight operator ++()
        {
            weight temp;
            temp.kg = ++kg;
            return temp;
        }

        weight operator ++(int)
        {
            weight temp;
            temp.kg = kg++;
            return temp;
        }

        weight operator --()
        {
            weight temp;
            temp.kg = --kg;
            return temp;
        }
        weight operator --(int)
        {
            weight temp;
            temp.kg = kg--;
            return temp;
        }

};

int main()
{
    weight obj;
    obj.printWeight();
    ++obj;
    obj.printWeight();
    obj++;
    obj.printWeight();
    
    --obj;
    obj.printWeight();
    obj--;
    obj.printWeight();



    return 0;
}