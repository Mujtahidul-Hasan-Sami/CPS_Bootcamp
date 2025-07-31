#include <bits/stdc++.h>
using namespace std;

int main() {
    int N;
    cin >> N;
    
    vector<int> P(N), Q(N);
    for (int i = 0; i < N; i++) cin >> P[i];
    for (int i = 0; i < N; i++) cin >> Q[i];
    
    vector<int> perm(N);
    for (int i = 0; i < N; i++) {
        perm[i] = i + 1;
    }
    int a = 0, b = 0;
    int idx = 1;
    
    while (next_permutation(perm.begin(), perm.end())){
        if (perm == P) a = idx;
        if (perm == Q) b = idx;
        idx++;
    }
    
    cout << abs(a - b) << "\n";
    return 0;
}
