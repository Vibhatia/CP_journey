#include <bits/stdc++.h>
using namespace std;
#define gc getchar_unlocked
#define pb push_back
#define fo(i, n) for (i = 0; i < n; i++)
#define Fo(i, k, n) for (i = k; k < n ? i < n : i > n; k < n ? i += 1 : i -= 1)
#define ll long long
#define all(x) x.begin(), x.end()
#define rall x.rbegin(), x.rend()
#define clr(x) memset(x, 0, sizeof(x))
#define sortall(x) sort(all(x))
#define sortrall(x) sort(rall(x))
#define PI 3.1415926535897932384626
typedef pair<int, int> pii;
typedef vector<int> vi;
typedef vector<pii> vpii;
typedef vector<vi> vvi;
//=======================
const int MOD = 1000000007;
const int N = 2e6 + 13, M = N;
//=======================
vi g[N];
int a[N];
int n, m, k;
//=======================

void solve()
{
    vpii v;
    bool entry = false;
    int n, m;
    cin >> n >> m;
    for (int i = 0; i < m; i++)
    {
        int x, y;
        cin >> x >> y;
        v.pb({x, y});
    }
    sort(v.begin(), v.end());
    int sum = n;
    for (int i = 0; i < m; i++)
    {
        if (v[i].first < sum)
        {
            sum += v[i].second;
        }
        else
        {
            entry = true;
            break;
        }
    }
    if (entry)
    {
        cout << "NO\n";
    }
    else
    {
        cout << "YES\n";
    }
}

int main()
{
    ios_base::sync_with_stdio(0), cin.tie(0);
    int t = 1;
    // cin >> t;
    while (t--)
    {
        solve();
    }

    return 0;
}