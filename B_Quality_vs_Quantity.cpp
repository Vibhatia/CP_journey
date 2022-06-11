#include <bits/stdc++.h>
using namespace std;

void solve()
{
    long long n, p;
    cin >> n;
    long long arr[n];
    long long sum = 0, sv = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        sum += arr[i];
    }
    sort(arr, arr + n, greater<int>());

    long long s = 0;
    long long e = n - 2;
    long long ev = arr[n - 1];
    while (s < e)
    {
        sv += arr[s];
        ev += arr[e];
        s++;
        e--;
        if (sv > ev)
        {
            cout << "YES";
            return;
        }
    }
    cout << "NO";
}

int main()
{
    ios_base::sync_with_stdio(0), cin.tie(0);
    int t = 1;
    cin >> t;
    while (t--)
    {
        solve();
        cout << endl;
    }

    return 0;
}