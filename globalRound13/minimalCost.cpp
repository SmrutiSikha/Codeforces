#include "bits/stdc++.h"

using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        long long int u,v;
        cin>>n>>u>>v;
        long long int s[n];
        for(int i = 0; i < n ; i++)
        {
            cin>>s[i];
        }   
        int twoDiff = 0;
        int oneDiff = 0;
        for(int i = 0 ; i < n-1 ; i++)
        {
            if(abs(s[i]-s[i+1]) >= 2)
            {
                twoDiff = 1;
                break;
            }
            if(abs(s[i]-s[i+1]) == 1)
            {
                oneDiff = 1;
            }
        }
        if(twoDiff)
        {
            cout<<0<<endl;
        }
        else if(oneDiff)
        {
            cout<<min(u,v)<<endl;
        }
        else
        {
        cout<<min(v+v,u+v)<<endl;
        }
    }
}