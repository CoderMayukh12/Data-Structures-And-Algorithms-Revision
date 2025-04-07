#include <bits/stdc++.h>
using namespace std;

bool check(int nextEle, int cntZeroInWindow, int k)
{
    if (nextEle == 0)
    {
        if (cntZeroInWindow + 1 <= k)
            return true;
        else
            return false;
    }
    else
        return true;
}

void solve()
{

    int n, k;
    cin >> n >> k;

    vector<int> arr(n);
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    int tail = 0, head = -1;
    int maxLen = 0, cntZeroInWindow = 0;

    while (tail < n)
    {
        // currTail
        while (head + 1 < n && check(arr[head + 1], cntZeroInWindow, k))
        {
            head++;
            if (arr[head] == 0)
                cntZeroInWindow++;
        }

        // best head for the current tail, save your answer
        maxLen = max(maxLen, head - tail + 1);

        // Eliminate contribution of tail
        if (tail <= head)
        {
            if (arr[tail] == 0)
                cntZeroInWindow--;
            tail++;
        }
        else
        {
            tail++;
            head = tail - 1;
        }
    }

    cout << maxLen << endl;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
        solve();
    return 0;
}