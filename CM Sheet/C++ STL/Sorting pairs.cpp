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
    int n;
    cin >> n;
    vector<pair<int, string>> arr(n);

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i].second >> arr[i].first;
    }

    sort(arr.begin(), arr.end(), [](auto &a, auto &b)
         {
             if (a.first == b.first) 
                 return a.second < b.second;
             return a.first > b.first; });

    for (auto x : arr)
    {
        cout << x.second << " " << x.first << endl;
    }

    return 0;
}
