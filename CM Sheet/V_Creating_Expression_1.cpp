#include <bits/stdc++.h>
using namespace std;

#define int long long
#define endl '\n'
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
    int n, target;
    cin >> n >> target;
    arr.resize(n);
    for (int &x : arr)
        cin >> x;
    if (check(1, arr[0], n, target))
        cout << "YES" << endl;
    else
        cout << "NO" << endl;

    return 0;
}