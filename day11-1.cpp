#include "bits/stdc++.h"

using namespace std;

#define int long long

void solve(){
    string s; 
    map<string, vector<string>>mp;
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

    int ans = 0;
    stack<string> st;
    st.push("you");
    while(!st.empty()){
        string cur = st.top();
        st.pop();
        for(string x: mp[cur]){
            if(x == "out") ans ++;
            else st.push(x);
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
