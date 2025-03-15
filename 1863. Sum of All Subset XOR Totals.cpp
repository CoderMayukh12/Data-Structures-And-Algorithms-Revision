#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    int subsetXORSum_subsetGenerationMethod(vector<int> &nums)
    {
        int n = nums.size();
        int sum = 0;
        for (int i = 0; i < (1 << n); i = i + 1)
        {
            int currentSum = 0;
            for (int j = 0; j < n; j++)
            {
                if (i & (1 << j))
                    currentSum ^= nums[j];
            }

            sum += currentSum;
        }
        return sum;
    }
    int subsetXORSum(vector<int> &nums)
    {
        int result = 0;
        for (int num : nums)
        {
            result = result | num;
        }
        result = result << (nums.size() - 1);
        return result;
    }
};