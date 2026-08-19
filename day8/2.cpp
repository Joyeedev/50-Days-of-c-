#include <bits/stdc++.h>//https://codeforces.com/contest/1370/problem/A
using namespace std;
#define IOS ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define ll long long int
#define rep(i,a,b) for(ll i=a;i<b;i++)
#define all(x) x.begin(),x.end()
#define rall(x) x.rbegin(),x.rend()
ll GCD(ll a,ll b){
    return b?GCD(b,a%b):a;
}
ll factor(ll n){
    for(ll i=2;i*i<=n;i++){
        if(n%i==0){return n/i;}
        else return -1;
    }
    

}
int main(){
    ll t;cin>>t;while(t--){
        ll n;cin>>n;
        ll m=factor(n);
        if(m>0){
           cout<<GCD(m,n)<<endl;
        }
        else{
            cout<<GCD(n-1,(n-1)/2)<<endl;
        }
        
        
    }
}