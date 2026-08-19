#include<bits/stdc++.h>//https://codeforces.com/problemset/problem/1328/A
using namespace std;
#define ll long long
int main(){
    ll t;cin>>t;while(t--){
    ll a,b;cin>>a>>b;
    if(a%b==0)cout<<0<<endl;
    else{
        ll res=a/b;
        ll need=((res+1)*b)-a;
        cout<<need<<endl;
    }}
}