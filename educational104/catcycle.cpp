#include "bits/stdc++.h"

using namespace std;

map<int,vector<int>> mp;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        int h;
        cin>>n>>h;
        if(n%2==0)
        {}
        else
        {
            if(mp.find(k) == mp.end())
            {
                int cata = 1;
                int catb = n;
                int turns = n;
                while(turns--)
                {
                   if(catb == cata)
                   {
                       catb = (catb+1)%n;
                       if(catb == 0)
                       {
                           catb+=1;
                       }
                   }
                   mp[n].push_back(catb);
                   catb = (catb+1)%n;
                       if(catb == 0)
                       {
                           catb+=1;
                       }
                    cata--;
                }
                int apos = h%n + n;
                int cycle = ceil(float(h)/float(n));
                
            }
        }

}