#include <bits/stdc++.h>
using namespace std;

int main()
{
    string str;
    cin >> str;

    // Reverse the string
    string reversed_str = str;
    reverse(reversed_str.begin(), reversed_str.end());

    // Remove leading zeros by converting to integer and back to string
    int num = stoi(reversed_str); // this removes leading zeros
    string reversed_no_zeros = to_string(num);

    // Print the reversed number without leading zeros
    cout << reversed_no_zeros << endl;

    // Check if original number is a palindrome
    if (str == reversed_str)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }

    return 0;
}
