#include <iostream>
using namespace std;

int main()
{
    // Read the input number N
    int N;
    cin >> N;

    // Loop through each line (from 1 to N)
    for (int i = 0; i < N; ++i)
    {
        // Calculate the starting number for this line
        int start = 1 + i * 4; // Starting number is 1 + (4 * i)

        // Print the three numbers and "PUM"
        cout << start << " " << start + 1 << " " << start + 2 << " PUM" << endl;
    }

    return 0;
}
