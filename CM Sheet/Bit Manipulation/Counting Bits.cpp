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

int number_Of_Bits_upto_n(int n, int i)
{
    int total = 0;
    int number_Of_full_buckets = n / (1LL << i + 1);
    int number_of_Ones_from_full_buckets = number_Of_full_buckets * (1LL << i);
    int remaining_elements = n % (1LL << i + 1);
    int number_of_ones_from_remaining_elements = max(0LL, remaining_elements - (1LL << i));
    // remaining_elements-(1LL<<i) : refers the number of one's in the incomplete bucket
    total = number_of_Ones_from_full_buckets + number_of_ones_from_remaining_elements;
    return total;
}
int32_t main()
{
    fast;
    int n;
    cin >> n;
    int ans = 0;
    for (int i = 0; i < 60; i++)
    {
        ans += number_Of_Bits_upto_n(n + 1, i);
    }
    cout << ans;

    return 0;
}