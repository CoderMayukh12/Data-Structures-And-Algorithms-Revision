#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'
#define fast                      \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
#define mod 1000000007
class Solution
{
private:
    int atMostKDistinct(vector<int> &nums, int k)
    {

        int head = -1, tail = 0, distinct = 0, n = nums.size(), ans = 0;
        vector<int> count(n + 1, 0);
        while (tail < n)
        {
            while (head + 1 < n &&
                   distinct + (count[nums[head + 1]] == 0) <= k)
            {
                head++;
                if (!count[nums[head]])
                    distinct++;
                count[nums[head]]++;
            }
            // Update the answer
            ans += (head - tail + 1);

            // Proceed
            if (tail <= head)
            {
                count[nums[tail]]--;
                if (!count[nums[tail]])
                    distinct--;
                tail++;
            }
            else
            {
                tail++;
                head = tail - 1;
            }
        }
        return ans;
    }

public:
    int subarraysWithKDistinct(vector<int> &nums, int k)
    {
        return atMostKDistinct(nums, k) - atMostKDistinct(nums, k - 1);
    }
};