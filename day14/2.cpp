#include <bits/stdc++.h>//https://codeforces.com/problemset/problem/868/A?utm_source=chatgpt.com
using namespace std;
#define ll long long
int main() {
    string s;cin>>s;
    ll n;cin>>n;
    vector<string>v(n);
    for(ll i=0;i<n;i++){
        cin>>v[i];
    }
     for(ll i=0;i<n;i++){
        if(v[i]==s){
            cout<<"YES"<<endl;
            return 0;
        }
        for(ll j=0;j<n;j++){
        if(s[1]==v[j][0]&&s[0]==v[i][1]){
        cout<<"YES"<<endl;
        return 0;
        }

    }}
    cout<<"NO"<<endl;
    return 0;
}