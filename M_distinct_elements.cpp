#include <bits/stdc++.h>
using namespace std;
#define int long long
#define mod 1000000007
void solve()
{
    int n, q;
    cin >> n >> q;
    vector<int> arr(n);
    vector<int> brr;
    set<int> st;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        st.insert(arr[i]);
    }
    while (!st.empty())
    {
        brr.push_back(*st.begin());
        st.erase(st.begin());
    }
    while (q--)
    {
        int x;
        cin >> x;
        auto count1 = lower_bound(brr.begin(), brr.end(), x) - brr.begin();
        auto count2 = brr.end() - upper_bound(brr.begin(), brr.end(), x);
        cout << count1 << " " << count2 << endl;
    }
}
int32_t main()
{
    int test = 1;
    // cin>>test;
    while (test--)
    {
        solve();
    }
    return 0;
}
