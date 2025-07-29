#include <bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n;cin>>n;
    vector<string>a(n);
    for(auto x:a)cin>>x;
    vector<pair<int,int>>pos;
    for(int j=0;j<n;j++)pos.push_back({0,j});
    for(int i=1;i<n;i++)pos.push_back({i,n-1});
    for(int j=n-2;j>=0;j--)pos.push_back({n-1,j});
    for(int i=n-2;i>0;i--)pos.push_back({i,0});
    vector<char>val;
    for(auto [x,y]:pos)val.push_back(a[x][y]);
    rotate(val.rbegin(),val.rbegin()+1,val.rend());
    for(int k=0;k<(int)pos.size();k++)
        a[pos[k].first][pos[k].second]=val[k];
    for(auto &x:a)cout<<x<<"\n";
}
