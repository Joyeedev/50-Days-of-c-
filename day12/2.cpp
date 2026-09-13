#include <bits/stdc++.h>//https://codeforces.com/contest/525/problem/C
using namespace std;
#define IOS ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define ll long long int
#define rep(i,a,b) for(ll i=a;i<b;i++)
#define all(x) x.begin(),x.end()
#define rall(x) x.rbegin(),x.rend()
int main(){
    ll n;cin>>n;
    vector<ll>v(n);
    for(ll i=0;i<n;i++){
        cin>>v[i];
    }
    sort(all(v));
    vector<ll>side;
    for(ll i=0;i<n-1;i++){
        if((v[i+1]-v[i])<=1){
            side.push_back(v[i]);
            i++;
        }
    }
    ll area=0;
    if(side.size()>0){
     for(ll i=0;i<side.size()-1;i++){
         area=side[i]*side[i+1];
     }
   
    cout<<area<<endl;}
    else cout<<0<<endl;
}