#include "bits/stdc++.h"

using namespace std;

int main()
{
    int n,q;
    cin>>n>>q;
    map<int,int> mp;
    int arr[n];
    for(int i = 0 ;i < n ; i++)
    {
        int x;
        cin>>x;
        arr[i] = x;
        mp[x]++;
    }
    for(int i = 0 ; i < q ; i++)
    {
        int t,k;
        cin>>t>>k;
        if(t==1)
        {
            if(arr[k-1] == 0)
            {
                mp[1]++;
                mp[0]--;
                arr[k-1] = 1;
            }
            else
            {
                mp[1]--;
                mp[0]++;
                arr[k-1] = 0;
            }
        }
        else
        {
            if(mp[1] >= k)
            {
                cout<<1<<endl;
            }
            else
            {
                cout<<0<<endl;
            }
        }
    }
}