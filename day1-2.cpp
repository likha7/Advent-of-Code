#include "bits/stdc++.h"

using namespace std;

#define int long long

void solve(){
    int n = 50;
    int ans = 0;
    string s;
    while(cin >> s){
        int i = stoi(s.substr(1, 3));
        ans += i / 100;
        i %= 100;
        if(s[0] == 'L'){
            if(n - i < 0){
                if(n != 0) ans++;
                n -= i;
                n += 100;
            }else n -= i;
        }else{
            n += i;
            if(n > 99){
                n -= 100;
                if(n > 0) ans++;
            }
        }
        ans += n == 0;
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
