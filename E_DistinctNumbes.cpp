#include<bits/stdc++.h>
using namespace std;
int main(){
    int n; cin>>n;
    vector<int> v(n);
    map<int,int> mpp;
    for(int i=0; i<n; i++){
        cin>>v[i];
        mpp[v[i]]++;
    } 
    cout<<mpp.size()<<endl;
    
}