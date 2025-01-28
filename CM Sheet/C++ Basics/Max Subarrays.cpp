
#include <bits/stdc++.h>
using namespace std;

// Function to find the maximum of all subarrays
vector<int> max_subarrays_for_test_case(int n, const vector<int> &arr)
{
    vector<int> result;
    // Loop to generate all subarrays
    for (int i = 0; i < n; i++)
    {
        int current_max = arr[i];
        for (int j = i; j < n; j++)
        {
            current_max = max(current_max, arr[j]);
            result.push_back(current_max);
        }
    }
    return result;
}

int main()
{
    // Number of test cases
    int T;
    cin >> T;

    // Iterate over each test case
    while (T--)
    {
        // Size of the array
        int N;
        cin >> N;

        // Read the array elements
        vector<int> arr(N);
        for (int i = 0; i < N; i++)
        {
            cin >> arr[i];
        }

        // Get the maximums of all subarrays
        vector<int> result = max_subarrays_for_test_case(N, arr);

        // Print the result for the current test case
        for (int i = 0; i < result.size(); i++)
        {
            cout << result[i] << " ";
        }
        cout << endl;
    }

    return 0;
}
