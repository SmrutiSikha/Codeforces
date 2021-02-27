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
            while(b[i] > 0 && B > 0)
            {
                B = B - a[i];
                b[i] = b[i] - A;
            }
            if(B <= 0 && b[i] > 0)
            {
                cout<<"NO"<<endl;
                flag = 1;
                break;
            }
        }
        if(flag != 1)
        {
        cout<<"YES"<<endl;
        }
    }
}