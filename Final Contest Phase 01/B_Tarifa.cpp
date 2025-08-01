#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,k; cin>>n>>k;
    int rst = 0;
    while(k--){
        int x; cin>>x;
        rst +=(n-x);
    }
    rst += n;
    cout<<rst<<endl;
}