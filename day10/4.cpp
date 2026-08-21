#include <bits/stdc++.h>//https://vjudge.net/problem/Gym-405759K
using namespace std;
#define IOS ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define ll long long int
#define rep(i,a,b) for(ll i=a;i<b;i++)
#define all(x) x.begin(),x.end()
#define rall(x) x.rbegin(),x.rend()
int main(){
    ll n,k;cin>>n>>k;
    vector<ll>div;
    for(ll i=1;i<=n/i;i++){
        if(n%i==0){div.push_back(i);
        if(i!=n/i){div.push_back(n/i);}}}
        sort(all(div));
        if(k<=div.size()){
            cout<<div[k-1]<<endl;
        }
        else cout<<-1<<endl;
    
}