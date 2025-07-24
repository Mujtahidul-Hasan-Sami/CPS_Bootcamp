#include <bits/stdc++.h>
using namespace std;
int main(){
    string a,b; cin>>a>>b;
    char a1 = a[0];
    char a2 = a[1];
    char b1 = b[0];
    char b2 = b[1];
    int k1 = min(abs((int)a1-(int)a2), 5- abs((int)a1-(int)a2));
    int k2 = min(abs((int)b1-(int)b2), 5- abs((int)b1-(int)b2));
    if(k1==k2){
        cout<<"Yes"<<endl;
    }
    else cout<<"No"<<endl;
}