#include<bits/stdc++.h>
using namespace std;
int main(){
    string a, b; cin>>a>>b;
    if(a.size()<b.size()) swap(a,b);
    // cout<<a<<" "<<b;
    bool f =  false;
    for(int i=0; i<b.size(); i++){
        char c1=a[a.size()-1-i];
        char c2=b[b.size()-1-i];
        if(c1-'0'+c2-'0'>=10){
            // cout<<"Hard"<<endl;
            f =  true;
            break;
        }
    }
    if(f==true) cout<<"Hard"<<endl;
    else cout<<"Easy"<<endl;
}