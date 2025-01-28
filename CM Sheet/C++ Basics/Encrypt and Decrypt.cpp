#include <iostream>
#include <unordered_map>
#include <string>

using namespace std;

string encrypt(const string &S, const string &key, const string &original)
{
    unordered_map<char, char> mapping;
    // Create a mapping from original to key
    for (size_t i = 0; i < original.size(); ++i)
    {
        mapping[original[i]] = key[i];
    }

    string result;
    for (char c : S)
    {
        result += mapping[c]; // Encrypt using the map
    }
    return result;
}

string decrypt(const string &S, const string &key, const string &original)
{
    unordered_map<char, char> mapping;
    // Create a mapping from key to original
    for (size_t i = 0; i < original.size(); ++i)
    {
        mapping[key[i]] = original[i];
    }

    string result;
    for (char c : S)
    {
        result += mapping[c]; // Decrypt using the map
    }
    return result;
}

int main()
{
    int Q;
    string S;

    // Input reading
    cin >> Q;
    cin >> S;

    string key = "PgEfTYaWGHjDAmxQqFLRpCJBownyUKZXkbvzIdshurMilNSVOtec#@_!=.+-*/";
    string original = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789";

    if (Q == 1)
    {
        // Encrypt the string and print the result
        cout << encrypt(S, key, original) << endl;
    }
    else
    {
        // Decrypt the string and print the result
        cout << decrypt(S, key, original) << endl;
    }

    return 0;
}
