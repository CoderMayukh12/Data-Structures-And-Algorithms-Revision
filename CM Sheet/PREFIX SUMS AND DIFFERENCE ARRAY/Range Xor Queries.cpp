#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, t;
    cin >> n >> t;
    
    vector<int> arr(n);
    cin >> arr[0];  // First element directly
    
    // Compute prefix XOR array
    for (int i = 1; i < n; i++) {
        int x;
        cin >> x;
        arr[i] = arr[i - 1] ^ x;
    }

    while (t--) {
        int a, b;
        cin >> a >> b;
        a--; b--;  // Convert to zero-based indexing

        if (a > 0) 
            cout << (arr[b] ^ arr[a - 1]) << endl;
        else 
            cout << arr[b] << endl;
    }

    return 0;
}
