#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n,ans=0;
    cin>>n;
    vector<int>v(n);
    for(int i=0; i<n; i++) cin>>v[i];
    sort(v.begin(), v.end());
    for(int i=0; i<n; i++){
        if(v[i]==0) continue;
        if(i<n && v[i]==1)
        v[i+1]--;
        ans++;
    }
    cout<<ans<<endl;
}


int main() {
    int t;
    cin >> t;
    while(t--){
       solve();
    }
    return 0;
}