#include<iostream>

using namespace std;

int main ()
{
    int var = 5;

    int *ip;

    ip=&var;

    cout<<"variable value: "<<var<<endl;
    cout<<"address in pointer : "<<ip<<endl;
    cout<<"pointer pointing to the value: "<<*ip<<endl;

    *ip=6;

    cout<<"variable value: "<<var<<endl;
    cout<<"address in pointer : "<<ip<<endl;
    cout<<"pointer pointing to the value: "<<*ip<<endl;

    return 0;
}