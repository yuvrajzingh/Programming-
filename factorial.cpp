#include<iostream>
using namespace std;

int main ()
{
    int x, fact;
    cout<<"enter a number to get its factorial : ";
    cin>>x;
    fact=x;


    while (x>1){

        x--;
        fact= fact*x;
    }

    cout<<"factorial is : " <<fact;

    return 0;
}