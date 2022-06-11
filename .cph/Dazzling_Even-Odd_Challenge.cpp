#include <bits/stdc++.h>
using namespace std;
#define gc getchar_unlocked
#define pb push_back
#define fo(i, n) for (int i = 0; i < n; i++)
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
ll power(int a, int b)
{
    if (b == 0)
        return 1;
    if (b == 1)
        return a;
    ll ans = power(a, b / 2);
    if (b & 1)
        return a * ans * ans;
    else
        return ans * ans;
}
int numSetBits(unsigned int A)
{
    int cnt = 0;
    while (A)
    {
        cnt++;
        A = A & A - 1;
    }
    return cnt;
}
int gcd(int a, int b)
{
    if (b == 0)
        return a;
    return gcd(b, a % b);
}
void solve()
{
    int n;
    cin >> n;
    vi v;
    int ele;
    fo(i, n)
    {
        cin >> ele;
        v.pb(ele);
    }
    vi o, e;
    sort(v.begin(), v.end());
    for (int i = 0; i < n; i++)
    {
        if (v[i] & 1)
        {
            o.pb(v[i]);
        }
        else
            e.pb(v[i]);
    }
    if (n / 2 == 1)
    {
        cout << "YES\n";
        return;
    }
    int od = o[1] - o[0];
    int ed = e[1] - e[0];

    for (int i = 0; i < n / 2 - 1; i++)
    {
        if (abs(o[i] - o[i + 1]) != od)
        {
            cout << "NO\n"
                 << o[i + 1];
            return;
        }
        if ((abs(e[i] - e[i + 1])) != ed)
        {
            cout << "NO\n";
            return;
        }
    }
    if (od == ed)
        cout << "YES\n";
    else
        cout << "NO\n";
}

int main()
{
    ios_base::sync_with_stdio(0), cin.tie(0);
    int t = 1;
    cin >> t;
    while (t--)
    {
        solve();
    }

    return 0;
}