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
    // string s;
    // int n;
    // cin>>n;
    // bool entry=false;
    // cin>>s;
    // int index=0;
    // char a[26]={0};
    // for(int i=0;i<s.length();i++){
    //     index=s[i]-'a';
    //     a[index]++;
    // }
    // for(int i=0;i<26;i++){
    //     if(a[i]>0){
    //         if(a[i]%n!=0){
    //             cout<<-1;
    //             entry = true;
    //             break;
    //         }
    //     }
    // }

    // if(!entry){
    //     for(int i=0;i<n;i++){
    //         for(int j=0;j<26;j++){
    //             if(a[j]>0){
    //             char ch='a'+j;
    //             cout<<ch;
    //             }
    //         }
    //     }
    // }
    int n;
    cin >> n;
    string str;
    cin >> str;
    map<char, int> mp;
    for (int i = 0; i < str.length(); i++)
    {
        mp[str[i]]++;
    }
    for (auto it : mp)
    {
        if (it.second % n!=0)
        {
            cout << -1;
            return;
        }
    }
    for (int i = 0; i < n; i++)
    {
        for (auto it : mp)
        {
            for(int i=1;i<=it.second/n;i++){
            cout << it.first;
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