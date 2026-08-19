#include <bits/stdc++.h>
using namespace std;
#define IOS ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define ll long long int
#define rep(i,a,b) for(ll i=a;i<b;i++)
#define all(x) x.begin(),x.end()
#define rall(x) x.rbegin(),x.rend()
int main(){
    ll t;cin>>t;while(t--){
    ll n,m;cin>>n>>m;
    set<char>a,b;
    for(ll i=0;i<n;i++){
        string s;cin>>s;
        a.insert(toupper(s[0]));
    }
    for(ll i=0;i<m;i++){
        string s;cin>>s;
        for(char ch:s){

         b.insert(ch);}
    }
    ll f=0;
    for(auto ch:b){
        if(a.count(ch)==0){
            f=0;
            break;
        }
        else{
            f=1;
        }
    }
    if(f==0)cout<<"NO"<<endl;
    else cout<<"YES"<<endl;
}


    


    
    
}