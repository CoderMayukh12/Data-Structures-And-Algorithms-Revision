#include <bits/stdc++.h>
#include <iostream>
using namespace std;
bool isTrue(vector<vector<char>> arr, int x, int y)
{
    int row[] = {-1, -1, -1, 0, 0, 1, 1, 1};
    int col[] = {-1, 0, 1, -1, 1, -1, 0, 1};
    int n = arr.size(), m = arr[0].size();
    for (int i = 0; i < 8; i++)
    {
        int nrow = x + row[i];
        int ncol = y + col[i];
        if (nrow >= 0 && nrow < n && ncol >= 0 && ncol < m)
        {
            if (arr[nrow][ncol] != 'x')
                return false;
        }
    }
    return true;
}
int main()
{
    int n, m;
    cin >> n >> m;
    vector<vector<char>> arr(n, vector<char>(m, '.'));
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> arr[i][j];
        }
    }

    int x, y;
    cin >> x >> y;
    x--, y--;
    (isTrue(arr, x, y)) ? cout << "yes" : cout << "no";
    return 0;
}