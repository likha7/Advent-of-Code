#include "bits/stdc++.h"

using namespace std;

#define int long long

void solve(){
   string s; 
   int ans = 0;
   while(cin >> s){
    int n = s.size();
    vector<int> v(n);
    for(int i = 0; i < n; i ++) v[i] = s[i] - 48;

    string t = s.substr(n - 12, 12);
    int l = 0, r = n - 13;
    int k = 0;
    while(r - l >= 0 && k < 12){
        int maxd = t[k] - 48, ind = n - 12 + k;
        for(int i = r; i >= l; i --){
            if(s[i] - 48 >= maxd){
                maxd = s[i] - 48;
                ind = i;
            }
        }
        t[k] = (char)(maxd + 48);
        if(ind == n - 12 + k) break;
        l = ind + 1; 
        r++; k++;
    }
    cerr << t << endl;
    ans += stoll(t);
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
