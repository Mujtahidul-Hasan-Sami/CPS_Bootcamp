#include <bits/stdc++.h>
using namespace std;
int main(){
    int n,m; cin>>n>>m;
    string s,t; cin>>s>>t;
    bool pre = (t.substr(0,n) == s);
    bool suf = (t.substr(m-n,n) == s);
    if(pre && suf) cout<<0<<"\n";
    else if(pre) cout<<1<<"\n";
    else if(suf) cout<<2<<"\n";
    else cout<<3<<"\n";
}
