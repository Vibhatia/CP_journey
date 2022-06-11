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
    string s,t;
    cin>>s>>t;
    map <char , int > m;
    map <char,int> mp;
    for(int i=0;i<s.length();i++){
        m[s[i]]++;
    }
    for(int j=0;j<t.length();j++){
        mp[t[j]]++;
    }
    for(int i=0;i<t.length();i++){
        for(int j=0;j<s.length();j++){
            if(s[i]==t[j]){
                // int a = m[s[i]] - mp[t[j]];
                // for(int i=0;i<s.length();i++){
                //     if(s[i]==t[j] && a!=0){
                //         s[i]='0';
                //         a--;
                 if(m[s[j]] != mp[t[i]]){
            m[s[j]]=m[s[j]]-1;
               s[j]='0';
              // mp[s1[l]]=mp[s1[l]]-1;
            }
                }
                }
            }
        
    int j =0;

    for(int i =0;i<s.length();i++){
        if(s[i] == t[j]){
            j++;
        }
    }
    if(j==t.length()){
        cout<<"YES\n";
    }
    else{
        cout<<"NO\n";
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