#include <bits/stdc++.h>
using namespace std;

bool isPrime(int n)
{
    if (n <= 1)
        return false;
    if (n == 2)
        return true; // 2 is the only even prime number
    if (n % 2 == 0)
        return false; // exclude even numbers greater than 2

    for (int i = 3; i * i <= n; i += 2)
    { // only check up to sqrt(n)
        if (n % i == 0)
            return false;
    }
    return true;
}

int main()
{
    int N;
    cin >> N;

    bool first = true; // To ensure proper space formatting
    for (int i = 2; i <= N; ++i)
    {
        if (isPrime(i))
        {
            if (!first)
                cout << " ";
            cout << i;
            first = false;
        }
    }

    cout << endl; // End with a new line
    return 0;
}
