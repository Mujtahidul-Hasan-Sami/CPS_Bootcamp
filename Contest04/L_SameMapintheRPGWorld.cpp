#include <bits/stdc++.h>
using namespace std;
int main() {
    int H, W; cin >> H >> W;
    vector<string> A(H), B(H);
    for (int i = 0; i < H; i++) cin >> A[i];
    for (int i = 0; i < H; i++) cin >> B[i];
    for (int s = 0; s < H; s++) {
        for (int t = 0; t < W; t++) {
            bool ok = true;
            for (int i = 0; i < H && ok; i++) {
                for (int j = 0; j < W; j++) {
                    if (A[(i + s) % H][(j + t) % W] != B[i][j]) {
                        ok = false;
                        break;
                    }
                }
            }
            if (ok) {
                cout << "Yes\n";
                return 0;
            }
        }
    }
    cout << "No\n";
}
