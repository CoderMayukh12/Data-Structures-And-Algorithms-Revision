#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'
#define fast                      \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
#define mod 1000000007
int combination(int n, int r)
{
    if (r == 2)
    {
        return n * (n - 1) / 2;
    }
    if (r == 1)
        return n;
    if (r == 0)
        return 1;
    return n / r * combination(n - 1, r - 1);
}

int32_t main()
{
    fast;
    int n, r;
    cin >> n >> r;
    cout << combination(n, r) << endl;
    return 0;
}