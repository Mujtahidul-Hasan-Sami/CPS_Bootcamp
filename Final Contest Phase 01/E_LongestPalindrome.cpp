#include<bits/stdc++.h>
#define fastIO ios::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);

using namespace std;

bool is_palindrome(string s){
    for(int i = 0; i<s.size(); i++){
        if(s[i]!=s[s.size()-1-i]) return false;
    }
    return true;
}
int main(){
    fastIO;
    string s; cin>>s;
    int n = s.size();
    int mx = 1;

    for(int i=0; i<n; i++){
        for(int j=i+1; j<=n; j++){
            string p = "";
            for(int k=i; k<j; k++){
                p+=s[k];
            }
            if(is_palindrome(p)) mx = max(mx, j-i);
        }
    }
    cout<<mx<<endl;
}