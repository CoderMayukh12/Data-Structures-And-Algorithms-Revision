#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int &x : arr)
        cin >> x;

    priority_queue<int> pq(arr.begin(), arr.end());
    int k;
    cin >> k;
    while (pq.size() != k)
        pq.pop();
    cout << pq.top() << endl;

    return 0;
}

// This above Solution only works for Unique Elements in the Array
// For Duplicates we need to use Setlike below:

// set<int,greater<int>>s(arr.begin(),arr.end());

// while(s.size()>k)s.erase(s.begin());
// cout<<*s.begin()<<endl;