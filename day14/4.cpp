#include <bits/stdc++.h>//https://codeforces.com/problemset/problem/1151/A
using namespace std;
#define ll long long
int main(){
    string S1="ACTG";
    ll n;cin>>n;
    string s;cin>>s;
    
    ll min_op=INT16_MAX;
    for(ll i=0;i<=n-4;i++){
     string sub=s.substr(i,4);
     ll op=0;
     for(ll j=0;j<4;j++){
        
        if(sub[j]!=S1[j]){
            ll diff=abs(sub[j]-S1[j]);
            op+=min(diff,(abs(26-diff)));
        }
        
     }
     min_op=min(op,min_op);
    }
    cout<<min_op<<endl;


}