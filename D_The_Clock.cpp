#include <bits/stdc++.h>
using namespace std;
#define gc getchar_unlocked
#define pb push_back
#define int long long
#define endl "\n"
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
int binarysearch(vector<int> &nums, int first, int last, int search_num)
{
    int middle;
    if (last >= first)
    {
        middle = (first + last) / 2;
        if (nums[middle] == search_num)
        {
            return middle;
        }
        else if (nums[middle] < search_num)
        {
            return binarysearch(nums, middle + 1, last, search_num);
        }
        else
        {
            return binarysearch(nums, first, middle - 1, search_num);
        }
    }
    return -1;
}

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
uint32_t reverseBits(uint32_t n)
{
    int rev = 0;
    int bit = 0;
    for (int i = 0; i < 32; i++)
    {
        rev = rev << 1;
        bit = n & 1;
        rev = rev | bit;
        n = n >> 1;
    }
    return rev;
}
void print(vi v, int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << v[i] << " ";
    }
    cout << endl;
}
void solve()
{
    string s;
    cin >> s;
    int t, p = 0;
    cin >> t;
    int ml = t;
    int a = 1440 / t;
    string q, v;
    q.pb(s[3]);
    q.pb(s[4]);
    v.pb(s[0]);
    v.pb(s[1]);
    int f = stoi(v);
    int e = stoi(q);
reverse(v.begin(),v.end());
if(q==v)
p++;
    // set<int> l;
    // cout<<f<<endl;
    while (a--)
    {
        f += ml / 60;
        e += ml % 60;

        if (e >= 60)
        {
            f += 1;
            e = e % 60;
        }
        if (f > 23)
        {
            f = 0;
        }
        string yt = to_string(e);
        string re = to_string(f);
        if (yt.length() == 1)
        {
            char mno = yt[0];
            yt[0]='0';
            yt.pb(mno);
        }
        if (re.length() == 1)
        {
            char mn = re[0];
            re[0]='0';
            re.pb(mn);
        }
        // cout<<e<<endl;
        cout<<re<<" "<<yt<<endl;
        reverse(yt.begin(), yt.end());
        // cout<<yt<<" "<<re<<endl;

        if (yt == re)
        {
            p++;

            // cout << yt << endl;
        }
        //   cout<<<<" "<<e<<endl;
    }
    //    cout<<endl;
    // cout<<(p>16?16:p)<<endl;

}

signed main()
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