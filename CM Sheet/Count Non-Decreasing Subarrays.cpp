#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        int N;
        cin >> N;
        vector<int> A(N);
        for (int i = 0; i < N; ++i)
        {
            cin >> A[i];
        }
        int total = 1;
        int current = 1;
        for (int i = 1; i < N; ++i)
        {
            if (A[i] >= A[i - 1])
            {
                current++;
            }
            else
            {
                current = 1;
            }
            total += current;
        }
        cout << total << endl;
    }
    return 0;
}