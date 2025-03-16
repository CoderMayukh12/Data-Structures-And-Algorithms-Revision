#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'
#define fast                      \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);

int32_t main()
{
    fast;
    int q, n;
    cin >> q >> n;
    while (q--)
    {
        int a;
        cin >> a;
        if (a == 1)
        {
            int b;
            cin >> b;
            n = n | b;
        }
        else if (a == 2)
        {
            int b;
            cin >> b;
            n = n & b;
        }
        else if (a == 3)
        {
            int b;
            cin >> b;
            n = n ^ b;
        }
        else if (a == 4)
        {
            n = ~n;
        }
        cout << n << endl;
    }
    return 0;
}
