#include <bits/stdc++.h>//https://codeforces.com/contest/567/problem/A
using namespace std;
#define IOS ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define ll long long int
#define rep(i,a,b) for(ll i=a;i<b;i++)
#define all(x) x.begin(),x.end()
#define rall(x) x.rbegin(),x.rend()

int main(){
    ll n;cin>>n;
    vector<ll>a(n);
    rep(i,0,n){cin>>a[i];}
    // ll p=abs(a[0]-a[n-1]);
    // ll q=abs(a[0]-a[1]);
    // cout<<q<<" "<<p<<endl;
    
    rep(i,0,n){
        
        ll mind=min(abs(a[i]-a[i+1]),abs(a[i]-a[i-1]));
        ll maxd=max(abs(a[i]-a[0]),abs(a[i]-a[n-1]));
        cout<<mind<<" "<<maxd<<endl;
        

    }
    // ll r=abs(a[n-1]-a[n-2]);
    // ll s=abs(a[n-1]-a[0]);
    // cout<<r<<" "<<s<<endl;
       

   
}