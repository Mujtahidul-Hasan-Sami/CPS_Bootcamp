#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n; cin>>n;
    vector<int> v(7*n);
    for(int i=0; i<7*n; i++) cin>>v[i];
    int ans = 0;
    for(int i=0; i<n*7; i++){
        ans+=v[i];
        if(i%7==6){
            cout<<ans<<" ";
            ans =  0;
        }
    }
    cout<<endl;
}