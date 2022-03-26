#include<bits/stdc++.h>
using namespace std;


// get bit 

int getBit(int n, int pos)
{
    return ((n & (1<<pos))!=0);
}

// set bit

int setBit(int n, int pos)
{
    return (n | (1<<pos));
}

// clear bit

int clearBit(int n, int pos)
{
    int mask = ~(1<<pos);
    return (n & mask);
}

// update bit

int updateBit(int n,int pos, int value)
{
    int mask = ~(1<<pos);
    n = n & mask;
    return (n | (value<<pos));
}

// main function

int main()
{
    cout<<getBit(5, 2)<<endl;
    cout<<setBit(5, 1)<<endl;
    cout<<clearBit(5, 2)<<endl;
    cout<<updateBit(5, 1, 1)<<endl;

    return 0;
}