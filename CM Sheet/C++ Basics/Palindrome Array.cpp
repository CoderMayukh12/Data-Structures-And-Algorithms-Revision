
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> arr(n, 0);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int i = 0, j = n - 1;
    while (i <= j)
    {
        if (arr[i] != arr[j])
        {
            cout << "NO" << endl;
            return 0;
        }
        else
            i++, j--;
    }
    cout << "YES" << endl;

    return 0;
}