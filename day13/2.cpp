#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
   ll s,n;cin>>s>>n;
   vector<pair<ll,ll>>x;
   for(ll i=0;i<n;i++){
    ll x1,y1;cin>>x1>>y1;
    x.push_back({x1,y1});
   }
   sort(x.begin(),x.end());
   ll f=1;
   for(ll i=0;i<n;i++){
    
    if(s>x[i].first){
        s+=x[i].second;
    }
    else {
        f=0;
        cout<<"NO"<<endl;
        break;
    }
    
   }
   if(f==1)cout<<"YES"<<endl;
   
   

}
