#include <bits/stdc++.h>
using namespace std;

int main()
{
    char ch;
    cin >> ch;
    if (!isalpha(ch))
        cout << "IS DIGIT" << endl;
    else
    {
        if (ch == toupper(ch))
        {
            cout << "ALPHA" << endl;
            cout << "IS CAPITAL" << endl;
        }
        else
        {
            cout << "ALPHA" << endl;
            cout << "IS SMALL" << endl;
        }
    }

    return 0;
}