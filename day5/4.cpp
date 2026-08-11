#include <bits/stdc++.h>//https://codeforces.com/contest/1937/problem/A
using namespace std;
#define ll long long int
#define rep(i,a,b) for(ll i=a;i<b;i++)
#define all(x) x.begin(),x.end()
#define rall(x) x.rbegin(),x.rend()

void solve() {
    ll n;
    cin >> n;
    ll p=0;
    for(ll i=0;pow(2,i)<=n;i++){
        p=pow(2,i);
    }
cout<<p<<endl;}    

int main() {
    ll t;
    cin >> t;
    while (t--) {
        solve();
    }
}



