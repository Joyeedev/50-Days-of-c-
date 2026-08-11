#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define rep(i,a,b) for(ll i=a;i<b;i++)
#define all(x) x.begin(),x.end()
#define rall(x) x.rbeging(),x.rend()
void solve(){
    ll n;cin>>n;
    ll s =(n*(n+1))/2;
    if(s%2==0){cout<<0<<endl;}
    else cout<<1<<endl;

}
int main(){
    solve();

}