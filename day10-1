#include "bits/stdc++.h"

using namespace std;

#define int long long

void solve(){
    string s; 
    int ans = 0;
    while(getline(cin, s)){
        vector<vector<int>> v;
        vector<int> org;
        for(int i = 0; i < s.size(); i ++){
            if(s[i] == '['){
                i++;
                while(s[i] != ']'){
                    if(s[i] == '.') org.push_back(0);
                    else org.push_back(1);
                    i++;
                }
            }
            if(s[i] == '('){
                vector<int> vt;
                i++;
                string a = "";
                while(s[i] != ')'){
                    if(s[i] == ','){
                        vt.push_back(stoll(a));
                        a = "";
                    }else a += s[i];
                    i++;
                }
                vt.push_back(stoll(a));
                v.push_back(vt);
            }
        }
        int n = org.size();
        int mn = 1e9;
        int N = v.size();
        for(int i = 0; i < (1ll << N); i++){
            vector<int> temp(n, 0);
            int cnt = 0;
            for(int j = 0; j < N; j ++){
                if(i & (1ll << j)){
                    for(int x : v[j]) temp[x] = 1 - temp[x];
                    cnt++;
                }
            }
            if(temp == org) mn = min(mn, cnt);
        }
        ans += mn;
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
