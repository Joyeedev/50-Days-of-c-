#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define rep(i,a,b) for(ll i=a;i<b;i++)
void BubbleSort(vector<ll>& a, ll n){
    rep(k,0,n) cout<<a[k]<<" ";
    cout<<"\n";
    rep(i,0,n-1){
        rep(j,0,n-1-i){
            if(a[j]>a[j+1]){
                swap(a[j],a[j+1]);
                rep(k,0,n) cout<<a[k]<<" ";
                cout<<"\n";
            }
        }
    }
}
int main(){
    ll n;cin>>n;
    vector<ll>arr(n);
    rep(i,0,n)cin>>arr[i];
    BubbleSort(arr, n);
}