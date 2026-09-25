#include<bits/stdc++.h>//https://vjudge.net/contest/547775#problem/A
using namespace std;
#define IOS ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define ll long long int
#define rep(i,a,b) for(ll i=a;i<b;i++)
#define all(x) x.begin(),x.end()
#define rall(x) x.rbegin(),x.rend()
int main(){
     string s;

    while(cin>>s){
        int n=stoi(s.substr(2));
        int temp=n;
        int divisors=1;
        for(int p=2;p*p<=temp;p++) {
            if (temp%p==0) {
                int exponent=0;

                while (temp%p==0) {
                    temp/=p;
                    exponent++;
                }
                divisors*=(2*exponent+1);
            }
        }
         if (temp>1) {divisors *= 3;}

        cout<<(divisors+1)/2<<endl;
    }  }
