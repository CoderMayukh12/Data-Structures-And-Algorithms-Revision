// 1
//  x
//  : add x in the array
// 2 x
//  : print the number of occurrence of x in the array
#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'
#define fast                      \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
#define mod 1000000007
int32_t main()
{
    fast

        int n,
        q;
    cin >> n >> q;
    vector<int> v(n + 1, 0);
    while (q--)
    {
        int x, y;
        cin >> x >> y;
        if (x == 1)
        {
            v[y]++;
        }
        else if (x == 2)
        {
            cout << v[y] << endl;
        }
    }
    return 0;
}