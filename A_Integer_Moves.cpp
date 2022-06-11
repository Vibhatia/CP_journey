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
void solve()
{
    int x,y;
    cin>>x>>y;
    if(x==0 && y==0){
    cout<<0<<endl;
    return;
    }
    double c=sqrt(pow(x,2) + pow(y,2));
    int d=c;
    if(d==c){
    cout<<1<<endl;
    
    }
    else{
        cout<<2<<endl;
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