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

   int ans = 0;
   int x, y = 0;
   for(int i = 0; i < n; i ++){
    for(int j = 0; j < m; j ++){
        if(v[i][j] == 'S'){
            x = i; y = j;
            break;
        }
    }
   }
   
   stack<pair<int, int>> st;
   st.emplace(x, y);
   vector<vector<bool>> used(n, vector<bool> (m, false));
   while(!st.empty()){
    auto [i, j] = st.top();
    st.pop();
    if(i < 0 || i >= n || j < 0 || j >= m) continue;
    if(v[i][j] == '^'){
        if(!used[i][j]){
            used[i][j] = true;
            ans++;
            st.emplace(i, j - 1);
            st.emplace(i, j + 1);
        }
    }else{
        st.emplace(i + 1, j);
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
