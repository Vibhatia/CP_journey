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
    ll n;
    cin >> n;
    ll a[n], p = 0,z=0,w,r,y,u;
    
    // bool reverse=0;
    fo(i, n)
    {
        cin >> a[i];
    }
    
    // int k = 0, ans = 0, f = 0, s = 0;
    // bool reverse = false;
    // pair<int, int> pair;
    // for (int i = 0; i < n - 1; i++)
    // {
    //     if (a[i] > a[i + 1] && k == 0)
    //     {
    //         k++;
    //         ans++;
    //         f = i;
    //         reverse = 1;
    //     }
    //     // cout<<a[i]<<a[i+1]<<endl;
    //     if (a[i] < a[i + 1] && k != 0)
    //     {
    //         // cout<<"f="<<f<<a[i+1]<<endl;
    //         k = 0;
    //         if (a[f] > a[i + 1])
    //         {
    //             cout << "no";
    //             return;
    //         }
    //         s = i;
    //     }
    //     if(f>0)
    //     if(s==0)
    //     if(a[n-1]<a[f-1])
    //     {
    //         cout<<"no";
    //         return;
    //     }
    // }
    // if (ans > 1)
    // {
    //     cout << "no";
    //     return;
    // }
    // cout << "yes"
    //      << "\n";
    // if (!reverse)
    // {
    //     cout << 1 << " " << 1 << endl;
    //     return;
    // }
    // if (s == 0)
    //     cout << f+1 << " " << n;
    // else
    // {
    //     cout << f + 1 << " " << s + 1;
    // }
    fo(i,n-1){
        if(a[i]>a[i+1] && z<1 ){
            if(k==0){
                p=i;
                k++;
                w++;
                // reverse=1;
            }
            cout<<a[i]<<" ";
            m=i+1;
        }
        else if(a[i]<a[i+1] && w<1)
            {
                if(r==0){
                    y=i;
                    r++;
                    z++;
                }
                u=i+1;
        }
        

    }
    if((a[p]>a[m+1] && (m+1<=n-1)) || (a[m]<a[p-1] && p-1>=0)  ){
    cout<<"no\n";
    return;
    }
   
    else{
  
        
        cout<<"yes\n";
    cout<<p+1<<" "<<m+1;
        
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