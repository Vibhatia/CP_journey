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
    int n, m;
    cin >> n >> m;
    if (n == 1 || m == 1)
    {
        cout << 1 << " " << 1 << "\n";
        return;
    }
    vvi v;
    int ele;
    vector<vector<char>> vc;
    for (int i = 0; i < n; i++)
    {
        vi temp;
        for (int j = 0; j < m; j++)
        {
            cin >> ele;
            temp.pb(ele);
        }
        v.pb(temp);
    }
    for (int i = 0; i < n; i++)
    {
        vector<char> vec;
        for (int j = 0; j < m - 1; j++)
        {
            if (v[i][j] < v[i][j + 1])
                vec.pb('i');
            else if (v[i][j] > v[i][j + 1])
                vec.pb('d');
            else
            {
                vec.push_back('e');
            }
        }

        vc.pb(vec);
    }
    vector<int> c;
    int p = 0, q = 0, z = 0;
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (vc[j][i] == 'd')
                p = 1;
            else if (vc[j][i] == 'i')
                q = 1;

            if (p == 1 && q == 1)
            {
                cout << -1 << "\n";

                return;
            }
        }
        if (q == 0)
        {
            z++;
            c.pb(i + 1);
        }
        p = 0;
        q = 0;
    }

    if (z > 3)
        cout << -1 << endl;
    else
    {
        cout << c[0] << " " << c[1] << endl;
    }
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