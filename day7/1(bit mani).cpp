#include<bits/stdc++.h>//https://codeforces.com/contest/579/problem/A
using namespace std;
#define ll long long
int main(){
    
  ll n;cin>>n;
    
  ll count=0;
  while(n>1){
    if(n&1)count++;
    n=n>>1;
  }
  if(n==1)count++;
  cout<<count<<endl;
    return 0;
}
