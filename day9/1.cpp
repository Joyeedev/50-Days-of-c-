#include <bits/stdc++.h>//https://codeforces.com/contest/1350/problem/A
using namespace std;
#define IOS ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define ll long long int
#define rep(i,a,b) for(ll i=a;i<b;i++)
#define all(x) x.begin(),x.end()
#define rall(x) x.rbegin(),x.rend()
ll smalest_factor(ll n){
    ll f=0;
    for(ll i=2;i*i<=n;i++){
        if(n%i==0){
            f=1;
            return i;
            
        }
        else f=0;
    }
    if(f==0)return n;

}
int main(){
ll t;cin>>t;while(t--){
    ll n,k;cin>>n>>k;
    while(k--){
    n=n+smalest_factor(n);}
    cout<<n<<endl;}
}
