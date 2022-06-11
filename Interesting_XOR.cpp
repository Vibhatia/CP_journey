#include <bits/stdc++.h>
using namespace std;
#define gc getchar_unlocked
#define pb push_back
// #define int long long
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
  cin>>n;
  int a = n;
  string s,p;
  long long ansi=0,ans =0;
  while(a>1){
    int bit = a&1;
    if(bit ==1){
      s.pb('0');
      p.pb('1');
    }
    else{
      s.pb('1');
      p.pb('1');
    }
    a = a>>1;
    
  }
  s.pb('1');
  p.pb('0');
  
    reverse(s.begin(), s.end());
    reverse(p.begin(), p.end());

  // cout<<s<<" "<<p<<endl;
  int q = s.length();
  int w = p.length();
  for(int i=0;i<q;i++){
      if(s[i]=='1'){
        ans+=power(2,q-1-i);
      }
  }
  for(int i=0;i<w;i++){
      if(p[i]=='1'){
        ansi+=power(2,w-1-i);
      }
  }
  cout<<ans*ansi<<endl;

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