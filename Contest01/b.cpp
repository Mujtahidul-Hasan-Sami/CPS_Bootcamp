#include<bits/stdc++.h>
using namespace std;
int main(){
    int a, b; cin>>a>>b;
    int d = a/b;
    int r = a%b;
    double f =  a*1.0/b;
    cout<<d<<" "<<r<<" ";
    cout<<fixed << setprecision(5) <<f;
}