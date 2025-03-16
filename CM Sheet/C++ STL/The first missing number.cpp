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
    fast

        int n,
        m;
    cin >> n >> m;
    vector<int> arr(2 * m + 1, 0);
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        arr[x + m]++;
    }
    for (int i = 0; i < arr.size(); i++)
    {

        if (arr[i] == 0)
        {
            cout << i - m << endl;
            return 0;
        }
    }

    return 0;
}