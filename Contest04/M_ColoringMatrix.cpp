#include <bits/stdc++.h>
using namespace std;
int main() {
    int n; cin >> n;
    vector<vector<int>> A(n, vector<int>(n)), B(n, vector<int>(n));
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            cin >> A[i][j];
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            cin >> B[i][j];

    for (int rot = 0; rot < 4; rot++) {
        bool ok = true;
        for (int i = 0; i < n && ok; i++)
            for (int j = 0; j < n && ok; j++)
                if (A[i][j] == 1 && B[i][j] != 1)
                    ok = false;
        if (ok) {
            cout << "Yes\n";
            return 0;
        }
        vector<vector<int>> C(n, vector<int>(n));
        for (int i = 0; i < n; i++)
            for (int j = 0; j < n; j++)
                C[i][j] = A[n - 1 - j][i];
        A = C;
    }
    cout << "No\n";
}
