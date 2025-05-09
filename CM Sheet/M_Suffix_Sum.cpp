#include <bits/stdc++.h>
using namespace std;
#define int long long
vector<int> arr;
int n;

int suffixSum(int i, int k)
{

    if (i == k)
        return 0;

    return arr[n - 1 - i] + suffixSum(i + 1, k);
}

signed main()
{
    int k;
    cin >> n >> k;

    arr.resize(n);

    for (int &x : arr)
    {
        cin >> x;
    }

    cout << suffixSum(0, k) << endl;

    return 0;
}