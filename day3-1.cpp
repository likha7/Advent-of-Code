#include "bits/stdc++.h"

using namespace std;

#define int long long

void solve(){
   string s; 
   int ans = 0;
   while(cin >> s){
    int mx = 0, maxd = 0;
    for(int i = 0; i < s.size(); i ++){
        int a = s[i] - 48;
        mx = max(mx, maxd * 10 + a);
        maxd = max(maxd, a);
    }
    ans += mx;
   }
    cout << ans;
}

signed main(){
    cin.tie(0)->sync_with_stdio(0);

    int t = 1; //cin >> t;
    while(t--){
        solve();
        cout << endl;
    }
    
    return 0;
}
