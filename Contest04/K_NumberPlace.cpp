#include <bits/stdc++.h>
using namespace std;

bool chk(vector<int> &v) {
    int cnt[10] = {0}; // index 1..9
    for (int x : v) cnt[x]++;
    for (int i = 1; i <= 9; i++)
        if (cnt[i] != 1) return false;
    return true;
}
int main() {
    int a[9][9];
    for (int i = 0; i < 9; i++)
        for (int j = 0; j < 9; j++)
            cin >> a[i][j];
    for (int i = 0; i < 9; i++) {
        vector<int> row;
        for (int j = 0; j < 9; j++) row.push_back(a[i][j]);
        if (!chk(row)) { cout << "No"; return 0; }
    }
    for (int j = 0; j < 9; j++) {
        vector<int> col;
        for (int i = 0; i < 9; i++) col.push_back(a[i][j]);
        if (!chk(col)) { cout << "No"; return 0; }
    }
    for (int bi = 0; bi < 9; bi += 3) {
        for (int bj = 0; bj < 9; bj += 3) {
            vector<int> block;
            for (int i = 0; i < 3; i++)
                for (int j = 0; j < 3; j++)
                    block.push_back(a[bi+i][bj+j]);
            if (!chk(block)) { cout << "No"; return 0; }
        }
    }

    cout << "Yes";
}
