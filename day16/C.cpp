#include <bits/stdc++.h>//https://vjudge.net/contest/849309#problem/C
using namespace std;
#define IOS ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define ll long long
const ll mod=1000000007;
ll BigMod(ll x,ll n){
    
    ll res;
    x=x%mod;
    if(n==0){res=1%mod; }
    else if(n%2==1){
        res=((x%mod)*(BigMod(x,n-1)%mod))%mod;
    }
    else{
        res=BigMod(x,n/2);
        res=(res%mod*res%mod)%mod;
    }
    return res;
}
int main() {
    ll t;cin>>t;
    ll i=1;
    while(i<=t){
        ll n;cin>>n;
        if(n==1)cout<<"Case #"<<i<<": "<<1<<endl;
        else{
            ll power=BigMod(2,n-1);
            ll ans=((n%mod)*power)%mod;
            cout<<"Case #"<<i<<": "<<ans<<endl;
           
        }
        i++;
    }
    
    return 0;
}
