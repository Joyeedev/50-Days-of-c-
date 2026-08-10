#include<bits/stdc++.h>
using namespace std;
void fibonacci( long long n){
    vector<long long> arr;
    for(long long i=0;i<=n;i++){
        if(i==0)arr.push_back(0);
        else if(i==1)arr.push_back(1);
        else{
            arr.push_back(arr[i-1]+arr[i-2]);
        }
    }
    for(long long i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}

int main(){
    long long n;cin>>n;
    fibonacci(n);

}