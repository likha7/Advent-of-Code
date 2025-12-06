#include "bits/stdc++.h"

using namespace std;

#define int long long

void solve(){
   vector<string> v;
   string s;
   while(cin >> s) v.push_back(s);
   int n = v.size();
   int ans = 0;
   int t = -1;
   while(t != ans){
    t = ans;
    for(int i = 0; i < n; i ++){
        for(int j = 0; j < n; j ++){
            int x = 0;
            if(v[i][j] == '.') continue;
            if(j < n - 1) x += v[i][j + 1] == '@';
            if(j > 0) x += v[i][j - 1] == '@';
            if(i > 0) x += v[i - 1][j] == '@';
            if(i < n - 1) x += v[i + 1][j] == '@';
            if(i > 0 && j < n - 1) x += v[i - 1][j + 1] == '@';
            if(i > 0 && j > 0) x += v[i - 1][j - 1] == '@';
            if(i < n - 1 && j < n - 1) x += v[i + 1][j + 1] == '@';
            if(i < n - 1 && j > 0) x += v[i + 1][j - 1] == '@';
            if(x < 4){
                ans ++;
                v[i][j] = '.';
            }
        }
    }
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
