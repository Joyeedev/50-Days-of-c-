#include <bits/stdc++.h>//https://codeforces.com/problemset/problem/1151/A
using namespace std;
#define IOS ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define ll long long
int main(){
        IOS;
        ll t;cin>>t;
        while(t--){
            ll n;cin>>n;
            string s;cin>>s;
            string p=" ";
            string a="00",t="01",c="10",g="11";
            for(ll i=0;i<n-1;i+=2){
                if(s.substr(i,2)==a){
                    p+="A";
                }
                else if(s.substr(i,2)==t){p+="T";}
                else if(s.substr(i,2)==c){p+="C";}
                else {p+="G";}
            }
            cout<<p<<endl;
            
        }

    
    
    }
