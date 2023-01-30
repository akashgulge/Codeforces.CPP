#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    int n,m,i,j,h;
    while(cin>>n>>h){
        int a[n+1],ct=0,ct1=0;
        for(i=0;i<n;i++){
            cin>>a[i];
            if(a[i]>h)
               ct++;
            else
                ct1++;

        }
        cout<<2*ct+ct1<<endl;
    }
    return 0;
}