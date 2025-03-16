#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'
#define fast                      \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
#define mod 1000000007

int32_t main()
{
    fast;
    int n, q;
    cin >> n >> q;
    vector<int> arr(n);
    for (int &x : arr)
        cin >> x;
    for (int i = 1; i < n; i++)
        arr[i] += arr[i - 1];

    while (q--)
    {
        int l, r;
        cin >> l >> r;
        l--, r--;
        int ans = arr[r];
        if (l - 1 >= 0)
            ans -= arr[l - 1];
        cout << ans << endl;
    }
    return 0;
}
