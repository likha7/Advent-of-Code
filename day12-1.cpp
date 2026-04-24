// It is crazy. I spent about 10 hours to find the idea. I coded every thing on my mind so my code is so long.

#include "bits/stdc++.h"
using namespace std;

#define int long long


void solve(){
    string s; 
    int ans = 0;
    while(getline(cin, s)){
        int m = stoll(s.substr(0, 2)), n = stoll(s.substr(3, 2));
        vector<vector<bool>> grid(n, vector<bool> (m));
        vector<int> v;
        for(int i = 7; i < s.size(); i += 3){
            v.push_back(stoll(s.substr(i, 2)));
        }

        int i = 0, j = 0;
        for(; i + 3 < n; i += 3){
            for(; j + 3 < m; j += 3){
                if(v[5] == 0) break;
                v[5] --;
                grid[i + 1][j + 1] = true;
                for(int k = 0; k < 3; k ++) grid[i][k + j] = true;
                for(int k = 0; k < 3; k ++) grid[i + 2][k + j] = true;
            }
            if(v[5] == 0) break;
            j = 0;
        }
        
        for(; i + 3 < n; i += 3){
            for(; j + 3 < m; j += 3){
                if(v[4] == 0) break;
                v[4] --; grid[i][j]= true;
                for(int k = 0; k < 3; k ++) grid[i][k + j] = true;
                for(int k = 0; k < 3; k ++) grid[i + 2][k + j] = true;
            }
            if(v[4] == 0) break;
            j = 0;
        }

        for(; i + 3 < n; i += 3){
            for(; j + 3 < m; j += 3){
                if(v[2] == 0) break;
                v[2] --; 
                grid[i][j + 1]= true; grid[i][j + 2] = true;
                grid[i + 1][j]= true; grid[i + 1][j + 1] = true;
                for(int k = 0; k < 3; k ++) grid[i + 2][k + j] = true;
            }
            if(v[2] == 0) break;
            j = 0;
        }

        for(; i + 3 < n; i += 3){
            int kk = 0;
            for(; j + 3 < m;){
                if(v[3] == 0) break;
                v[3] --; 
                if(kk % 2 == 0){
                    for(int k = 0; k < 2; k ++) grid[i][k + j] = true;
                    for(int k = 0; k < 2; k ++) grid[i + 1][k + j] = true;
                    for(int k = 0; k < 3; k ++) grid[i + 2][k + j] = true;
                    j += 2;
                }else{
                    for(int k = 0; k < 3; k ++) grid[i][k + j] = true;
                    for(int k = 0; k < 3; k ++) grid[i + 1][k + j] = true;
                    grid[i + 2][j + 2] = true;
                    j += 3;
                }
                kk++;
            }
            if(v[3] == 0) break;
            j = 0;
        }

        for(; i + 3 < n; i += 3){
            for(; j + 3 < m; j += 4){
                if(v[0] == 0) break;
                if(j + 4 < m && v[0] > 1){
                    v[0] -= 2;
                    for(int x = 0; x < 3; x ++){
                        for(int k = 0; k < 4; k ++) grid[i + x][j + k] = true;
                    }
                }else{
                    v[0] --;
                    for(int k = 0; k < 3; k ++) grid[i + 2][j + k] = true;
                    for(int k = 0; k < 2; k ++) grid[i + 1][j + k] = true;
                    grid[i][j] = true;
                }
            }
            if(v[0] == 0) break;
            j = 0;
        }

        for(; i + 2 < n; i ++){
            for(; j + 2 < m; j++){
                if(v[1] == 0) break;
                bool ok = grid[i][j] | grid[i][j + 1] | grid[i + 1][j + 1] | grid[i + 1][j + 2] | grid[i + 2][j + 2];
                if(!ok){
                    v[1]--;
                    grid[i][j] = true;
                    grid[i][j + 1] = true;
                    grid[i + 1][j + 1] = true;
                    grid[i + 1][j + 2] = true;
                    grid[i + 2][j + 2] = true;
                }

            }
            if(v[1] == 0) break;
            j = 0;
        }
        int sum = 0;
        for(int i = 0; i < 6; i ++) sum += v[i];
        ans += sum == 0;
    }
    cout << ans;
}

signed main(){
    cin.tie(0)->sync_with_stdio(0);
    int t = 1; // cin >> t;
    while(t--){
        solve();
        cout << endl;
    }
    return 0;
}
