#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define rep(i,a,b) for(int i=a;i<b;i++)
void solve(vector<ll>&v,ll n)
{
    int f=1;
    if(is_sorted(v.begin(),v.end())){
                    cout<<"yes"<<endl;
                    cout<<1<<" "<<1<<endl;
                   
                }
    else if(is_sorted(v.begin(),v.end(),greater<ll>())){
                    cout<<"yes"<<endl;
                    cout<<1<<" "<<n<<endl;
                   
                }
                else{
    rep(i,0,n-1){
        rep(j,i+1,n) {
            if(v[i]>v[j]){
                swap(v[i],v[j]);
                if(is_sorted(v.begin(),v.end())){
                    cout<<"yes"<<endl;
                    cout<<i+1<<" "<<j+1<<endl;
                    f=1;
                    break;
                }
                else{
                    swap(v[i],v[j]);
                    f=0;
                }

            }
        }   
    
}
}if(f==0)cout<<"no"<<endl;
}
int main(){
        ll n;cin>>n;
        vector<ll>v(n);
        rep(i,0,n)cin>>v[i];
        solve(v,n);
    
    return 0;
}
