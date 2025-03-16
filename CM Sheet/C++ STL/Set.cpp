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
        set<int>
            s;
    int q;
    cin >> q;
    while (q--)
    {
        string operation;
        cin >> operation;
        if (operation == "insert")
        {
            int x;
            cin >> x;
            s.insert(x);
        }
        else if (operation == "find")
        {
            int x;
            cin >> x;
            if (s.find(x) != s.end())
            {
                cout << "found" << endl;
            }
            else
            {
                cout << "not found" << endl;
            }
        }
        else if (operation == "upper_bound")
        {
            int x;
            cin >> x;
            auto lb = s.upper_bound(x);
            if (lb == s.end())
            {
                cout << "-1" << endl;
            }
            else
            {
                cout << *lb << endl;
            }
        }
        else
        {
            int x;
            cin >> x;
            auto lb = s.lower_bound(x);
            if (lb == s.end())
            {
                cout << "-1" << endl;
            }
            else
            {
                cout << *lb << endl;
            }
        }
    }
    return 0;
}