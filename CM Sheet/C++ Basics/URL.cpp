#include <iostream>
#include <string>
using namespace std;

int main()
{
    // Step 1: Read the input URL string
    string url;
    getline(cin, url); // Use getline to get the entire input

    // Step 2: Find the position of '?' which marks the start of the query string
    size_t questionMarkPos = url.find('?');

    // Step 3: Extract the query string part (everything after '?')
    string queryString = url.substr(questionMarkPos + 1); // Skip the '?' itself

    // Step 4: Split the query string by '&' to get individual key-value pairs
    // Use a loop to process each key-value pair
    size_t start = 0;
    while (start < queryString.length())
    {
        // Find the position of the next '&' or end of the string
        size_t end = queryString.find('&', start);

        // If no '&' is found, it means this is the last parameter
        if (end == string::npos)
        {
            end = queryString.length();
        }

        // Extract the key-value pair from the substring
        string keyValue = queryString.substr(start, end - start);

        // Step 5: Find the position of '=' in the key-value pair
        size_t equalPos = keyValue.find('=');

        // Extract the key (parameter) and the value
        string key = keyValue.substr(0, equalPos);
        string value = keyValue.substr(equalPos + 1);

        // Step 6: Print the result in the required format: "key: value"
        cout << key << ": " << value << endl;

        // Move the start position to the next '&' or end
        start = end + 1;
    }

    return 0;
}
