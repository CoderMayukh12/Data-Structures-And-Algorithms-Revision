#include <iostream>
using namespace std;

int main()
{
    // Precompute factorials for all N from 0 to 20
    long long fact[21]; // Array to store factorial values from 0 to 20
    fact[0] = 1;
    for (int i = 1; i <= 20; i++)
    {
        fact[i] = fact[i - 1] * i;
    }

    int T; // Number of test cases
    cin >> T;

    while (T--)
    {
        int N;
        cin >> N;
        cout << fact[N] << endl; // Output the precomputed factorial for N
    }

    return 0;
}
