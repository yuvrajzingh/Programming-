#include <iostream>

using namespace std;
 

char findExtraCharcter(string strA, string strB)
{

    int res = 0, i; 

    for (i = 0; i < strA.length(); i++) {
 

        // xor with res

        res ^= strA[i];

    }

    for (i = 0; i < strB.length(); i++) {
 

        // xor with res

        res ^= strB[i];

    }

    return ((char)(res));
}
 

int main()
{

    string strA = "abcd";

    string strB = "abcde";

    cout << findExtraCharcter(strA, strB);

    return 0;
}