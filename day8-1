#include "bits/stdc++.h"

using namespace std;

#define int long long

void solve(){
   vector<vector<int>> v;
   string s; 
   while(cin >> s){
    s += ',';
    string x = ""; 
    vector<int> t;
    for(int i = 0; i < s.size(); i ++){
        if(s[i] == ','){
            t.push_back(stoll(x));
            x = "";
        }else x += s[i];
    }

    v.push_back(t);
   }

   int n = v.size();
   vector<vector<int>> vv;
   for(int i = 0; i < n; i ++){
    for(int j = i + 1; j < n; j ++){
        int d = pow(abs(v[i][0] - v[j][0]), 2) + pow(abs(v[i][1] - v[j][1]), 2) + pow(abs(v[i][2] - v[j][2]), 2);
        vv.push_back({d, i, j});
    }
   }

   sort(vv.begin(), vv.end());
   vector<vector<int>> g(n);

   for(int i = 0; i < 1000; i ++){
    g[vv[i][1]].push_back(vv[i][2]);
    g[vv[i][2]].push_back(vv[i][1]);
   }

   vector<bool>used(n);
   vector<int> ans;
   for(int i = 0; i < n; i ++){
    if(used[i]) continue;
    stack<int> st;
    st.push(i);
    set<int> comp;
    while(!st.empty()){
        int cur = st.top();
        st.pop();
        if(!used[cur]){
            used[cur] = true;
            comp.insert(cur);
            for(int j: g[cur]) st.push(j);
        }
    }
    ans.push_back(comp.size());
   }

   sort(ans.rbegin(), ans.rend());

   cout << ans[0] *  ans[1] *  ans[2];
   
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
