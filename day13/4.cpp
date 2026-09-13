#include<bits/stdc++.h>//https://codeforces.com/contest/43/problem/A
using namespace std;
#define ll long long
int main(){
    ll n;cin>>n;
    map<string,ll>mp;
    for(ll i=0;i<n;i++){
        string s;cin>>s;
        mp[s]++;
    }
    ll w=0;
    string winner;
    for(auto x:mp){
        if(x.second>w){
            w=x.second;
            winner=x.first;
        }
    }
    cout<<winner<<endl;
    return 0;}
