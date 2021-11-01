#include<iostream>

using namespace std;

int main()
{
    int num, first=0, second=1, next;

    cout<<"enter the range for which you want the fibonacci series to be printed : ";
    cin>>num;

    cout<<"fibonacci series : "<<endl;

    for (int i=0; i<num; i++ )
    {
        cout<<first<<endl;
        next=first+second;
        first=second;
        second=next;
    }

    return 0;
}