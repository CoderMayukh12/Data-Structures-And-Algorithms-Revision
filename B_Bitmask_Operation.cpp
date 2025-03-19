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
    fast int n, q;
    cin >> n >> q;
    while (q--)
    {
        int a, x;
        cin >> a >> x;

        if (a == 1)
        {

            if (n & (1 << x))
                cout << "1" << endl;
            else
                cout << "0" << endl;
        }
        else if (a == 2)
        {
            n = n | (1 << x);
            cout << n << endl;
        }
        else if (a == 3)
        {
            n &= ~(1 << x);
            cout << n << endl;
        }
        else if (a == 4)
        {
            n ^= (1 << x);
            cout << n << endl;
        }
    }

    return 0;
}