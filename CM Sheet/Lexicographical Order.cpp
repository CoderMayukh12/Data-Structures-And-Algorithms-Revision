#include <iostream>
#include <string>
using namespace std;

int main()
{
    string X, Y;
    cin >> X >> Y; // Read the two strings

    // Compare and print the lexicographically smaller string
    if (X < Y)
    {
        cout << X << endl;
    }
    else
    {
        cout << Y << endl;
    }

    return 0;
}
