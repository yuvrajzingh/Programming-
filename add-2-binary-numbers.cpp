#include<bits/stdc++.h>
using namespace std;

string addBinaryNumbers(string a, string b)
{
   string res;
   int i= a.size() -1, j = b.size() - 1;
   int sum, carry = 0;
   while(i>=0 || j>=0)
   {
      sum = carry;
      if(i >= 0)
       sum += a[i] - '0';
      if(j >= 0)
       sum+= b[j] - '0';
      res += to_string(sum%2);
      carry = sum/2;
      i--, j--; 

   }
   if(carry != 0)res += '1';
   reverse(res.begin(), res.end());
   
   return res;

}


int main()
{
   string a, b;
   cout<<"Enter two binary numbers that you want to add: "<<endl;
   cin>>a;
   cin>>b;

   cout<<"Addition of the above binary numbers are: "<<addBinaryNumbers(a, b);



   return 0;
}

