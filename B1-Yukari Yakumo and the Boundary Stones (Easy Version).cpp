#include <bits/stdc++.h>

using namespace std;


const int MAX_N = 105; 

void solve() {
    int x, y, m;
    cin >> x >> y >> m;
    string s;
    cin >> s;

    
    bool dp[MAX_N][MAX_N];
    memset(dp, false, sizeof(dp));
    
    dp[x][y] = true;
    int ans = x + y;

    for (int k = 0; k < m; ++k) {
        bool next_dp[MAX_N][MAX_N];
        memset(next_dp, false, sizeof(next_dp));
        
      
        for (int i = 0; i < MAX_N; ++i) {
            for (int j = 0; j < MAX_N; ++j) {
                if (!dp[i][j]) continue;
                
                if (s[k] == '+') {
                    
                    if (i > 0) next_dp[i - 1][j + 1] = true;
                   
                    if (j > 0) next_dp[i][j + 1] = true;
                } 
                else if (s[k] == '-') {
                    
                    if (i > 0) next_dp[i - 1][j] = true;
                   
                    if (j > 0) next_dp[i + 1][j - 1] = true;
                }
            }
        }
        
       
        memcpy(dp, next_dp, sizeof(dp));
        
        
        for (int i = 0; i < MAX_N; ++i) {
            for (int j = 0; j < MAX_N; ++j) {
                if (dp[i][j]) {
                    ans = max(ans, i + j);
                }
            }
        }
    }
    cout << ans << "\n";
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
