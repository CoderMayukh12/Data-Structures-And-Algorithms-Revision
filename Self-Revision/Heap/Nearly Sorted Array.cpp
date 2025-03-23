//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution
{
public:
    void nearlySorted(vector<int> &arr, int k)
    {
        // code
        priority_queue<int, vector<int>, greater<int>> pq; // ✅ Correct comparator
        int j = 0, i = 0;

        while (i != arr.size())
        {
            pq.push(arr[i]);

            if (pq.size() > k)
            {
                arr[j] = pq.top();
                pq.pop();
                j++;
            }
            i++;
        }

        while (!pq.empty())
        {
            arr[j] = pq.top();
            pq.pop();
            j++;
        }
    }
};

//{ Driver Code Starts.

int main()
{
    string ts;
    getline(cin, ts);
    int t = stoi(ts);
    while (t--)
    {
        vector<int> arr;
        string input;
        getline(cin, input);
        stringstream ss(input);
        int number;
        while (ss >> number)
        {
            arr.push_back(number);
        }
        string ks;
        getline(cin, ks);
        int k = stoi(ks);
        Solution obj;
        obj.nearlySorted(arr, k);
        for (int i = 0; i < arr.size(); i++)
        {
            cout << arr[i] << " ";
        }
        cout << endl;
        cout << "~" << endl;
    }
    return 0;
}
// } Driver Code Ends