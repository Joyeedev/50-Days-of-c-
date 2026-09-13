#include <bits/stdc++.h>//https://codeforces.com/contest/318/submission/388749464
using namespace std;
#define IOS ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define ll long long int
#define rep(i,a,b) for(ll i=a;i<b;i++)
#define all(x) x.begin(),x.end()
#define rall(x) x.rbegin(),x.rend()

int main(){
    
        
    ll a, b;
    cin >> a >> b;

    ll oddCount = (a + 1) / 2;

    if (b <= oddCount) {
        cout << 2 * b - 1 << endl;
    }
    else {
        cout << 2 * (b - oddCount) << endl;
    }

    return 0;
}