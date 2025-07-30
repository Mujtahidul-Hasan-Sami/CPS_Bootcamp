#include <bits/stdc++.h>
using namespace std;
int main(){
    int n; cin>>n;
    bool f = false;
    while(n--){
        string s; cin>>s;
        if(s=="and" || s=="not" || s=="that" || s=="the" || s=="you") f = true;
    }
    if(f) cout<<"Yes"<<endl;
    else cout<<"No"<<endl;
}