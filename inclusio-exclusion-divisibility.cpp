// how many numbers are between 1 and n are divisible by a and b (not both)

#include<bits/stdc++.h>
using namespace std;


int divisible(int n, int a, int b)
{
    int c1 = n/b;      // for the numbers which are divisible by b
    int c2 = n/a;      // for the numbers which are divisible by a
    int c3 = n/(a*b);  // for the numbers which are divisible by both 


    return c1 + c2 - c3;
}

int main()
{
    int n, a, b;
    cout<<"Enter the number you want to check the divisibility between: ";
    cin>>n;

    cout<<"Enter the numbers you want to check the divisibility for: ";
    cin>>a;
    cin>>b;

    cout<<divisible(n, a, b);

    return 0;
}