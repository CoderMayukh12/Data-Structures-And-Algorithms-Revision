#include <bits/stdc++.h>
using namespace std;
#define int long long

vector<int> weights, values;
int knapsack(int n, int w)
{
    if (n == 0 || w == 0)
        return 0;
    if (weights[n - 1] > w)
        return knapsack(n - 1, w);
    return max(knapsack(n - 1, w), knapsack(n - 1, w - weights[n - 1]) + values[n - 1]);
}
signed main()
{
    int n, w;
    cin >> n >> w;
    weights.resize(n);
    values.resize(n);
    for (int i = 0; i < n; i++)
    {
        cin >> weights[i] >> values[i];
    }
    cout << knapsack(n, w) << endl;
    return 0;
}