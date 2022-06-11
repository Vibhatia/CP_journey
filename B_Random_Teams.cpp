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
ll factorial(int n,int k){
    ll p=1,q=1,r=1;
    for(int i=2;i<=n;i++){
        p*=i;
    }
     for(int i=2;i<=k;i++){
        q*=i;
    }
    for(int i=2;i<=(n-k);i++){
        r*=i;
    }
    return p/(q*r);


}

void solve()
{
    int n,m,p,q;
    cin>>n>>m;
    ll l;
    if(m==1){
        if(n==1){
            cout<<0<<" "<<0;
        }
        else if(n==2){
            cout<<1<<" "<<1;
        }
        else{
          l=  factorial(n,2);
          cout<<l<<" "<<l;
        }
    }
    else{
        p=n/m;
        q=n%m;
         
        if((p+q)==1){
            cout<<0<<" "<<0;
        }
        else if(p==1 && q==1){
            cout<<1<<" "<<1;
        }
        else{
            if(n%m==0){
                cout<<m*factorial(n/m,2)<<" ";
                cout<<factorial(n-m+1,2);
            }
            else{
          z=factorial(n/m + n%m,2);
          v=
          cout<<p<<" "<<factorial(n-m+1,2);
            }
        }
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