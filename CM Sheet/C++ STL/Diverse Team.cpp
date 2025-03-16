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
    fast int n, k;
    cin >> n >> k;
    int x;
    int arr[101] = {0};
    int count = 0;

    for (int i = 1; i <= n; i++)
    {
        cin >> x;
        if (arr[x] == 0)
        {
            arr[x] = i;
            count++;
        }
    }
    vector<int> ans;
    if (k <= count)
    {
        cout << "YES" << endl;
        for (int i = 1; i <= 100; i++)
        {
            if (k == 0)
                break;
            if (arr[i] != 0)
            {
                ans.push_back(arr[i]);

                k--;
            }
        }
        sort(ans.begin(), ans.end());
        for (int i = 0; i < ans.size(); i++)
        {
            cout << ans[i] << " ";
        }
    }
    else
        cout << "NO" << endl;

    return 0;
}