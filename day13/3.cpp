#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
   string s;cin>>s;
   ll f=1;string s1=s;
   if(islower(s[0])){
   for(ll i=1;i<s.size();i++){
    if(islower(s[i])){f=0;cout<<s<<endl;
    break;}}
    if(f==1){
        s[0]=toupper(s[0]);
        for(ll i=1;i<s.size();i++)
            s[i]=tolower(s[i]);
    cout<<s<<endl;
    }
   }
   else{
    for(ll i=0;i<s.size();i++){
        if(islower(s[i])){
            f=0;cout<<s1<<endl;break;
        }
        else{
            s[i]=tolower(s[i]);
        }}
        if(f==1)cout<<s<<endl;
        
    
   }
   
}
