#include <bits/stdc++.h>//https://vjudge.net/contest/547775#problem/C
using namespace std;
#define IOS ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define ll long long int
#define rep(i,a,b) for(ll i=a;i<b;i++)
#define all(x) x.begin(),x.end()
#define rall(x) x.rbegin(),x.rend()
int main(){ 
    const ll n=1000;
    vector<bool>Prime(n+1,true);
    Prime[0]=false;
    for(ll i=2;i*i<=n;i++){
        if(Prime[i]){
            for(ll j=i*i;j<=n;j+=i){
                Prime[j]=false;
            }
        }
    }
    ll N,C;
    while(cin>>N>>C){
    vector<ll>prime;
    for(ll i=1;i<=N;i++){
        if(Prime[i]){prime.push_back(i);}
    }
    ll l=prime.size();

        ll count;
        if(l%2==0)count=2*C;
        else count=2*C-1;
        if(count>=l){
            cout<<N<<" "<<C<<":";
            for(auto x:prime){
                cout<<" "<<x;
            }cout<<endl<<endl;
        }
        else{
            ll start=l/2 -count/2;
             cout<<N<<" "<<C<<":";
             for(ll i=start;i<start+count;i++){
                cout<<" "<<prime[i];
             }
             cout<<endl<<endl;
        }

    }
}