#include <bits/stdc++.h>//https://codeforces.com/contest/384/problem/A
using namespace std;
#define IOS ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define ll long long int
#define rep(i,a,b) for(ll i=a;i<b;i++)
#define all(x) x.begin(),x.end()
#define rall(x) x.rbegin(),x.rend()
int main(){
    ll n;cin>>n;
    if(n%2==0)cout<<(n*n)/2<<endl;
    else cout<<((n*n)+1)/2<<endl;
    vector<vector<char>>a(n,vector<char>(n));
    for(ll i=0;i<n;i++){
        for(ll j=0;j<n;j++){
            if((i+j)%2==0){
                a[i][j]='C';

            }
            else a[i][j]='.';
        }
    }
    for(auto x:a){
        for(auto y:x){
            cout<<y;
        }
        cout<<endl;
    }
}