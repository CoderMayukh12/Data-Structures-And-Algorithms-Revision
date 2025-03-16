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

    vector<int> diff(n + 1, 0); // Difference array

    while (q--)
    {
        int L, R, val;
        cin >> L >> R >> val;
        L--, R--;
        diff[L] += val;
        if (R + 1 < n)
            diff[R + 1] -= val;
    }

    // Apply prefix sum to get final array values
    for (int i = 1; i < n; i++)
        diff[i] += diff[i - 1];

    for (int i = 0; i < n; i++)
        arr[i] += diff[i];

    for (int x : arr)
        cout << x << " ";
    return 0;
}
