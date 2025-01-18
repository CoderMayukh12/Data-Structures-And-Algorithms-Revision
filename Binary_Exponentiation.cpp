#include <bits/stdc++.h>
using namespace std;
int power(int a, int b, int MOD) {
    int response = 1;
    a = a % MOD; // Ensure a is reduced modulo MOD initially

    while (b > 0) {
        if (b & 1) { // If the current bit of b is 1
            response = (1LL * response * a) % MOD;
        }
        a = (1LL * a * a) % MOD; // Square a and take modulo MOD
        b = b >> 1; // Shift b to the right (divide by 2)
    }
    
    return response; // Return the result
}

int main(){
	return 0;
}
