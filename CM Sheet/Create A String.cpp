#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int main()
{
    string n, q; // Corrected from 'String' to 'string'
    cin >> n >> q;

    cout << n.length() << " " << q.length() << endl;

    string str = n + " " + q; // Corrected type
    cout << str << endl;

    return 0;
}