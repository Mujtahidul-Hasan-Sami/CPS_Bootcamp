#include <bits/stdc++.h>
using namespace std;
int main(){
    string s; cin>>s;
    int cnt  = 0;
    for(char c : s){
        if(c == '1') cnt++;
    }
    cout<<cnt<<endl;
}