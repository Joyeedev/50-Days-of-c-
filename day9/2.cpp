#include <bits/stdc++.h>//https://codeforces.com/contest/129/problem/A
using namespace std;
#define IOS ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define ll long long int
#define rep(i,a,b) for(ll i=a;i<b;i++)
#define all(x) x.begin(),x.end()
#define rall(x) x.rbegin(),x.rend()

int main(){
       //ll t;cin>>t;while(t--){
       ll n;cin>>n;ll even=0;ll odd=0;
       vector<ll>a(n);ll sum=0;
       for(ll i=0;i<n;i++){
        cin>>a[i];sum+=a[i];
       if(a[i]%2==0)even++;
       else odd++;
       }
       if(sum%2==0)cout<<even<<endl;
       else cout<<odd<<endl;

   
}
