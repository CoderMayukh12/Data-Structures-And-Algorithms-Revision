#include <bits/stdc++.h>
using namespace std;

int main()
{
    int N;
    cin >> N;
    vector<long long> A(N);
    vector<long long> prefix(N + 1, 0);

    for (int i = 0; i < N; i++)
    {
        cin >> A[i];
        prefix[i + 1] = prefix[i] + A[i];
    }

    long long total = prefix[N];
    long long minCost = LLONG_MAX;

    // Find the best split point
    for (int i = 1; i < N; i++)
    {
        long long leftSum = prefix[i];
        long long rightSum = total - leftSum;
        minCost = min(minCost, abs(leftSum - rightSum));
    }

    cout << minCost << endl;
}
