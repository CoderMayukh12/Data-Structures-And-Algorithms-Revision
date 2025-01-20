#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    long long minCost(vector<int> &arr, vector<int> &brr, long long k)
    {
        long long ans = LLONG_MAX;
        int n = arr.size();
        long long temp1 = 0;
        for (int i = 0; i < n; i++)
        {
            temp1 += abs(arr[i] - brr[i]);
        }
        sort(arr.begin(), arr.end());
        sort(brr.begin(), brr.end());
        long long temp2 = 0;
        for (int i = 0; i < n; i++)
        {
            temp2 += abs(arr[i] - brr[i]);
        }
        ans = min(temp1, temp2 + k);
        return ans;
    }
};
int main()
{
    return 0;
}