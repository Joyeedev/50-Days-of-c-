#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define rep(i,a,b) for(ll i=a;i<b;i++)
void solve(){
    ll n;cin>>n;
    vector<ll> a(n);
    rep(i,0,n){cin>>a[i];}
    ll maxc=1;ll f=1;
    rep(i,0,n-1){
        
           if(a[i]<a[i+1]){
            f+=1;
            maxc=max(maxc,f);
           }
           else f=1;
          
            
        }
    cout<<maxc<<endl;

   
}
int main(){
   
        solve();
   return 0; 
}