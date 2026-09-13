#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main() {
    ll n,t;cin>>n>>t;
    string s;
    char c='0'+t;
    if(n==1&&t>9){
        cout<<-1<<endl;
    }else if(t<10){
    for(ll i=0;i<n;i++){
        
        s+=c;
    }
    cout<<s<<endl;}
    else if(t==10){
        s+='1';
        for(ll i=1;i<n;i++){
            s+='0';
        }
    cout<<s<<endl;

    }
    return 0;
}