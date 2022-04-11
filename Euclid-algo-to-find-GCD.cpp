#include<bits/stdc++.h>
using namespace std;



int gcd(int a, int b)
{
    while(b!=0)
    {
        int rem = a%b;
        a = b;
        b = rem;
    }
    return a;
}

int main()
{
    int a, b;
    cout<<"Enter the number you want to find the Gcd for: ";
    cin>>a>>b;

    cout<<gcd(a, b);

    return 0;
}