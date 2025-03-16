#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'
#define fast                      \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
#define mod 1000000007

bool binarySearch(vector<int> &arr, int target)
{
    int left = 0, right = arr.size() - 1;
    while (left <= right)
    {
        int mid = left + (right - left) / 2;
        if (arr[mid] == target)
        {
            return true;
        }
        else if (arr[mid] < target)
        {
            left = mid + 1;
        }
        else
        {
            right = mid - 1;
        }
    }
    return false;
}
int32_t main()
{
    fast;
    int n, q;
    cin >> n >> q;

    vector<int> arr(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    sort(arr.begin(), arr.end());
    while (q--)
    {
        string s;
        cin >> s;
        if (s == "lower_bound")
        {
            int x;
            cin >> x;
            auto it = lower_bound(arr.begin(), arr.end(), x);
            if (it == arr.end())
            {
                cout << -1 << endl;
            }
            else
            {
                cout << *it << endl;
            }
        }
        else if (s == "upper_bound")
        {
            int x;
            cin >> x;
            auto it = upper_bound(arr.begin(), arr.end(), x);
            if (it == arr.end())
            {
                cout << -1 << endl;
            }
            else
            {
                cout << *it << endl;
            }
        }
        else
        {
            int x;
            cin >> x;
            if (binarySearch(arr, x))
            {
                cout << "found" << endl;
            }
            else
                cout << "not found" << endl;
        }
    }

    return 0;
}