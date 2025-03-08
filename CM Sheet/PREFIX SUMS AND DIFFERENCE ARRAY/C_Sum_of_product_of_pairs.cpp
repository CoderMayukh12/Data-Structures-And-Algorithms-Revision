#include <bits/stdc++.h>
using namespace std;
#define int long long
#define MOD 1000000007

int32_t main()
{
    int N;
    cin >> N;
    vector<int> nums(N);

    for (int i = 0; i < N; i++)
    {
        cin >> nums[i];
    }
    vector<int> arr = nums;
    for (int i = 1; i < N; i++)
    {
        arr[i] = (arr[i] + arr[i - 1]) % MOD;
    }

    int sum = 0;
    for (int i = 0; i < N; i++)
    {
        int element = nums[i];
        int contribution = (arr[N - 1] - arr[i] + MOD) % MOD;
        sum = (sum + (element * contribution) % MOD) % MOD;
    }

    cout << sum << endl;
    return 0;
}
