#include <bits/stdc++.h>
using namespace std;

int main() {
    string s; cin >> s;
    int f[26] = {0};
    for (char c : s) f[c - 'A']++;

    int oC = 0, oCh = -1;
    for (int i = 0; i < 26; i++) {
        if (f[i] % 2 == 1) {
            oC++;
            oCh = i;
        }
    }

    if (oC > 1) {
        cout << "NO SOLUTION\n";
        return 0;
    }

    string left = "";
    for (int i = 0; i < 26; i++) {
        left += string(f[i] / 2, i + 'A');
    }

    string right = left;
    reverse(right.begin(), right.end());

    string middle = "";
    if (oCh != -1) {
        middle = string(f[oCh], oCh + 'A');
    }

    cout << left + middle + right << "\n";
}
