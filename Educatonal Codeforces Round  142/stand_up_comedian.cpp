#include<bits/stdc++.h>
using namespace std;
#define ll long long 

void solve(){
    ll a,b,c,d,alice,bob,temp,jok;
    cin>>a>>b>>c>>d;
    bob=alice=jok=a;
    while(b>0 || c>0 || d>0){
        if(bob>0 and b>0){
            temp = min(b,bob);
            bob-=temp;
            alice+=temp;
            jok+=temp;
            b-=temp;
        }
        else if(alice>0 and c>0){
            temp = min(c,alice);
            alice-=temp;
            bob+=temp;
            jok+=temp;
            c-=temp;
        }
        else if(alice>0 and bob>0 and d>0){
            temp = min(d, min(alice,bob));
            jok+=temp;
            alice-=temp;
            bob-=bob;
            d-=temp;
        }
        else{
            if(b!=0 || c!=0 || d!=0) jok++;
            break;
        }
    }
    cout<<jok<<endl;
}

int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
}