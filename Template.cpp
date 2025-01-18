#include <bits/stdc++.h>
using namespace std;
int power(int a, int b, int MOD = INT_MAX) { // Default MOD is INT_MAX (no modulus)
    int response = 1;
    a = a % MOD; 

    while (b > 0) {
        if (b & 1) { 
            response = (1LL * response * a) % MOD;
        }
        a = (1LL * a * a) % MOD; // Square a and take modulo MOD
        b = b >> 1; // Shift b to the right (divide by 2)
    }
    
    return response; // Return the result
}

// Modulo addition
int Modulo_Addition(int a, int b, int MOD) {
    return ((a % MOD) + (b % MOD)) % MOD;
}

// Modulo subtraction
int Modulo_Subtraction(int a, int b, int MOD) {
    return ((a % MOD) - (b % MOD) + MOD) % MOD; // Ensure non-negative result
}

// Modulo multiplication
int Modulo_Multiplication(int a, int b, int MOD) {
    return (1LL * (a % MOD) * (b % MOD)) % MOD;
}

// Modulo division (requires modular inverse of b modulo MOD)
int Modulo_Division(int a, int b, int MOD) {
    // Using Fermat's Little Theorem: b^(MOD-2) is the modular inverse of b modulo MOD
    return Modulo_Multiplication(a, power(b, MOD - 2, MOD), MOD);
}

int main() {
    int t;
    cin >> t; // Number of test cases

    while (t--) {
        int a, b, MOD;
        cin >> a >> b >> MOD; // Input two numbers and the modulus

        // Example operations
        cout << "Power (a^b mod MOD): " << power(a, b, MOD) << endl;
        cout << "Addition: " << Modulo_Addition(a, b, MOD) << endl;
        cout << "Subtraction: " << Modulo_Subtraction(a, b, MOD) << endl;
        cout << "Multiplication: " << Modulo_Multiplication(a, b, MOD) << endl;
        if (__gcd(b, MOD) == 1) { // Check if b has a modular inverse
            cout << "Division: " << Modulo_Division(a, b, MOD) << endl;
        } else {
            cout << "Division not possible as b and MOD are not coprime." << endl;
        }
    }

    return 0;
}

