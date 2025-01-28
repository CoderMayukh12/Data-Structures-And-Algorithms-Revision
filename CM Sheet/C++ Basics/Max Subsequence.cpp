#include <iostream>
#include <string>
using namespace std;

int main()
{
    int N; // Size of the string
    cin >> N;
    string S; // The string S
    cin >> S;

    // To store the length of the maximum subsequence
    int maxLength = 1;    // The first character is always counted
    char lastChar = S[0]; // The last added character in the subsequence

    // Iterate through the string starting from the second character
    for (int i = 1; i < N; ++i)
    {
        if (S[i] != lastChar)
        {                    // If current character is not the same as last added
            maxLength++;     // We can add it to the subsequence
            lastChar = S[i]; // Update the last added character
        }
    }

    // Output the result
    cout << maxLength << endl;

    return 0;
}
