#include<bits/stdc++.h>
using namespace std; 
int main() {
    string k; cin>>k;
    string a = k;
    string b = "";
    b+=k[1];
    b+=k[2];
    b+=k[0];
    string c = "";
    c+=k[2];
    c+=k[0];
    c+=k[1];
    int ans = stoi(a)+stoi(b)+stoi(c);
    // cout<<a<<" "<<b<<" "<<c<<endl;
    cout<<ans<<endl;
}