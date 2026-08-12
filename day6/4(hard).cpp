#include <bits/stdc++.h>//https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/X
using namespace std;
#define ll long long int
#define rep(i,a,b) for(ll i=a;i<b;i++)
#define all(x) x.begin(),x.end()
#define rall(x) x.rbegin(),x.rend()
#define input(v) for(ll i=0;i<n;i++)cin>>a[i];
int main(){
    ll n,m;cin>>n>>m;
    vector<vector<char>>a(n,vector<char>(m));
    for(auto &row:a){
        for(auto &x:row){cin>>x;}
    }
    ll x,y;cin>>x>>y;
    x--;y--;
    bool ok=true;
    for(ll i=x-1;i<=x+1;i++){
         for(ll j=y-1;j<=y+1;j++){
            if(i==x&&j==y){
                continue;
            }
            else if(i>=0&&i<n&&j>=0&&j<m){
                if(a[i][j]=='.'){
                    ok=false;
                }
            }
        
    }
    }
    if(ok==true)cout<<"yes"<<endl;
    else cout<<"no"<<endl;

}