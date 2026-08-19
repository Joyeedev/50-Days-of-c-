#include <bits/stdc++.h>
using namespace std;
#define IOS ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define ll long long int
#define rep(i,a,b) for(ll i=a;i<b;i++)
#define all(x) x.begin(),x.end()
#define rall(x) x.rbegin(),x.rend()
ll solve(ll n){
    ll sum_odd=n*n;
    ll sum_even=n*(n+1);
    return __gcd(sum_even,sum_odd);
}
int main(){
    ll n;cin>>n;
    cout<<solve(n);
    
        }
    
   
 
    
   
   
