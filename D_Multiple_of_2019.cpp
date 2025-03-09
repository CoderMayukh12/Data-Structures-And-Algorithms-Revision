#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'
#define fast                      \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
#define mod 1000000007
int power(int a, int b, int MOD)
{
    int response = 1;
    a = a % MOD; // Ensure a is reduced modulo MOD initially
    while (b > 0)
    {
        if (b & 1)
        { // If the current bit of b is 1
            response = (1LL * response * a) % MOD;
        }
        a = (1LL * a * a) % MOD; // Square a and take modulo MOD
        b = b >> 1;              // Shift b to the right (divide by 2)
    }
    return response; // Return the result
}
int32_t main()
{
    fast

        string s;
    cin >> s;
    int n = s.size();
    vector<int> dp(n + 1, 0);
    int ans = 0;
    int ten = 1;
    int sum = 0;
    dp[0] = 1;
    for (int i = 0; i < n; i++)
    {
        sum = (sum + (s[n - i - 1] - '0') * ten) % 2019;
        ten = (ten * 10) % 2019;
        ans += dp[sum];
        dp[sum]++;
    }
    cout << ans << endl;

    return 0;
}