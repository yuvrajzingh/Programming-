#include<bits/stdc++.h>
using namespace std;

int power(int n, int p)
{
    if(p==0)
    {
        return 1;
    }


    int prevPower = power(n, p-1);
    return n*prevPower;
}

int main()
{
    int n=4;
    int p=3;

    cout<<power(n, p);
    

    return 0;
}