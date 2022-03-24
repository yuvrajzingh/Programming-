#include<bits/stdc++.h>
using namespace std;

int main()
{
    //to change string to upper case without using functions

    string str = "yuvraj";

    for(int i=0; i<str.size(); i++)
    {
        if(str[i]>= 'a' && str[i]<='z')
        {
            str[i] -= 32;   //+= 32 if you want to change a upper case string in to lower case
        }
    }

    cout<<"After changing to upper case: "<<str<<endl;

    //to change string to upper case  using functions

    string st = "yuvraj";

    transform(st.begin(), st.end(), st.begin(), ::toupper );

    cout<<"After changing to upper case: "<<st<<endl;

    //to change the string to decreasing order using sort function

    string s = "5346";

    sort(s.begin(), s.end(), greater<int>());

    cout<<s<<endl;

    //to output the character with the most frequency

    string d = "babblingbaboon";

    int freq[26];

    for(int i=0; i<26; i++)
        freq[i] = 0;

    for(int i=0; i<d.size(); i++)
        freq[d[i]-'a']++;

    char ans = 'a';
    int maxF = 0;

    for(int i=0; i<26; i++)
    {
        if(freq[i] > maxF)
        {
            maxF = freq[i];
            ans = i+'a';
        }
    }

    cout<<"Frequency: "<<maxF<<" "<<"Character: "<<ans<<endl;

    return 0;
}