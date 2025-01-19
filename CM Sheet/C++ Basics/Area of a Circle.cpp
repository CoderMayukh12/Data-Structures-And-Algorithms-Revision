#include <bits/stdc++.h>
#include <cmath> // For M_PI
using namespace std;

int main()
{
    long double pi = 3.141592653; // Use standard pi constant
    long double r;
    cin >> r;
    long double area = pi * r * r; // Calculate area of the circle

    cout << fixed << setprecision(9); // Set fixed precision for 9 decimal places
    cout << area << endl;

    return 0;
}