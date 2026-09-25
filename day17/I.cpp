#include<bits/stdc++.h>//https://vjudge.net/contest/547775#problem/I
using namespace std;
#define IOS ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define ll long long int
#define rep(i,a,b) for(ll i=a;i<b;i++)
#define all(x) x.begin(),x.end()
#define rall(x) x.rbegin(),x.rend()
int main(){
    ll n;
    while(cin>>n&& n!=0){
        ll f=0;
        vector<bool>prime(n+1,true);
        prime[0]=prime[1]=false;
        for(ll i=2;i*i<=n;i++){
            if(prime[i]){
                for(ll j=i*i;j<=n;j+=i){
                    prime[j]=false;
                }
            }
        }
        for (ll i = 2; i <= n / 2; i++)
        { if (prime[i] && prime[n - i]) {
            cout << n << ":" << endl;
            cout << i << "+" << n - i << endl;
            f = 1;
            break;
        }
    }
        if(f==0){cout<<n<<":"<<endl;
        cout<<"NO WAY!"<<endl;}

    }
}