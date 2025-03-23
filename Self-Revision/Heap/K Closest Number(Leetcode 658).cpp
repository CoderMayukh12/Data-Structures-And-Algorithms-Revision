#include <bits/stdc++.h>
using namespace std;

// Better Approach using Min-Heap
class Solution
{
public:
    vector<int> findClosestElements(vector<int> &arr, int k, int x)
    {
        using pii = pair<int, int>;
        priority_queue<pii, vector<pii>, greater<pii>> pq;

        for (auto y : arr)
        {
            pq.push({abs(x - y), y});
        }

        vector<int> ans;
        while (k--)
        {
            ans.push_back(pq.top().second);
            pq.pop();
        }

        sort(ans.begin(), ans.end());
        return ans;
    }
};
// Time Complexity:O(nlogn)

// Best Approach
class Solution
{
public:
    vector<int> findClosestElements(vector<int> &arr, int k, int x)
    {
        int left = 0, right = arr.size() - 1;
        while (left + k <= right)
        {

            if (abs(arr[left] - x) > abs(x - arr[right]))
                left += 1;
            else
                right -= 1;
        }

        return vector<int>(arr.begin() + left, arr.begin() + left + k);
    }
};
// Time Complexity:O(n+logn)
