#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'
#define fast                      \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
#define mod 1000000007
vector<int> arr;
bool check(int i, int sum, int n, int target)
{
    if (i == n)
    {
        if (sum == target)
            return true;
        return false;
    }
    return check(i + 1, sum + arr[i], n, target) || check(i + 1, sum - arr[i], n, target);
}
int32_t main()
{
    fast;
    int n, target;
    cin >> n >> target;
    arr.resize(n);
    for (int &x : arr)
        cin >> x;
    if (check(0, 0, n, target))
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
    return 0;
}