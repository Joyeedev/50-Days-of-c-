#include <bits/stdc++.h>//https://vjudge.net/contest/547775#problem/B
using namespace std;
#define IOS ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define ll long long int
#define rep(i,a,b) for(ll i=a;i<b;i++)
#define all(x) x.begin(),x.end()
#define rall(x) x.rbegin(),x.rend()
int main(){ 
    ll n;
    while(cin>>n){
    ll temp=n;
    map<int,int>mp;
    for(ll i=2;i*i<=temp;i++){
        if(temp%i==0){
            while(temp%i==0){
                mp[i]++;
                temp=temp/i;
            }
        }
    }
    ll neighbour=1;
    if(temp>1)mp[temp]++;
    for (auto x:mp) {
        neighbour*=pow(x.second,x.first);
    
    }
     cout<<n<<" "<<neighbour<<endl;}

}