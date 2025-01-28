#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int N, M;
    cin >> N >> M;

    vector<int> A(N), B(M);

    // Reading arrays A and B
    for (int i = 0; i < N; i++)
    {
        cin >> A[i];
    }

    for (int i = 0; i < M; i++)
    {
        cin >> B[i];
    }

    int i = 0, j = 0;

    // Using two-pointer technique to check if B is a subsequence of A
    while (i < N && j < M)
    {
        if (A[i] == B[j])
        {
            j++; // Move to the next element in B
        }
        i++; // Always move to the next element in A
    }

    if (j == M)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }

    return 0;
}
