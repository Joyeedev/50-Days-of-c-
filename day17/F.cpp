#include <bits/stdc++.h>//https://vjudge.net/contest/849308#problem/F
using namespace std;

#define ll long long
int main(){
    const ll Max=20000000;
    vector<bool>isprime(Max+1,true);
    isprime[0]=isprime[1]=false;
    for(ll i=2;i*i<=Max;i++){
        if(isprime[i]){
            for(ll j=i*i;j<=Max;j+=i){
                isprime[j]=false;
            }
        }
    }
    vector<pair<ll,ll>>twins;
    for(ll i=3;i<=isprime.size()-2;i++){
        if(isprime[i]&&isprime[i+2]){
            twins.push_back({i,i+2});
        }
        if(twins.size()==100000){
            break;
        } }
    ll s;
    while(cin>>s){
        cout<<"("<<twins[s-1].first<<", "<<twins[s-1].second<<")"<<endl;
    }


}