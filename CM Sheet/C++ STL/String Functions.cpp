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
    fast;
    int n, q;
    cin >> n >> q;
    string s;
    cin >> s;

    while (q--)
    {
        string command;
        cin >> command;
        if (command == "pop_back")
        {
            s.pop_back();
        }
        else if (command == "front")
        {
            cout << s[0] << endl;
        }
        else if (command == "back")
        {
            cout << s.back() << endl;
        }
        else if (command == "sort")
        {
            int l, r;
            cin >> l >> r;
            l--, r--;
            sort(s.begin() + l, s.begin() + r + 1);
        }
        else if (command == "reverse")
        {
            int l, r;
            cin >> l >> r;
            l--, r--;
            reverse(s.begin() + l, s.begin() + r + 1);
        }
        else if (command == "print")
        {
            int pos;
            cin >> pos;
            pos--;
            cout << s[pos] << endl;
        }
        else if (command == "substr")
        {
            int l, r;
            cin >> l >> r;
            l--, r--;
            string ans = s.substr(l, r - l + 1);
            cout << ans << endl;
        }
        else if (command == "push_back")
        {
            char x;
            cin >> x;
            s.push_back(x);
        }
    }

    return 0;
}
