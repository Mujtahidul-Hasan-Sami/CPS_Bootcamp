#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int> v(9);
    for(int i=0; i<9; i++){
        cin>>v[i];
    }
    sort(v.begin(), v.begin()+3);
    sort(v.begin()+3, v.begin()+6);
    sort(v.begin()+6, v.begin()+9);
    vector<int> vec;
    for(int i=1; i<9; i+=3){
        vec.push_back(v[i]);
    }
    sort(vec.begin(),vec.end());
    cout<<vec[1]<<endl;
    // for(auto a : vec){
    //     cout<<a<<" ";
    // }
    // cout<<endl;
}