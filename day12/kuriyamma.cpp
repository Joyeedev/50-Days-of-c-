#include <bits/stdc++.h>//https://codeforces.com/contest/433/problem/B
using namespace std;
#define IOS ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define ll long long int
#define rep(i,a,b) for(ll i=a;i<b;i++)
#define all(x) x.begin(),x.end()
#define rall(x) x.rbegin(),x.rend()
ll type_1(vector<ll>&v,ll l,ll r){
    ll sum1=0;
    for(ll i=l-1;i<r;i++){
        sum1+=v[i];
    }
    return sum1;
}
ll type_2(vector<ll>v,ll l,ll r){
    sort(all(v));
    ll sum2=0;
    for(ll i=l-1;i<r;i++){
        sum2+=v[i];
    }
    return sum2;

}
int main(){
    ll n;cin>>n;
    vector<ll>v(n);
    for(ll i=0;i<n;i++){
        cin>>v[i];
    }
    ll m;cin>>m;
    while(m--){
        ll type,l,r;
        cin>>type>>l>>r;
        if(type==1){
            ll sum=type_1(v,l,r);
            cout<<sum<<endl;

        }
        else{
            ll sum=type_2(v,l,r);
            cout<<sum<<endl;
        }

    }
    
    

}