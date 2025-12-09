#include "bits/stdc++.h"

using namespace std;

#define int long long

void solve(){
   string s;
   vector<pair<int, int>> v;
   while(cin >> s){
    string a = "", b = "";
    bool ok = false; 
    for(char ch: s){
        if(!ok){
            if(ch == ',') ok = true;
            else a += ch;
        }else b += ch;
    }
    v.emplace_back(stoll(a), stoll(b));
   }
   int mx = 0; 
   int n = v.size();
   for(int i = 0; i < n; i ++){
    for(int j = i + 1; j < n; j ++){
        mx = max(mx, (abs(v[i].first - v[j].first) + 1) * (abs(v[i].second - v[j].second) + 1));
    }
   }
   cout << mx;
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
