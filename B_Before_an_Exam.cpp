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
    int n,sum,ls=0,hs=0;
    cin>>n>>sum;
    int a[50],b[50];
    for(int i=0;i<n;i++){
        cin>>a[i];
        cin>>b[i];
        ls+=a[i];
        hs+=b[i];
    }
    if(ls<=sum && hs>=sum){
        cout<<"YES\n";
            if(sum>ls){
                for(int i=0;i<n;i++){
                    int j=b[i]-a[i];
                    for(int k=1;k<=j;k++){
                        if(sum==ls){
                            break;
                        }
                            a[i]++;
                            ls++;
                            
                        
                    }
                }
            }
            fo(i,n)
            cout<<a[i]<<" ";
            
    }
    else{
        cout<<"NO\n";
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