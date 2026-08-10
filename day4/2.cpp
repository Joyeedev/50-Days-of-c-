#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define rep(i,a,b) for(ll i=a;i<b;i++)
void solve(){
    string s;cin>>s;
    if(s.length()<=10)cout<<s<<endl;
    else{
        cout<<s[0]<<s.length()-2<<s[s.length()-1]<<endl;
    }

   
}
int main(){
      ll t;cin>>t;
      while(t--){
        solve();}
   return 0; 
}