#include <bits/stdc++.h>
using namespace std;
int main()
{
    int tc;
    cin >> tc;
    while (tc --)
    {

        int n;
        cin >> n;
        vector<int> v(n);
        map<int, int> mp;
        bool f =  false;
        for(int i=0; i<n; i++){
            cin>>v[i];
            mp[v[i]]++;
        }
        for(auto  a : mp){
            if(a.second>=3){
                cout<<a.first<<endl;
                f =  true;
                break;
            }
        }
        if(!f) cout<<-1<<endl;
    }
}