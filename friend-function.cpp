#include<iostream>
using namespace std;


class Distance
{
    private: 
        int meter;

    public:

       /*Distance()
        {
            meter = 0;
        }*/

         void setdata()
         {
             cout<<"enter meters : ";
             cin>>meter;
         }

         void displaydata()
         {
             cout<<"you entered "<<meter<<" meters."<<endl;
         }

         friend void addToMeter(Distance &d);     //prototype 
            
}; 

void addToMeter(Distance &d)
{
    d.meter= d.meter + 10;
    cout<<"new distance = "<<d.meter<<endl;
}

int main ()
{
    Distance d1;
    d1.setdata();
    d1.displaydata();

    //calling friend function
    addToMeter(d1);//passed by reference
    return 0;

}