#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, q;
    cin >> n >> q;

    vector<long long> arr(n), prefix(n);

    // Read the array
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    // Compute prefix sums
    prefix[0] = arr[0];
    for (int i = 1; i < n; i++)
    {
        prefix[i] = prefix[i - 1] + arr[i];
    }

    // Process each query
    while (q--)
    {
        int l, r;
        cin >> l >> r;
        l--;
        r--; // Adjust for 1-based indexing

        // Calculate the sum from index l to r
        if (l == 0)
        {
            cout << prefix[r] << endl;
        }
        else
        {
            cout << prefix[r] - prefix[l - 1] << endl;
        }
    }

    return 0;
}
