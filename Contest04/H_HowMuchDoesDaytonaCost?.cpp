#include <bits/stdc++.h>
using namespace std;
int main() {
    int t; cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        vector<int> a(n);
        for (int &x : a) cin >> x;
        int cnt = 0, mx = 0;
        bool f = false;
        for (int x : a) {
            if (x == k) {
                f = true;
                cnt++;
            } else {
                cnt--;
            }
            mx = max(mx, cnt);
            if (cnt < 0) cnt = 0;
        }

        cout << (f && mx > 0 ? "YES\n" : "NO\n");
    }
}
