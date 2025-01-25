#include <bits/stdc++.h>
using namespace std;

int main()
{
    int N;
    cin >> N;
    vector<long int> arr;
    while (N--)
    {
        long int X;
        cin >> X;
        arr.push_back(X);
    }
    int even = 0, odd = 0, positive = 0, negative = 0;
    for (long int x : arr)
    {
        if (x > 0)
            positive++;
        else if (x < 0)
            negative++;
        if (x % 2)
            odd++;
        else
            even++;
    }
    cout << "Even: " << even << endl;
    cout << "Odd: " << odd << endl;
    cout << "Positive: " << positive << endl;
    cout << "Negative: " << negative << endl;

    return 0;
}