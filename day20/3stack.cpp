#include<bits/stdc++.h>//https://vjudge.net/problem/HackerRank-ctci-balanced-brackets
using namespace std;
#include<stack>
#define ll long long
 void isValid(string s) {
        stack<char> st;
        for(ll i =0;i<s.length();i++){
            if(s[i]=='('||s[i]=='['||s[i]=='{'){
                st.push(s[i]);
            }
            
             else if(s[i]==')'||s[i]==']'||s[i]=='}'){
                if(st.empty()){
                    cout<<"NO"<<endl;return;
                }
                else if((s[i]==')'&&st.top()=='(')
                ||(s[i]==']'&&st.top()=='[')||
                (s[i]=='}'&&st.top()=='{')
                ){
                    st.pop();
                }
                else { cout<<"NO"<<endl ;return;}
            }
        
            else {cout<<"NO"<<endl;return;}
        }
        if(st.empty()){
        cout<<"YES"<<endl;}
        else {
            cout<<"NO"<<endl;
        }
    }
int main(){
   ll t;cin>>t;
   while(t--){
    string s;cin>>s;
    isValid(s);
   }
}