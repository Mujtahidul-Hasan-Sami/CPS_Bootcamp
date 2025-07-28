#include <bits/stdc++.h>
using namespace std;
int main(){
    int n, k; cin>>n>>k;
    vector<int> v(n);
    for(int i=0; i<n; i++){
        cin>>v[i];
    }
    vector<int> vec(n, 0);
    int l = 0;
    for(int i=k; i<n; i++){
        vec[i]=v[l++];
    }
    int p = k;
    for(int i=0; i<k; i++){
        vec[i]=v[n-p];
        n++;
    }
    for(auto a: vec){
        cout<<a<<" ";
    }
    cout<<endl;
}
