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
        if (i != 0)
            arr[i] += arr[i - 1];
    }
    int diff = INT_MAX;
    int total = arr[n - 1];
    for (int i = 0; i < n; i++)
    {
        int left = arr[i];
        int right = total - arr[i];
        diff = min(diff, abs(left - right));
    }
    cout << diff << endl;
    return 0;
}