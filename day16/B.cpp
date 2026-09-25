#include <bits/stdc++.h>//https://vjudge.net/contest/849309#problem/A
using namespace std;
#define IOS ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define ll long long
int main() {
    ll n;
    while(cin>>n){
        ll rem=1%n;
        ll digit=1;
        for(ll i=1;rem!=0;i++){
            rem=(rem*10+1)%n;
            digit++;
        }
        cout<<digit<<endl;
    }
    return 0;
}
