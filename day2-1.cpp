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
        string x;
        if(a.size() % 2){
            x = to_string(pow(10, a.size())).substr(0, (a.size() + 1) / 2);
        }else{
            x = a.substr(0, a.size() / 2);
        }

        int y = stoll(x);
        while(1 == 1){
            string xx = to_string(y);
            xx += xx;
            int yy = stoll(xx);
            if(yy >= aa && yy <= bb){
                ans += yy;
                //cerr << yy << ' ' << aa << ' ' << b << endl;
            }
            else if(yy > bb) break;
            y ++;
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
