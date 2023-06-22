#include <iostream>
#include <string>
using namespace std;

class Solution {
private:
    // Function to check if two character count arrays are equal
    bool checkEqual(int c1[26], int c2[26]) {
        for (int i = 0; i < 26; i++) {
            if (c1[i] != c2[i])
                return false;
        }
        return true;
    }

public:
    // Function to check if s2 contains a permutation of s1
    bool checkInclusion(string s1, string s2) {
        // Initialize character count arrays for s1 and s2
        int count1[26] = {0};
        int count2[26] = {0};

        // Calculate the character count for s1
        for (int i = 0; i < s1.length(); i++) {
            int index = s1[i] - 'a';
            count1[index]++;
        }

        int windowSize = s1.length();
        int i = 0;

        // Calculate the initial character count for the first window in s2
        while (i < windowSize && i < s2.length()) {
            int index = s2[i] - 'a';
            count2[index]++;
            i++;
        }

        // Check if the initial window is a permutation of s1
        if (checkEqual(count1, count2))
            return true;

        // Move the window and update character counts until the end of s2 is reached
        while (i < s2.length()) {
            // Add the new character to the window and update its count
            char newChar = s2[i];
            int index = newChar - 'a';
            count2[index]++;

            // Remove the old character from the window and update its count
            char oldChar = s2[i - windowSize];
            index = oldChar - 'a';
            count2[index]--;

            i++;

            // Check if the updated window is a permutation of s1
            if (checkEqual(count1, count2))
                return true;
        }

        return false;
    }
};

int main() {
    Solution solution;
    string s1, s2;

    // Get the input strings from the user
    cout << "Enter string s1: ";
    getline(cin, s1);
    cout << "Enter string s2: ";
    getline(cin, s2);

    // Check if s2 contains a permutation of s1
    if (solution.checkInclusion(s1, s2))
        cout << "s2 contains a permutation of s1." << endl;
    else
        cout << "s2 does not contain a permutation of s1." << endl;

    return 0;
}
