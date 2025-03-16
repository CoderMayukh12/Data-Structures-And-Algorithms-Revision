#include <bits/stdc++.h>
using namespace std;
#define int long long
int32_t main()
{
    int n, m, q;
    cin >> n >> m >> q;
    int x;

    vector<vector<int>> arr(n, vector<int>(m, 0));

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> arr[i][j];
        }
    }

    for (int j = 1; j < m; j++)
        arr[0][j] += arr[0][j - 1];
    for (int i = 1; i < n; i++)
        arr[i][0] += arr[i - 1][0];

    for (int i = 1; i < n; i++)
    {
        for (int j = 1; j < m; j++)
        {
            arr[i][j] += arr[i - 1][j] + arr[i][j - 1] - arr[i - 1][j - 1];
        }
    }

    while (q--)
    {
        int r1, c1, r2, c2;
        cin >> r1 >> c1 >> r2 >> c2;
        r1--, c1--, r2--, c2--;

        int total = arr[r2][c2];
        if (r1 > 0)
            total -= arr[r1 - 1][c2];
        if (c1 > 0)
            total -= arr[r2][c1 - 1];
        if (r1 > 0 && c1 > 0)
            total += arr[r1 - 1][c1 - 1];

        cout << total << endl;
    }

    return 0;
}
