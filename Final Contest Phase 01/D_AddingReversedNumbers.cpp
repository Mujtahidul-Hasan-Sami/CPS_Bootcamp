#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    while(n--){
        string a, b;
        cin>>a>>b;
        reverse(a.begin(),a.end());
        reverse(b.begin(),b.end());
        int a1 = stoi(a);
        int b1 = stoi(b);
        int c = a1+b1;
        string s =to_string(c);
        reverse(s.begin(),s.end());
        cout<<stoi(s)<<endl;
    }
}