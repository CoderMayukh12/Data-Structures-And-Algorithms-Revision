#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<pair<int, string>> v;
    map<string, int> mpp;
    vector<vector<int>> arr;
    for (int i = 0; i < n; i++)
    {
        string s;
        cin >> s;
        mpp[s] = i;
        int a, b, c, d;
        cin >> a >> b >> c >> d;
        v.push_back({a + b + c + d, s});
        arr.push_back({a, b, c, d});
    }
    sort(v.begin(), v.end(), [](auto &x, auto &y)
         {
        if(x.first==y.first)
        {
            return x.second<y.second;
        }
        return x.first>y.first; });
    for (auto x : v)
    {
        cout << x.second << " " << x.first << " ";
        for (auto y : arr[mpp[x.second]])
            cout << y << " ";
        cout << endl;
    }
}