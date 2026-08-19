#include<bits/stdc++.h>//https://codeforces.com/problemset/problem/912/B
using namespace std;
#define ll long long
int main(){
     ll n, k;
    cin >> n >> k;

    if (k == 1) {
        cout << n << endl;
    } 
    else {
        ll p = 1;

        while ((p << 1) <= n)//p*2<=b left shift
            p <<= 1;//p*2

        cout << 2 * p - 1 << endl;
    }

}
