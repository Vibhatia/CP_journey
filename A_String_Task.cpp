#include<bits/stdc++.h>
using namespace std;
#define gc getchar_unlocked
#define pb push_back
#define fo(i,n) for(int i=0;i<n;i++)
#define Fo(i,k,n) for(i=k;k<n?i<n:i>n;k<n?i+=1:i-=1)
#define ll long long
#define all(x) x.begin(), x.end()
#define rall x.rbegin(), x.rend()
#define clr(x) memset(x, 0, sizeof(x))
#define sortall(x) sort(all(x))
#define sortrall(x) sort(rall(x))
#define PI 3.1415926535897932384626
typedef pair<int, int>	pii;
typedef vector<int>		vi;
typedef vector<pii>		vpii;
typedef vector<vi>		vvi;
//=======================
const int MOD = 1000000007;
const int N = 2e6+13, M = N;
//=======================
vi g[N];
int a[N];
int n, m, k;
//=======================

void solve() 
{
 string s;
 cin>>s;
 for(int i=0;i<s.length();i++){
     s[i] = tolower(s[i]);
 }

 for(int i=0;i<s.length();i++){
     if(s[i]=='a' || s[i]=='e' || s[i]=='i' ||   s[i]=='o'  || s[i]=='u' ||s[i]=='y'){
        s.erase(i,1);
        i=i-1;
     }
 }
 string p;
//  for(int i=0;i<s.length();i++){
//      cout<<s[i];
//  }
 for(int i=0;i<s.length();i++){
      if(s[i]!='a' || s[i]!='e' || s[i]!='i' ||   s[i]!='o'  || s[i]!='u' ||s[i]!='y' ){
          p.push_back('.');
          p.push_back(s[i]);

 }
 }
 for(int i=0;i<p.length();i++){
     cout<<p[i];
 }

}

int main() {
    ios_base::sync_with_stdio(0), cin.tie(0);
    int t = 1;
    // cin >> t;
    while(t--) {
      solve();
    }

    return 0;
}