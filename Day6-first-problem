#include "bits/stdc++.h"

using namespace std;

#define int long long

void solve(){
   string s;
   vector<int> v;
   vector<string> vc;
   while(cin >> s){
    if(s != "*" && s != "+") v.push_back(stoll(s));
    else vc.push_back(s);
   }

   int n = vc.size();
   int ans = 0;
   for(int i = 0; i < n; i ++){
     int x = 0;
     if(vc[i] == "*") x = 1;
     for(int j = i; j < v.size(); j += n){
        if(vc[i] == "*") x *= v[j];
        else x += v[j];
     }
     ans += x;
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
