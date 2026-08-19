#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define rep(i,a,b) for(ll i=a;i<b;i++)
#define all(x) x.begin(),x.end()
#define rall(x) x.rbegin(),x.rend()
#define input(v) for(ll i=0;i<n;i++)cin>>a[i];
int main(){
    ll x;cin>>x;ll sum=0;ll dup=x;
   while(x>0){
    ll r=x%10;
    sum+=r*r*r;
        x=x/10;
    }
    if(sum==dup)cout<<"YES"<<endl;
  
    
   
   
}