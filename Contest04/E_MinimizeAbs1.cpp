#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, l, r;
    cin >> n >> l >> r;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
        cin >> v[i];
    int ans = 0, mn = 1000;
    for (int i = 0; i <n; i++)
    {
        if(v[i]<l) cout<<l<<" ";
        else if(v[i]>r) cout<<r<<" ";
        else cout<<v[i]<<" ";
    }
    cout << endl;
}