#include <bits/stdc++.h>
using namespace std;
#define gc getchar_unlocked
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
    int n, zero = 0, five = 0;
    cin >> n;
    vector<int> v;
    for (int i = 0; i < n; i++)
    {
        int p;
        cin >> p;
        v.push_back(p);
        if (p == 0)
            zero++;
        else
            five++;
    }
    int sum = 5 * five;
    while (sum % 9 != 0)
    {
        sum -= 5;
        five--;
    }
    if (zero == 0)
    {
        cout << -1;
    }
    else if (five == 0)
        cout << 0;
    else
    {
        for (int i = 0; i < five; i++)
        {
            cout << 5;
        }
        for (int i = 0; i < zero; i++)
        {
            cout << 0;
        }
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