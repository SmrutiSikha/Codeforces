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
        map<int,int> freq;
        for(int i = 0 ; i < n ; i++)
        {
            int x;
            cin>>x;
            freq[x]++;
        }
        int ans = 0;
        int max_count = INT_MAX;
        map<int,int>::iterator it,itr;
        itr = freq.begin();
        ans += itr->second;
        max_count = itr->second;
        itr++;
        for(it = itr; it != freq.end() ; it++)
        {
            if(it->second > max_count)
            {
                int diff = it->second - max_count;
                ans += diff;
                max_count = it->second;
            }
        }
        cout<<ans<<endl;
    }
}