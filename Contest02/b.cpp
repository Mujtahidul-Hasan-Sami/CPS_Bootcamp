#include <bits/stdc++.h>
using namespace std;
int main(){
    int a, b, c;
    cin>>a>>b>>c;
    if(a<b && a<c && b>a && b<c){
        cout<<"Yes"<<endl;
    }
    else cout<<"No"<<endl;
}