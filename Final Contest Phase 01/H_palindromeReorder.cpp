#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false); cin.tie(nullptr);
    string s; cin >> s;
    int freq[26]{};
    for (char c : s) freq[c - 'A']++;

    int oddCount = 0, oddIndex = -1;
    for (int i = 0; i < 26; i++) {
        if (freq[i] % 2) {
            oddCount++;
            oddIndex = i;
        }
    }
    if (oddCount > 1) {
        cout << "NO SOLUTION\n";
        return 0;
    }

    string left, mid, right;
    for (int i = 0; i < 26; i++) {
        if (i == oddIndex) continue;
        left += string(freq[i] / 2, 'A' + i);
    }
    if (oddIndex != -1) mid = string(freq[oddIndex], 'A' + oddIndex);

    right = left;
    reverse(right.begin(), right.end());

    cout << left << mid << right << "\n";
    return 0;
}
