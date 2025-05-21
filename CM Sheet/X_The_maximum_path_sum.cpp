#include <bits/stdc++.h>
using namespace std;

#define int long long

int n, m;
int maxPathSum(int i, int j, vector<vector<int>> arr)
{
    // Base Case Condition
    if (i == n - 1 && j == m - 1)
        return arr[i][j];
    if (i > n - 1 || j > m - 1)
        return LONG_LONG_MIN;
    return arr[i][j] + max(maxPathSum(i + 1, j, arr), maxPathSum(i, j + 1, arr));
}
signed main()
{

    cin >> n >> m;

    vector<vector<int>> arr(n, vector<int>(m, 0));

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> arr[i][j];
        }
    }

    cout << maxPathSum(0, 0, arr) << endl;

    return 0;
}