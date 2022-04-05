// write a prog to find the unique number where
// all the other numbers are present thrice.

#include<bits/stdc++.h>
using namespace std;

bool getBit(int n, int pos)
{
    return ((n & (1<<pos))!=0);
}

int setBit(int n, int pos)
{
    return (n | (1<<pos));
}

int findUnique(int arr[], int n)
{
    int result = 0; 

    for(int i=0; i<64; i++)    // covering all the bits
    {
        int sum=0;
        for(int j=0; j<n; j++)     // traversing all the elemnets in array and seeing in which position our i'th bit is set
        {
            if(getBit(arr[j], i))
            {
                sum++;
            }
        }
        if(sum%3!=0)  // set bit in that position if sum%3!=0
        {
            result = setBit(result, i);
        }
    }
    return result;
}


int main()
{
    int arr[] = {1, 2, 3, 4, 1, 2, 3, 1, 2, 3};

    cout<<findUnique(arr, 10) <<endl;

    return 0;
}