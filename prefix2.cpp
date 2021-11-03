	#include <bits/stdc++.h>
using namespace std;
#define int long long
#define nl "\n"
#define mod 1000000007
#define vvi vector<vector<int>>
#define vi vector<int>
#define all(v) v.begin(), v.end()
#define pii pair<int,int>
#define F first
#define S second
#define fast                          \
        ios_base::sync_with_stdio(false); \
        cin.tie(0);                       \
        cout.tie(0);
inline size_t key(int i, int j) {return (size_t) i << 32 | (unsigned int) j;}

void precompute() {
}
struct node
{
    int live, damage, index;
};
bool comp(node p1, node p2) {
    p1.damage > p2.damage;
}
void solve() {
    int n; cin >> n;
    vi a(n + 1, 0);
    vi cnt(n + 2, 0);
    vi ans(n + 2, 0);
    int q; cin >> q;
    while (q--) {
        int l, r; cin >> l >> r;
        cnt[l]++;
        cnt[r + 1]--;
        ans[r + 1] -= r - l + 1;
    }
    for (int i = 1; i <= n; i++) cnt[i] += cnt[i - 1];
    for (int i = 1; i <= n; i++) ans[i] += ans[i - 1] + cnt[i];
    int m; cin >> m;
    while (m--) {
        int x;
        cin >> x;
        cout << ans[x] << nl;
    }


}

int32_t main()
{
    fast
    int t = 1;
    //cin >> t;
    precompute();
    cout << setprecision(6) << fixed;
    for (int i = 1; i <= t; i++)
        solve();
}