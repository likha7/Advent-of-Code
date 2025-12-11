#include "bits/stdc++.h"

using namespace std;

#define int long long

map<string, vector<string>>mp;
map<tuple<string, bool, bool>, int> dp;

int dfs(const string &cur, bool fft, bool dac){
    auto t = make_tuple(cur, fft, dac);
    if(dp.count(t)) return dp[t];

    int ans = 0;
    for(string x: mp[cur]){
        if(x == "out"){
            if(dac && fft) ans ++;
        }else{
            ans += dfs(x, fft | (x == "fft"), dac | (x == "dac"));
        }
    }
    return dp[t] = ans;
}


void solve(){
    string s; 
    while(getline(cin, s)){
        s += ' ';
        string t = s.substr(0, 3);
        string x = "";
        for(int i = 5; i < s.size(); i ++){
            if(s[i] == ' '){
                mp[t].push_back(x);
                x = "";
            }else x += s[i];
        }
    }

    cout << dfs("svr", false, false);
    
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
