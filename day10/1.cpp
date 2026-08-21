#include <bits/stdc++.h>//https://codeforces.com/contest/1941/problem/A
using namespace std;
#define IOS ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define ll long long int
#define rep(i,a,b) for(ll i=a;i<b;i++)
#define all(x) x.begin(),x.end()
#define rall(x) x.rbegin(),x.rend()

int main(){
    ll t;cin>>t;while(t--){
        ll n,m,k;cin>>n>>m>>k;
        vector<ll>a,b;
        rep(i,0,n){
            ll x;cin>>x;
            if(x<k)a.push_back(x);
        }

        rep(i,0,m){
            ll x;cin>>x;
            if(x<k)b.push_back(x);
            
    
        }ll w=0;
        rep(i,0,a.size()){
        rep(j,0,b.size()){
        if(a[i]+b[j]<=k)w++;
        }}
        cout<<w<<endl;

       
      

    }

}