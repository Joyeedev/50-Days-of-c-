#include <bits/stdc++.h>//https://codeforces.com/problemset/problem/977/B?utm_source=chatgpt.com
using namespace std;
#define ll long long
int main(){
    ll n;cin>>n;
    string s;cin>>s;
    map<string,ll>sub;
    for(ll i=0;i<n-1;i++){
        string x=s.substr(i,2);
        sub[x]++; 
    }
    ll mx=0;string max_s;
    for(auto x:sub){
        if(x.second>mx){mx=x.second;
            max_s=x.first;
        }

    }
    cout<<max_s<<endl;
}