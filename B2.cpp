#include <iostream>
#include <string>

using namespace std;

void solve() {
    int n;
    cin >> n;
    
    string s = "+";
    for (int i = 0; i < n; ++i) {
        s += "--+";
    }
    
    cout << s << endl;
    
    int k;
    cin >> k;
    
    int c2 = (k + 2) / 3;
    cout << n + c2 << endl;
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
