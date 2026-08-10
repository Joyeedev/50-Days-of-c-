#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define rep(i,a,b) for(ll i=a;i<b;i++)
void solve(){
    ll n;cin>>n;
    vector<ll> a(n);
    rep(i,0,n){cin>>a[i];}
    if(is_sorted(a.begin(),a.end())){
        ll m=a[1]-a[0];
        rep(i,1,n-1){
            m=min(m,a[i+1]-a[i]);

        }

        ll mean=ceil(double(m+1)/2);
        cout<<mean<<endl;}
        else {cout<<0<<endl;}
    

   
}
int main(){
      ll t;cin>>t;
      while(t--){
        solve();}
   return 0; 
}