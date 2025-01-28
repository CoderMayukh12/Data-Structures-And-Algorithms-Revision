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
    int n, q;
    cin >> n >> q;
    vector<int> arr(n, 0);
    for (int i = 0; i < n; i++)
    {

        cin >> arr[i];
    }
    set<int> st(arr.begin(), arr.end());
    while (q--)
    {
        int x;
        cin >> x;
        if (st.find(x) != st.end())
            cout << "found" << endl;
        else
            cout << "not found" << endl;
    }

    return 0;
}