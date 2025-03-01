#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    int maxSubArray(vector<int> &nums)
    {
        // Kadane's Algorithm to Find The Maximum Sum Subarray
        // Where Positive and Negative elements are there.

        // Extends the existing Subarray
        // Or
        // Starts a New Subarray

        // Extends the existing subarray only if
        //   the subarray sum + current>current

        // Starts New if And Only
        // The subarray sum+current < current

        int subarraysum, maxsum;
        subarraysum = maxsum = nums[0];
        for (int current = 1; current < nums.size(); current++)
        {
            subarraysum = max(nums[current], subarraysum + nums[current]);
            maxsum = max(maxsum, subarraysum);
        }
        // Something Fishky
        return maxsum;
    }
};