#include <iostream>
#include <string>
using namespace std;

int main()
{
    string str;
    getline(cin, str); // Take input string from the user
    char ch = '\\';    // Correctly escape the backslash

    // Find the first occurrence of '\\' in the string
    size_t found = str.find(ch);

    if (found != string::npos)
    {
        // Get the substring from the start of the string to the position of the backslash
        string s = str.substr(0, found);
        cout << s << endl;
    }

    return 0;
}
