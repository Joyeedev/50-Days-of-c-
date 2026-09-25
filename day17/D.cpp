#include<bits/stdc++.h>//https://vjudge.net/contest/547775#problem/D
using namespace std;
#define IOS ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define ll long long int
#define rep(i,a,b) for(ll i=a;i<b;i++)
#define all(x) x.begin(),x.end()
#define rall(x) x.rbegin(),x.rend()
const int MAXN = 10000000;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    vector<bool> prime(MAXN, true);

    prime[0] = prime[1] = false;

    for (int i = 2; 1LL * i * i < MAXN; i++) {
        if (prime[i]) {
            for (int j = i * i; j < MAXN; j += i) {
                prime[j] = false;
            }
        }
    }

    vector<int> anagrammatic;

    function<void(string)> generate = [&](string s) {
        if (!s.empty()) {
            int x = stoi(s);

            if (prime[x]) {
                string t = s;
                sort(t.begin(), t.end());

                bool ok = true;

                do {
                    int y = stoi(t);

                    if (!prime[y]) {
                        ok = false;
                        break;
                    }

                } while (next_permutation(t.begin(), t.end()));

                if (ok)
                    anagrammatic.push_back(x);
            }
        }

        if (s.size() == 7)
            return;

        for (char c : {'1', '3', '7', '9'}) {
            generate(s + c);
        }
    };

    generate("");

    sort(anagrammatic.begin(), anagrammatic.end());

    int n;

    while (cin >> n && n != 0) {

        auto it = upper_bound(
            anagrammatic.begin(),
            anagrammatic.end(),
            n
        );
        int limit = 1;
        while (limit <= n)
            limit *= 10;

        if (it != anagrammatic.end() && *it < limit)
            cout << *it << '\n';
        else
            cout << 0 << '\n';
    }

    return 0;
    
}
    
