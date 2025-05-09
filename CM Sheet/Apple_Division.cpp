#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'
#define fast                      \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
#define mod 1000000007
int differ(int i, int sum1, int sum2, vector<int> &arr)
{
    if (i == arr.size())
    {
        return abs(sum1 - sum2);
    }
    return min(differ(i + 1, sum1 + arr[i], sum2, arr), differ(i + 1, sum1, sum2 + arr[i], arr));
}

int32_t main()
{
    fast;
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int &x : arr)
    {
        cin >> x;
    }
    cout << differ(0, 0, 0, arr) << endl;
    return 0;
}