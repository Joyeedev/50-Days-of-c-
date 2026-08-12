#include <bits/stdc++.h>//https://codeforces.com/contest/1934/problem/A
using namespace std;
#define ll long long int
#define rep(i,a,b) for(ll i=a;i<b;i++)
#define all(x) x.begin(),x.end()
#define rall(x) x.rbegin(),x.rend()
#define input(v) for(ll i=0;i<n;i++)cin>>a[i];
void solve(){
    ll n;cin>>n;
    vector<ll> a(n);
    input(a);
    sort(all(a));
    cout<<2*(a[n-1]+a[n-2]-a[0]-a[1])<<endl;
}
int main(){
    ll t;cin>>t;while(t--){    solve();
}}