#include "bits/stdc++.h"

using namespace std;

int main()
{
    long long int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        long long int init[n];
        for(int i = 0 ; i < n ; i++)
        {
            long long int x;
            cin>>x;
            init[i] = x;
        }
        long long int rem = 0;
        if(n==1)
        {
            cout<<"YES"<<endl;
        }
        else
        {
        int flag = 0;
        for(int i = 0 ; i < n-1 ; i++)
        {
            if(init[i] < i)
            {
                if(rem < (i-init[i]))
                {
                    flag = 1;
                    break;
                }
                else
                {
                    rem -= (i-init[i]);
                }
            }
            else
            {
                rem += (init[i]-i);
            }
        }
        if(flag == 1)
        {
            cout<<"NO"<<endl;
        }
        else
        {
            if(rem + init[n-1] <= (n-2))
            {
                cout<<"NO"<<endl;
            }
            else
            {
                cout<<"YES"<<endl;
            }
        }
        }
    }
}