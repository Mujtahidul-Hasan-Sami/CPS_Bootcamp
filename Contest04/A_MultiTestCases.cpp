#include<bits/stdc++.h>
using namespace std;
int main(){
    int tc; cin>>tc;
    while(tc--){
        int n; cin>>n;
        int cnt = 0;
        vector<int> v(n);
        for(int i=0; i<n; i++){
            cin>>v[i];
        }
        for(int i=0; i<n; i++){
            if(v[i]%2>0){
                cnt++;
            }
        }
        cout<<cnt<<endl;
    }
}