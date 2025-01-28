
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
    int target;
    cin >> target;
    for (int i = 0; i < n; i++)
    {
        if (target == arr[i])
        {
            cout << i << endl;
            return 0;
        }
    }
    cout << -1 << endl;

    return 0;
}