#include<bits/stdc++.h>//https://vjudge.net/contest/547775#problem/H
using namespace std;
#define IOS ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define ll long long int
#define rep(i,a,b) for(ll i=a;i<b;i++)
#define all(x) x.begin(),x.end()
#define rall(x) x.rbegin(),x.rend()
int main(){
    const ll n=10000;
    vector<bool>Prime(n+1,true);
    Prime[0]=Prime[1]=false;
    for(ll i=2;i*i<=n;i++){
        if(Prime[i]){
            for(ll j=i*i;j<=n;j+=i){
                Prime[j]=false;
            }
        }
    }
    vector<ll>prime;
    for(ll i=2;i<=n;i++){
        if(Prime[i]){prime.push_back(i);}
    }
    ll m;cin>>m;
    while(m--){
       ll n;cin>>n;
       ll max_rim=0;
       ll x=2;
       for(auto p:prime){
        if(p>n){break;}
        else{
          ll rim=n%p;
          if(rim>max_rim){
            max_rim=rim;
            x=p;
          }  
        }
       }
    cout<<x<<endl; 
    }
    }
