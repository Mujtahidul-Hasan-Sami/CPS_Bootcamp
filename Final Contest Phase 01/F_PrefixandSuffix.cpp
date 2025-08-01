#include<bits/stdc++.h>
#define fastIO ios::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);

using namespace std;

int main(){
    fastIO;
    int n, m; cin>>n>>m;
    string a,b; cin>>a>>b;
    string prft = b.substr(0,n);
    string sfft = b.substr(m-n, n);
    if(a==prft && a==sfft) cout<<0<<endl;
    else if(a==prft && a!=sfft) cout<<1<<endl;
    else if(a!=prft && a==sfft) cout<<2<<endl;
    else cout<<3<<endl;
    
}