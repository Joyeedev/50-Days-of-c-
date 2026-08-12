#include <bits/stdc++.h>//https://codeforces.com/contest/266/problem/B
using namespace std;
#define ll long long int
#define rep(i,a,b) for(ll i=a;i<b;i++)
#define all(x) x.begin(),x.end()
#define rall(x) x.rbegin(),x.rend()
#define input(v) for(ll i=0;i<n;i++)cin>>a[i];
string solve(string s,ll n){
    
    for(ll i=0;i<n-1;){
        if(s[i]<s[i+1]){
            swap(s[i],s[i+1]);i+=2;
        }
        else{i++;}

    }
    return s;

}
int main(){
    ll n,t;cin>>n>>t;
    string x;cin>>x;
    while(t--){
        
        x=solve(x,n);
    }
    cout<<x<<endl;
    

}