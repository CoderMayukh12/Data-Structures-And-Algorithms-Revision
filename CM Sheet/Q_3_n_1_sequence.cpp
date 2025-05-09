#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'
#define fast                      \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
#define mod 1000000007

int sequence(int n)
{
    if (n == 1)
        return 1;
    if (n & 1)
        return 1 + sequence(3 * n + 1);
    return 1 + sequence(n / 2);
}
int32_t main()
{
    fast;
    int n;
    cin >> n;
    cout << sequence(n) << endl;
    return 0;
}