#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    ios::sync_with_stdio(false);
    ll t;
    cin>>t;
    while(t--){
        ll x0,y0,r;cin>>x0>>y0>>r;
        ll x,y;
        
        
        if(r==x0){
        x=0,y=y0;
       }
       else if(r==y0){
        x=x0,y=0;
       }
       else if(r==0){
        x=x0,y=y0;
       }
       else{
        x=x0-r,
        y=y0+sqrt(pow(r,2)-pow(x-x0,2));
       }
       
       cout<<x<<" "<<y<<"\n";
       
    }
}