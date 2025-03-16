#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    vector<int> arr(n);

    for (int &x : arr)
        cin >> x;

    sort(arr.begin(), arr.end());

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " \n"[i == n - 1]; // Smart space handling
    }

    return 0;
}
