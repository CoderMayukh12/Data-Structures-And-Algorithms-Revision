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
        stack<int>
            s;
    int q;
    cin >> q;
    while (q--)
    {
        string operation;
        cin >> operation;
        if (operation == "push")
        {
            int x;
            cin >> x;
            s.push(x);
        }
        else if (operation == "pop")
        {
            s.pop();
        }
        else
        {
            cout << s.top() << endl;
        }
    }
    return 0;
}