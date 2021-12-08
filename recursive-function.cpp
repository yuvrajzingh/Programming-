#include<iostream>
using namespace std;

int sum(int num)
{
    if (num!=0)
        return (num + sum(num-1));
    else
        return num;    
}

int main()
{
    int n; 
    cout<<"Enter the number till which you want the sum of natural number to be calculated: ";
    cin>>n;
    int total = sum(n);
    cout<<endl<<"sum of natural numbers from 1 to "<<n<<" are : "<<total<<endl;

    return 0;
}