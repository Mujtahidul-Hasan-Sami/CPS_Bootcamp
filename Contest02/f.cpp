#include<bits/stdc++.h>
using namespace std;
int main(){
    int n; cin>>n;
    if(n<=999){
        cout<<n<<endl;
    }
    else if(n>=1000 && n<=9999){
        n = n/10;
        cout<<n*10<<endl;
    }
    else if(n>=10000 && n<=99999){
        n = n/100;
        cout<<n*100<<endl;
    }
    else if(n>=100000 && n<=999999){
        n = n/1000;
        cout<<n*1000<<endl;
    }
    else if(n>=1000000 && n<=(10000000-1)){
        n = n/10000;
        cout<<n*10000<<endl;
    }
    else if(n>=10000000 && n<=(100000000-1)){
        n = n/100000;
        cout<<n*100000<<endl;
    }
    else if(n>=100000000 && n<=(1000000000-1)){
        n = n/1000000;
        cout<<n*1000000<<endl;
    }
}