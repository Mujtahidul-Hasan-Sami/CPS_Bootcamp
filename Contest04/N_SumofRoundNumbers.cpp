#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while (t--) {
        int n; cin >> n;
        vector<int> ans;

        int base = 1;
        while (n > 0) {
            int digit = n % 10;
            if (digit != 0)
                ans.push_back(digit * base);
            n /= 10;
            base *= 10;
        }

        cout << ans.size() << "\n";
        for (int x : ans)
            cout << x << " ";
        cout << "\n";
    }
}
