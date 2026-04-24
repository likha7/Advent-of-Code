#include "bits/stdc++.h"

using namespace std;

#define int long long

void solve(){
   string s; 
   vector<pair<int, int>> v;
   int ans = 0;
   while(cin >> s){
        string a = "", b = "";
        bool ok = false;
        for(int i = 0; i < s.size(); i++){
            if(!ok){
                if(s[i] != '-') a += s[i];
                else ok = true;
            }else b += s[i];
        }
        v.emplace_back(stoll(a), stoll(b));
   }
   
   sort(v.begin(), v.end());
   int l = -1, r = -1;
   for(auto [x, y]: v){
    if(l == -1){
        l = x; r = y;
        ans += r - l + 1;
    }else{
        if(r >= x){
            if(r < y){
                l = r + 1; r = y;
                ans += r - l + 1;
            }
        }
        else{
            l = x; r = y;
            ans += r - l + 1;
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
