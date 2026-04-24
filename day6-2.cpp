#include "bits/stdc++.h"

using namespace std;

#define int long long

void solve(){
   string s; 
   vector<string> v;
   int mx = 0;
   while(getline(cin, s)){
    v.push_back(s);
    mx = max(mx, (int)s.size());
   }

   int ans = 0; 
   int n = v.size();
   vector<int> temp;
   for(int i = 0; i < mx; i ++){
    string x = "";
    char ch;
    for(int j = 0; j < n; j ++){
        if(v[j][i] != '*' && v[j][i] != '+' && v[j][i] != ' ') x += v[j][i];
        else if(v[j][i] == '*' || v[j][i] == '+') ch = v[j][i];
    }
    if(x.size() > 0) temp.push_back(stoll(x));
    if(x.size() == 0 || i + 1 == mx){
        int k = 0;
        if(ch == '*') k = 1;
        for(int j: temp){
            if(ch == '*') k *= j;
            else k += j;
        }
        ans += k;
        temp.clear();
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
