#include <iostream>
#include <string>
using namespace std;

int main()
{
    string S;
    getline(cin, S); // Read the input string (including spaces)

    int wordCount = 0;
    bool inWord = false; // Flag to track if we are inside a word

    // Iterate through each character in the string
    for (char c : S)
    {
        // Check if the current character is an alphabetic character (a-z or A-Z)
        if (isalpha(c))
        {
            // If we're not already in a word, it means we've found the start of a new word
            if (!inWord)
            {
                wordCount++;   // Increment the word count
                inWord = true; // Set the flag to indicate we are in a word
            }
        }
        else
        {
            // If we encounter a non-alphabetic character, we are no longer in a word
            inWord = false;
        }
    }

    // Output the result: the total number of words
    cout << wordCount << endl;

    return 0;
}
