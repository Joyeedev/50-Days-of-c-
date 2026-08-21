#include <bits/stdc++.h>//https://codeforces.com/contest/26/problem/A
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
ll num_primediv(ll n){
    ll num=0;
    for(ll i=2;i*i<=n;i++){
        if(n%i==0){
            num++;
            while(n%i==0){
                n=n/i;
            }
        }
    }
    if(n>1)num++;
    return num;

}
int main(){
    ll n;cin>>n;
    ll num=0;
    for(ll i=4;i<=n;i++){
        ll s=num_primediv(i);
        if(s==2)num++;
    }
    cout<<num<<endl;
   
        
    }
    
