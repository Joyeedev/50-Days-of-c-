#include <bits/stdc++.h>//https://vjudge.net/contest/849309#problem/A
using namespace std;
#define IOS ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define ll long long
ll BigMod(ll x,ll n,ll mod){
    
    ll res;
    x=x%mod;
    if(n==0){res=1%mod; }
    else if(n%2==1){
        res=((x%mod)*(BigMod(x,n-1,mod)%mod))%mod;
    }
    else{
        res=BigMod(x,n/2,mod);
        res=(res%mod*res%mod)%mod;
    }
    return res;
}
int main() {
    IOS;
    ll b,p,m;
    while(cin>>b>>p>>m){
    cout<<BigMod(b,p,m)<<endl;

    }
    return 0;
}