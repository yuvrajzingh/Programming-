#include<bits/stdc++.h>
using namespace std;


void reverse(string s)
{
    if(s.length()==0)   // base case
    {
        return;
    }


    string res = s.substr(1);
    reverse(res);
    cout<<s[0];
}


int main()
{
    
    reverse("Yuvraj");

    return 0;
}