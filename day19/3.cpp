
#include <bits/stdc++.h>//https://codeforces.com/problemset/problem/6/A
using namespace std;
#define ll long long
bool tr(ll a,ll b,ll c){
    return (a+b>c && a+c>b && b+c>a);
}
bool seg(ll a,ll b,ll c){
    return (a+b==c || a+c==b || b+c==a);
}
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    ll a,b,c,d;cin>>a>>b>>c>>d;
    if(tr(a,b,c) || tr(a,b,d) || tr(a,c,d) || tr(b,c,d)){
        cout<<"TRIANGLE";
    }else if(seg(a,b,c) || seg(a,b,d) || seg(a,c,d) || seg(b,c,d)){
        cout<<"SEGMENT";
    }else{
        cout<<"IMPOSSIBLE";
    
}
}