#include "bits/stdc++.h"

using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        map<int,int> mp;
        for(int i = 0 ; i < n ; i++)
        {
            int x;
            cin>>x;
            mp[x]++;
        }
        if(mp.size() == 1)
        {
            cout<<0<<endl;
        }
        else
        {
            map<int,int>::iterator it = mp.begin();
            cout<<n - it->second<<endl;
        }
    }
}