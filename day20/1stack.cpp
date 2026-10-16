#include <bits/stdc++.h>//https://vjudge.net/problem/EOlymp-6122
#include <stack>
using namespace std;
#define ll long long
void display(stack<ll> st){
    while(!st.empty()){
    cout<<st.top()<<endl;
    st.pop();
 }
}

int main(){
 stack<ll> st;
 string s;
 while(cin>>s){
   if(s=="push"){
      ll n;cin>>n;
      st.push(n);
      cout<<"ok"<<endl;
   }
   else if(s=="pop"){
      cout<<st.top()<<endl;
      st.pop();
      
   }
   else if(s=="back"){
      cout<<st.top()<<endl;
   }
   else if(s=="size"){
      cout<<st.size()<<endl;
   }
   else if(s=="clear"){
      while(!st.empty()){
         st.pop(); }
         cout<<"ok"<<endl;
      }
   else if(s=="exit"){
       cout<<"bye"<<endl;
       break;
   }
   
 }
 
}