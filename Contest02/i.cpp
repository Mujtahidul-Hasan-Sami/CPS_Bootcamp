#include <bits/stdc++.h>
using namespace std;
int main(){
    int n, a;
    cin>>n>>a;
    int k =  n/500;
    n = n-(k*500);
    if(n<=a) cout<<"Yes"<<endl;
    // else if(a!=0) cout<<"Yes"<<endl;
    else cout<<"No"<<endl;
}