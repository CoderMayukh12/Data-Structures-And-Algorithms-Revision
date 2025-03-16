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
    fast int n, q;
    cin >> n >> q;
    vector<int> arr(n);
    for (int &x : arr)
        cin >> x;
    while (q--)
    {
        string s;
        cin >> s;
        if (s == "pop_back")
        {
            arr.pop_back();
        }
        else if (s == "front")
        {
            cout << arr[0] << endl;
        }
        else if (s == "back")
        {
            cout << arr.back() << endl;
        }
        else if (s == "sort")
        {
            int l, r;
            cin >> l >> r;
            l--, r--;
            sort(arr.begin() + l, arr.begin() + r + 1);
        }
        else if (s == "reverse")
        {
            int l, r;
            cin >> l >> r;
            l--, r--;
            while (l <= r)
            {
                swap(arr[l], arr[r]);
                l++, r--;
            }
        }
        else if (s == "print")
        {
            int pos;
            cin >> pos;
            pos--;
            cout << arr[pos] << endl;
        }
        else if (s == "push_back")
        {
            int x;
            cin >> x;
            arr.push_back(x);
        }
    }

    return 0;
}