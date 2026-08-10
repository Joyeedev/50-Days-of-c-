#include<bits/stdc++.h>//https://codeforces.com/contest/652/problem/B
using namespace std;
#define ll long long
void BubbleSort(ll arr[], ll n){
    int flag =0;
    for(ll i=0;i<n-1;i++){
        for(ll j=0;j<n-1-i;j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
                
            }
        }
    }
}
void zsort(ll arr[], ll n){
    BubbleSort(arr,n);
    for(ll i=1;i<n-1;i+=2){
        if(arr[i]<arr[i+1])swap(arr[i],arr[i+1]);
    }
    for(ll i=0;i<n;i++)cout<<arr[i]<<" ";

}
int main(){
    ll n;cin>>n;
    ll a[n];
    for(ll i=0;i<n;i++){
        cin>>a[i];
    }
    zsort(a,n);
}