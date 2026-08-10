#include<bits/stdc++.h>//https://codeforces.com/contest/1353/problem/B/
using namespace std;
#define ll long long int
#define rep(i,a,b) for(ll i=a;i<b;i++)
#define all(x) x.begin(),x.end()
#define rall(x) x.rbeging(),x.rend()
void solve(){
    ll n,k;cin>>n>>k;
    vector<ll>a(n),b(n);
    rep(i,0,n)cin>>a[i];
    rep(i,0,n)cin>>b[i];
    sort(all(a));sort(all(b));
    int count=0;
    for(ll i=n-1;i>=0;i--){
        if(a[n-1-i]<b[i]){
            if(count>=k)break;
            swap(a[n-1-i],b[i]);count++;

        }
    }
    ll sum=0;
    rep(i,0,n)sum+=a[i];
    cout<<sum<<endl;

}
int main(){
    ll t;cin>>t;while(t--){
        solve();
    }

}