#include <bits/stdc++.h>//https://codeforces.com/group/MWSDmqGsZm/contest/219856/problem/G
using namespace std;
#define ll long long int
#define rep(i,a,b) for(ll i=a;i<b;i++)
#define all(x) x.begin(),x.end()
#define rall(x) x.rbegin(),x.rend()
#define input(v) for(ll i=0;i<n;i++)cin>>a[i];
int main(){
    // ll t;cin>>t;
    string s;
    cin>>s;
    rep(i,0,s.length()){
        if(isupper(s[i]))s[i]=tolower(s[i]);
        else if(islower(s[i]))s[i]=toupper(s[i]);
        else if(s[i]==',')s[i]=' ';
        
    }
    cout<<s<<endl;


    return 0;
}