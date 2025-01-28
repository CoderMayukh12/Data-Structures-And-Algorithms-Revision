#include <iostream>
#include <string>
using namespace std;

int main()
{
    string S;
    cin >> S;

    string target = "hello";
    int targetIndex = 0;
    int targetLength = target.size();

    // Iterate over the input string S
    for (char c : S)
    {
        if (c == target[targetIndex])
        {
            targetIndex++; // Move to the next character in "hello"
        }
        if (targetIndex == targetLength)
        {
            cout << "YES" << endl;
            return 0; // We found the subsequence "hello", so we can exit
        }
    }

    // If we finished the loop without finding "hello"
    cout << "NO" << endl;
    return 0;
}
