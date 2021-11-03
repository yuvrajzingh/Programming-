#include<iostream>

using namespace std;

int main ()
{
    
    int a[2][2],b[2][2],subtraction[2][2];

    cout<<"enter the values of 2x2 matrix 1: "<<endl;

    for(int i=0; i<2; i++)
    {
        for(int j=0; j<2; j++)
        {
            cin>>a[i][j];
        }
        
    }

    cout<<endl;

cout<<"enter the values of a 2x2 matrix 2: "<<endl;

    for(int i=0; i<2; i++)
    {
        for(int j=0; j<2; j++)
        {
            cin>>b[i][j];
        }
        
    }

    cout<<endl;

    for(int i=0; i<2; i++)
    {
        for(int j=0; j<2; j++)
        {
            subtraction[i][j] = a[i][j] - b[i][j] ;
        }
    }

    cout<<endl;


cout<<"after subtracting : "<<endl;
    for(int i=0; i<2; i++)
    {
        for(int j=0; j<2; j++)
        {
            cout<<subtraction[i][j] ;
        }
        cout<<endl;
    }

    return 0;
}