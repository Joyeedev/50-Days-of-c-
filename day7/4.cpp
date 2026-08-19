#include <bits/stdc++.h>//https://codeforces.com/problemset/problem/486/A
using namespace std;
#define ll long long int
#define rep(i,a,b) for(ll i=a;i<b;i++)
#define all(x) x.begin(),x.end()
#define rall(x) x.rbegin(),x.rend()
#define input(v) for(ll i=0;i<n;i++)cin>>a[i];
int main(){
    ll n;cin>>n;
    ll sum=0;
   
        if(n&1)sum-=(n+1)/2;
        else sum+=n/2;
    
    cout<<sum<<endl;
}
