
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> arr(n, 0);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    sort(arr.begin(), arr.end());
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        if (count)
            cout << " ";
        count++;
        cout << arr[i];
    }

    return 0;
}