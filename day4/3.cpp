#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define rep(i,a,b) for(ll i=a;i<b;i++)
#define endll cout<<endl;
#define all(x) x.begin(),x.end()
void solve(){
    ll n;cin>>n;ll sum=0;ll dlt=0;
    vector<ll>a(n);
    rep(i,0,n){cin>>a[i];sum+=a[i];}
    if((sum%3)==0){cout<<0<<endl;}
    else{
        rep(i,0,n){
            if((sum-a[i])%3==0){dlt++;break;}
            }
        ll add=((sum/3)+1)*3-sum;
        if(dlt==0)cout<<add<<endl;
        else
        cout<<min(dlt,add)<<endl;

}}
int main(){
    ll t;cin>>t;
    while(t--){
        solve();
    }
    return 0;

}