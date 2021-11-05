#include<iostream>

using namespace std;

int main()
{
    int size ;

    cout<<"enter the the number of elements you want to store : ";
    cin>>size;

   int *ptr = new int[size];

    cout<<"enter elements: ";

    for(int i=0; i<size; i++)
    {
            cin>>ptr[i];
    }

    cout<<"the elements are : ";

    for(int i=0; i<size; i++)
    {
            cout<<ptr[i]<<" ";

    }
return 0;
}