#include <bits/stdc++.h>
using namespace std;
int main(){
    int h,w; cin>>h>>w;
    for(int i=0;i<h;i++){
        for(int j=0;j<w;j++){
            int x;cin>>x;
            cout<<(x?char('A'+x-1):'.');
        }
        cout<<"\n";
    }
}
