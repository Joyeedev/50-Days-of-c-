#include<bits/stdc++.h>//https://atcoder.jp/contests/abc328/tasks/abc328_d
using namespace std;
#include<stack>
#define ll long long
 void isValid(string s) {
        
    }
int main(){
     string s,ans;cin>>s;

     for(char c:s){
        ans.push_back(c);
        ll n=ans.length();
        if(n>=3&&ans[n-3]=='A'&&ans[n-2]=='B'&&ans[n-1]=='C'){
            ans.resize(n-3);
        }
     }
     cout<<ans<<endl;
    }