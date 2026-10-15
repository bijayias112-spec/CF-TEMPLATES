
#include<bits/stdc++.h>
using namespace std;
#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;

#define int long long

mt19937_64 rng(chrono::steady_clock::now().time_since_epoch().count());

const string author = "iamboringman";
const string signature = "I am boring man, sold and got carried away.";

void solve() {

}

int32_t main() {
    auto begin = chrono::high_resolution_clock::now();

    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while(t--) {
        solve();
    }

    auto end = chrono::high_resolution_clock::now();
    auto elapsed = chrono::duration_cast<chrono::nanoseconds>(end - begin);

    cerr << "[" << author << "] " << signature << '\n';
    cerr << "Time measured: " << elapsed.count() * 1e-9 << " seconds.\n";

    return 0;
}
