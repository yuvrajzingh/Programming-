#include <iostream>
using namespace std;

class sumN
{
    int n, sum = 0;
    public:


    void getdata()
    {
        
         cout << "Enter a positive integer: ";
        cin >> n;

    for (int i = 1; i <= n; ++i) {
        sum += i;
    }
    cout << "Sum = " << sum;
    }
};

int main()
{
    sumN ob;
    ob.getdata();
    return 0;
}