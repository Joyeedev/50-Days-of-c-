#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    ios::sync_with_stdio(0);
    ll t;cin>>t;
    while(t--){
        ll n;cin>>n;
        string s;cin>>s;
        map<ll,bool> printed;
        for(ll i=0;i<n;i++){
            printed[i]=false;
        }
        vector<ll>memory;
        for(ll i=0;i<n;i++){
            ll doc=i+1;
            if(s[i]=='1'){
                memory.push_back(doc);
            }
            else if(s[i]=='2'){
                if(memory.size()>0){
                    ll x=memory.back();
                    memory.pop_back();
                    printed[x-1]=true;
                }
                else{
                    printed[doc-1]=true;
                }
            }
            else if(s[i]=='3'){
                printed[doc-1]=true;
            }
        }
        ll count=0;
        for(ll i=0;i<n;i++){
            if(printed[i]==false){
                count++;
            }
        }
        cout<<count<<endl;
        for(ll i=0;i<n;i++){
            if(printed[i]==false){
                cout<<i+1<<" ";
            }
        }
        cout<<endl;
    }
}