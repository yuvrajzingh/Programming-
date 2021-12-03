#include<iostream>
using namespace std;

template <typename t, typename u>
u add(t x, u y)
{
    return(x+y);
}

int main()
{
    cout<<"the sum of two integer 3 and double 4.5 is : "<<add<int, double> (3,4.5)<<endl;
    cout<<"the sum of two float variables 3.4 and 4.2 is : "<<add<float, float>(3.4f, 4.2f)<<endl;// "f" so that the compiler explicitly know that it is a float variable otherwise we'll have to give two value.
    cout<<"the sum of two double variables 3.45 and 5.58 is : "<<add<double, double>(3.45, 5.58)<<endl; 

    return 0;
}