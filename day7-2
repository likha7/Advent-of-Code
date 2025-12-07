#include "bits/stdc++.h"

using namespace std;

#define int long long

void solve(){
   vector<string> v;
   string s;
   while(cin >> s){
    v.push_back(s);
   }

   int n = v.size(), m = v[0].size();

   int x, y = 0;
   for(int i = 0; i < n; i ++){
    for(int j = 0; j < m; j ++){
        if(v[i][j] == 'S'){
            x = i; y = j;
            break;
        }
    }
   }

   vector<vector<int>> cnt(n, vector<int> (m));
   cnt[x + 1][y] = 1;
   for(int i = 1; i < n - 1; i ++){
    for(int j = 0; j < m; j ++){
        if(v[i + 1][j] == '^'){
            if(j > 0) {
                cnt[i + 1][j - 1] += cnt[i][j];
            }
            if(j + 1 < m){
                cnt[i + 1][j + 1] += cnt[i][j];
            }
        }else{
            cnt[i + 1][j] += cnt[i][j];
        }
    }
   }

   int ans = 0;
   for(int i = 0; i < m; i ++) ans += cnt[n - 1][i];
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
