#include <bits/stdc++.h>//seive
using namespace std;
#define IOS ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define ll long long int
#define rep(i,a,b) for(ll i=a;i<b;i++)
#define all(x) x.begin(),x.end()
#define rall(x) x.rbegin(),x.rend()
bool prime(ll a){
    for(ll i=2;i*i<=a;i++){
        if(a%i==0)return false;
        else return true; }    }
int main(){
    ll n;cin>>n;
    vector<bool>Prime(n+1,true);
    Prime[0]=Prime[1]=false;
    for(ll i=2;i*i<=n;i++){
        if(Prime[i]){
            for(ll j=i*i;j<=n;j+=i){
                Prime[j]=false;
            }
        }
    }ll s=0;
    rep(i,0,n){
        if(Prime[i])s++;
    }
    cout<<s<<endl;

        
    }