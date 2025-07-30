#include<bits/stdc++.h>
using namespace std;
int main(){
    int a,b,c; cin>>a>>b>>c;
    int j = a+b;
    int k = b+c;
    int l = a+c;
    int mx =  max(j,k);
    mx = max(mx, l);
    cout<<mx<<endl;
}