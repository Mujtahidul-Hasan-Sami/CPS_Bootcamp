#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n; cin >> n;
    string s; cin >> s;
    int ans = 0;
    for (char c = 'a'; c <= 'z'; c++) {
        int max_len = 0, cur_len = 0;
        for (int i = 0; i < n; i++) {
            if (s[i] == c) {
                cur_len++;
                max_len = max(max_len, cur_len);
            } else {
                cur_len = 0;
            }
        }
        ans += max_len;
    }
    cout << ans << "\n";
}
