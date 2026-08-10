#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define rep(i,a,b) for(ll i=a;i<b;i++)
void Solve(map<ll, ll>&freq, ll n){
    ll x;cin>>x;
    ll maxn=0;ll minn=1e9;
    for(auto& p : freq){
        maxn=max(maxn, p.first);
        minn=min(minn, p.first);
    }
    if(x>=minn && x<=maxn){
        cout<<"YES\n";
    }
    else{
        cout<<"NO\n";
    }
    
}
int main(){
    ll t;cin>>t;
    while(t--){
        ll n;cin>>n;
        map<ll, ll> freq;
        rep(i,0,n){
            ll x;cin>>x;
            freq[x]++;
        }
        Solve(freq, n);
    }
}