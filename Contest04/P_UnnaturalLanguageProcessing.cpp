#include <bits/stdc++.h>
using namespace std;

bool isVowel(char c) {
    return c == 'a' || c == 'e';
}

bool isConsonant(char c) {
    return c == 'b' || c == 'c' || c == 'd';
}

void solve() {
    int n;
    cin >> n;
    string s;
    cin >> s;

    vector<string> syl;
    int i = 0;
    while (i < n) {
        int cSyl;
        
        if (i + 3 < n) {
            if (isConsonant(s[i+2]) && isVowel(s[i+3])) {
                cSyl = 2;
            } else {
                cSyl = 3;
            }
        } else {
            if (i + 2 < n) {
                if (isConsonant(s[i+2])) {
                    cSyl = 3;
                } else {
                    cSyl = 2;
                }
            } else {
                cSyl = 2;
            }
        }
        syl.push_back(s.substr(i, cSyl));
        i += cSyl;
    }

    string ans = syl[0];
    for (size_t k = 1; k < syl.size(); ++k) {
        ans += "." + syl[k];
    }
    cout << ans << endl;
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