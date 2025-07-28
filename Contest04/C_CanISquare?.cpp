#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int tc; cin >> tc;
    while (tc--) {
        int n; cin >> n;
        long long ans = 0;
        for (int i = 0; i < n; i++) {
            long long x; cin >> x;
            ans += x;
        }
        long long k = sqrt(ans);
        if (k * k == ans) cout << "YES\n";
        else cout << "NO\n";
    }
}
