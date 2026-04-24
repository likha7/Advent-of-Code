#include "bits/stdc++.h"

using namespace std;

#define int long long

void solve(){
    string s; getline(cin, s);
    int i = 0;
    int n = s.size();
    int ans = 0;
    while(i < n){
        string a = "", b = "";
        bool ok = false;
        for(; i < n; i ++){
            if(!ok){
                if(s[i] == '-') ok = true;
                else a += s[i];
            }else{
                if(s[i] == ',') break;
                else b += s[i];
            }
        }
        int aa = stoll(a), bb = stoll(b);
        for(; aa <= bb; aa ++){
            string x = to_string(aa);
            for(int j = 1; j <= x.size() / 2; j ++){
                string t = "";
                for(int jj = 0; jj < x.size() / j; jj ++) t += x.substr(0, j);
                if(t == x){
                    ans += aa;
                    break;
                }
            }
        }
        i ++;
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
