#include<iostream>
using namespace std;

int main()
{
    cout<<"Enter the no. which you want to reverse :";
    int n ;
    cin>>n;

    int reverse = 0;
    while(n>0)
    {
        int lastDigit = n%10;
        reverse = reverse*10 + lastDigit;
        n=n/10;
    }

    cout<<"reverse of the number is: ";
    cout<<reverse<<endl;

    return 0;
}