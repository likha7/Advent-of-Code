#include "bits/stdc++.h"

using namespace std;

#define int long long

void solve(){
   string s; 
   vector<pair<int, int>> v;
   int ans = 0;
   while(cin >> s){
        if(s.find("-") != string::npos){
            string a = "", b = "";
            bool ok = false;
            for(int i = 0; i < s.size(); i++){
                if(!ok){
                    if(s[i] != '-') a += s[i];
                    else ok = true;
                }else b += s[i];
            }
            v.emplace_back(stoll(a), stoll(b));
        }else{
            int x = stoll(s);
            for(auto [l, r] : v){
                //cerr << l << ' ' << r << endl;
                if(x >= l && x <= r){
                    ans ++; break;
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
