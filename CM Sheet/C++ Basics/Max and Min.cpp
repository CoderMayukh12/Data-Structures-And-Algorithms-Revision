#include <bits/stdc++.h>
using namespace std;
int main()
{
    int A, B, C;
    cin >> A >> B >> C;
    cout << min(min(A, B), C) << " " << max(max(A, B), C) << endl;
    return 0;
}