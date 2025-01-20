#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int maxAdjacentDistance(vector<int> &nums)
    {
        vector<int> ans = nums;
        if (nums.size())
            ans.push_back(nums[0]);
        int diff = INT_MIN;
        for (int i = 0; i < ans.size() - 1; i++)
            diff = max(diff, abs(ans[i] - ans[i + 1]));
        return diff;
    }
};
int main()
{
    return 0;
}