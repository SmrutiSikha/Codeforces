#include "bits/stdc++.h"

using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long n,k;
        cin>>n>>k;
        if(n==1)
        {
            cout<<k<<endl;
        }
        else if(n%k == 0)
        {
            cout<<1<<endl;
        }
        else if(n<k)
        {
            double ans = (double(k)/double(n));
            cout<<ceil(ans)<<endl;
        }
        else
        {
            long long quo = n/k;
            k = k*(quo+1);
            double ans = (double(k)/double(n));
            cout<<ceil(ans)<<endl;
        }
    }
}