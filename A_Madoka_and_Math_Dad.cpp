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

void solve()
{
  int n;
  cin >> n;
  string s;
  string t;
  int p=n;
  while(n>=1){
     n=n-1;
     s.pb('1');
     if(n>=2)
     {
       n=n-2;
       s.pb('2');
     }
     else
     break;

  }
    while(p>=2){
     
     
       p=p-2;
     t.pb('2');

     
     if(p>=1)
     {
       p=p-1;
       t.pb('1');
     }
     else
     break;

  }
  if(s.length()<=t.length())
  cout<<t<<endl;
  else
  cout<<s<<endl;  
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