#include "bits/stdc++.h"

using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long int p,a,b,c;
        cin>>p>>a>>b>>c;
        long long int ans = LLONG_MAX;
        long long int div1,div2,div3;
        if(p%a==0 || p%b==0 || p%c==0){
	        ans=0;
            cout<<ans<<endl;
        }
        else
        {
        div1 = ((p/a)+1)*a - p;
        ans = min(ans,div1);
        div2 = ((p/b)+1)*b - p;
        ans = min(ans,div2);
        div3 = ((p/c)+1)*c - p;
        ans = min(ans,div3);
        cout<<ans<<endl;
        }
    }
}