#include <iostream>
using namespace std;

int main()
{
    int K, S;
    cin >> K >> S;

    int count = 0;

    // Loop over X from 0 to K
    for (int X = 0; X <= K; X++)
    {
        int T = S - X; // We need Y + Z = T

        // Check the valid pairs of Y and Z where 0 <= Y, Z <= K
        for (int Y = 0; Y <= K; Y++)
        {
            int Z = T - Y; // Z is determined by Y
            if (Z >= 0 && Z <= K)
            {
                count++; // Valid pair (X, Y, Z)
            }
        }
    }

    cout << count << endl; // Output the count of valid (X, Y, Z) triplets

    return 0;
}
