#include "bits/stdc++.h"

using namespace std;

void stringGame(string s)
{
    for(int i = 0 ; i < s.length() ; i++)
    {
        if(i%2 == 0)
        {
            if(s[i] == 'a')
            {
                s[i] ='b';
            }
            else
            {
                s[i] = 'a';
            }
        }
        else
        {
            if(s[i] == 'z')
            {
                s[i] ='y';
            }
            else
            {
                s[i] = 'z';
            }
        }
    }
    cout<<s<<endl;
}

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        stringGame(s);
    }
}