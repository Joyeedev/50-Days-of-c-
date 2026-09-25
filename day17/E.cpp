#include<bits/stdc++.h>//https://vjudge.net/contest/547775#problem/E
using namespace std;
#define IOS ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define ll long long int
#define rep(i,a,b) for(ll i=a;i<b;i++)
#define all(x) x.begin(),x.end()
#define rall(x) x.rbegin(),x.rend()

int main(){
    ll t;cin>>t;while(t--){
    ll l,u;cin>>l>>u;
    vector<bool>P(u+1,true);
    P[0]=P[1]=false;
    for(ll i=2;i*i<=u;i++){
        if(P[i]){
            for(ll j=i*i;j<=u;j+=i){
                P[j]=false;
            }
        }
    }
    vector<ll>primes;
    for(ll i=l;i<=u;i++){
       if(P[i]){primes.push_back(i);}
    }
    if(primes.size()<2){cout<<"No jumping champion"<<endl;}
    else{
    map<ll,ll>mp;
    for(ll i=0;i<primes.size()-1;i++){
        ll diff=primes[i+1]-primes[i];
        mp[diff]++;
    }
    ll mx_freq=0;
    ll champ=0;
    ll count=0;
    for(auto x:mp){
        mx_freq=max(mx_freq,x.second);
       
    }
    for(auto x:mp){
        if(x.second==mx_freq){
            champ=x.first;
            count++;
        }
    }
    if(count==1){
    cout<<"The jumping champion is "<<champ<<endl;}
    else{
        cout<<"No jumping champion"<<endl;
    }
}}

}