#include <bits/stdc++.h>
using namespace std; 
int main(){
    int n; cin>>n; 
    vector<int> v(n);
    int mx =  -2;
    int mxpos = -1;
    int mn  = 1000; 
    int mnpos = -1;
    // sort(v.begin(), v.end())
    for(int i=0; i<n; i++){
        cin>>v[i];
        if(v[i]>mx){
            mx =  v[i];
            mxpos = i;
        }
        if(v[i]<=mn){
            mn = v[i];
            mnpos = i;
        }
    }
    // cout<<mxpos<<" "<<mnpos<<endl;
    int diff  = n-mxpos;
    int  ans  = 0;
    if(mxpos<mnpos){
        ans =  mxpos+(n-mnpos-1);
    }
    else{
        mnpos++;
        ans = mxpos + (n-mnpos-1);
    }
    cout<<ans<<endl;
}