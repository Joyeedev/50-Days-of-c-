#include <bits/stdc++.h>//https://codeforces.com/problemset/problem/1294/C
using namespace std;
#define IOS ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define ll long long int
#define rep(i,a,b) for(ll i=a;i<b;i++)
#define all(x) x.begin(),x.end()
#define rall(x) x.rbegin(),x.rend()
int main(){
    ll t;cin>>t;while(t--){
    ll n;cin>>n;
    vector<ll>a;
    for(ll i=2;i*i<=n;i++){
       if(a.size()<2){
        if(n%i==0){
            a.push_back(i);
            n=n/i;
        }}
    }
    if(a.size()>=2&&n>1&&n!=a[0]&&n!=a[1])a.push_back(n);
    if(a.size()==3){
        cout<<"YES"<<endl;
    for(auto x:a){cout<<x<<" ";}
    cout<<endl;}
    else cout<<"NO"<<endl;}

}