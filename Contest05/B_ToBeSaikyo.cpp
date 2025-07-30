#include<bits/stdc++.h>
using namespace std;
int main(){
    int n; cin>>n;
    vector<int> v(n);
    int mx =  -1;
    for(int i=0; i<n; i++){ 
        cin>>v[i];
    }
    int mxElem =  *max_element(v.begin()+1, v.end());
    int ans  =  max(0, mxElem-v[0]+1);
    cout<<ans<<endl;
}