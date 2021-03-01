#include <bits/stdc++.h>
using namespace std;
 
#define FOR(i, a, b) for(__typeof(b) i = (a); i < (b); ++i)
#define dbg(x) cout << #x << " = " << x << '\n';
#define SOLVE int t; cin >> t; while(t--) solve()
 
typedef long long ll;
typedef long double ld;
 
void solve(){
    int n; cin >> n;
    vector<int> s(n);
    vector<ll> vis(n+1, 0);
    for(int &i : s) cin >> i;
    ll cnt = 0;
    FOR(i, 0, n){
        int need = s[i] - 1;
        cnt += max(0ll, need - vis[i]);
        for(int j = i + 2; j <= i + s[i] && j < n; j++){
            vis[j]++;
        }
        vis[i+1] += max(0ll, vis[i] - need);
    }
    cout << cnt << '\n';
}
 
int main(){
    ios::sync_with_stdio(false); cin.tie(nullptr);
    SOLVE;
    
}