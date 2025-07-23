#include<bits/stdc++.h>
using namespace std; 
int main(){
    int a,b,c;
    vector<int> v(3);
    for(int i=0; i<3; i++) cin>>v[i];
    sort(v.begin(),v.end());
    cout<<v[0]<<" "<<v[1]<<" "<<v[2]<<endl;
    // cout<<endl;
}