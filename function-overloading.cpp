#include<iostream>
using namespace std;

int add(int a, int b)
{
    return (a+b);
}
int add(int a, int b, int c)
{
    return (a+b+c);
}
double add(double a, double b)
{
    return (a+b);
}
double add(double a, int b)
{
    return (a+b);
}
double add(int a, double b)
{
    return (a+b);
}


int main()
{
    cout<<"The addition is: "<<add(3, 4)<<endl;
    cout<<"The addition is: "<<add(2, 3, 4)<<endl;
    cout<<"The addition is: "<<add(4.5, 4.5)<<endl;
    cout<<"The addition is: "<<add(4.5, 3)<<endl;
    cout<<"The addition is: "<<add(3, 3.5)<<endl;
    
    return 0;
}