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
    int n;
    cin>>n;
    string s,t,s1,t1,sc,sa,tc,ta;
    cin>>s>>t;
    //Insering a and c in string
    fo(i,n){
        if(s[i]!='b'){
            s1.pb(s[i]);
        }
        if(t[i]!='b'){
            t1.pb(t[i]);
        }
    }
    //checking the relative position of a and c as their is no relation between a and c
    if(s1!=t1){
        cout<<"NO\n";
        return;
    }
    //Putting the location of c in string
    fo(i,n){
        if(s[i]=='c'){
            sc.pb(i);
        }
         if(t[i]=='c'){
            tc.pb(i);
        }

    }
    //Checking the index of c in two above strings as  c should come in s after c in t correspondingly 
    for(int i = 0;i<sc.length();i++){
        if(sc[i] < tc[i])
        {
            cout<<"NO\n";
            return;
        }

    }

     fo(i,n){
        if(s[i]=='a'){
            sa.pb(i);
        }
        if(t[i]=='a'){
            ta.pb(i);
        }
        
    }
     //Checking the index of c in two above strings as  a should come in s before a in t correspondingly 
    for(int i=0;i<sa.length();i++){
       if (sa[i]>ta[i]){
        cout<<"NO\n";
        return;
       }
    }
    // If all fails then return true
    cout<<"YES\n";
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