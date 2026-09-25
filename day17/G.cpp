#include<bits/stdc++.h>//https://vjudge.net/contest/849308#problem/G
using namespace std;
#define IOS ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define ll long long int
#define rep(i,a,b) for(ll i=a;i<b;i++)
#define all(x) x.begin(),x.end()
#define rall(x) x.rbegin(),x.rend()
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    const ll Max=32000;
    vector<bool>is_prime(Max+1,true);
    is_prime[0]=is_prime[1]=false;
    for(ll i=2;i*i<=Max;i++){
        if(is_prime[i]){
            for(ll j=i*i;j<=Max;j+=i){
                is_prime[j]=false;
            }
        }
    }
    vector<ll>p;
    for(ll i= 2;i<=Max;i++) {
        if (is_prime[i])
            p.push_back(i);
    }ll x,y;
    while(cin>>x>>y&&(x!=0||y!=0)){
        if(x>y){swap(x,y);}
         ll i=0;
       
         while(i+2<(int)p.size()){
             ll diff=p[i+1]-p[i];
            ll j=i+1;
            while(j<p.size()&&p[j]-p[j-1]==diff){
            j++;
        }
    if (j-i>=3){
        if(p[i]>=x && p[j]<=y){
        for (ll k=i;k<j;k++) {
            if(k+1==j){cout<<p[k]<<endl;}
            else cout<<p[k]<<" ";
            }}}
    
        i=j-1;
    }
         
    }
    return 0;
}
    
