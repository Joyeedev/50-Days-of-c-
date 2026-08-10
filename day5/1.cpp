#include<bits/stdc++.h>//https://codeforces.com/contest/598/problem/A (not solved)
using namespace std;
#define ll long long int
#define rep(i,a,b) for(ll i=a;i<b;i++)
void solve(){
    ll n;cin>>n;
    ll even=(n/2);
    ll odd=(n+1)/2;
    ll sum_even=even*(even+1);
    ll sum_odd=odd*odd;
    cout<<sum_odd-1-sum_even<<endl;

    

   
}
int main(){
     
      ll t;cin>>t;while(t--){
        solve();}
   return 0; 
}