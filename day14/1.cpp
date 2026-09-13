#include<bits/stdc++.h>//https://codeforces.com/contest/43/problem/A
using namespace std;
#define ll long long
int main(){
    string s,p;cin>>s>>p;
    ll k=1;
    ll mx=s.length()-p.length();
    ll indx=0;bool flag=true;
    for(ll k=0;k<=mx;k++){
        ll f=1;
        for(ll i=0;i<p.length();i++){
            if(p[i]!=s[k+i]){
                f=0;
                
            break;
            }
        }
        if(f==1){cout<<k<<endl;return 0;}
    }
    cout<<-1<<endl;
    return 0;
    
    
}