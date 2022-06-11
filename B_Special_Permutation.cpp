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
    int a,b,c;
    cin>>a>>b>>c;
    int arr[a+1],brr[a+1];
    arr[0]=0,brr[0]=0;
    for(int i=1;i<=a;i++){
        arr[i]=i;
        brr[i]=a-i+1;
    }
    if(!((b<=a/2 && c>a/2) ||(c<=a/2 && b>a/2))){
        cout<<-1<<endl;
        return;
    }
    if(((1==c) || (a==b)) && (a!=2)){
      cout<<-1<<endl;
        return;
    }
    int q=b;
    int r = c;
    if(b<c){
        int i=1;
        int j= a/2 + 1;
        while(i<=a/2 && j<=a){
          if(i==b){
            i++;
          }
          else if(j==c){
            j++;
          }
          else{
            swap(arr[i],arr[j]);
            i++;j++;
          }
        }
    }
    else{
             int i=1;
        int j= a/2 + 1;
        while(i<=a/2 && j<=a){
          if(i==b){
            i++;
          }
          else if(j==c){
            j++;
          }
          else{
            swap(arr[i],arr[j]);
            i++;j++;
          }
        }
    }
    for(int i=1;i<=a;i++){
      cout<<arr[i]<<" ";
    }
    cout<<endl;

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