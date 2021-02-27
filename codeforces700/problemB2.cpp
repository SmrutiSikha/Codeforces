#include "bits/stdc++.h"

using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int A,B,n;
        cin>>A>>B>>n;
        int a[n];
        int b[n];
        for(int i = 0 ; i < n ; i++)
        {
            cin>>a[i];
        }
        for(int i = 0 ; i < n ; i++)
        {
            cin>>b[i];
        }
        int flag = 0;
        for(int i = 0 ; i < n ; i++)
        {
            int k_mons = ceil(float(b[i])/float(A)); 
            int k_hero = ceil(float(B)/float(a[i]));
            if(k_mons>k_hero)
            {
                cout<<"NO"<<endl;
                flag = 1;
                break;
            } 
            else if(k_mons<k_hero)
            {
                B = B - k_mons*a[i];
            }
            else
            {
                if(i != n-1)
                {
                    B = B - k_mons*a[i];
                    if(B<=0)
                    {
                    flag = 1;
                    cout<<"NO"<<endl;
                    break;
                    }
                }
            }
        }
        if(flag != 1)
        {
        cout<<"YES"<<endl;
        }
    }
}