#include <iostream>
#include <algorithm>
#include <cstring>
using namespace std;

void reverseString(string& s, int i, int j) {
    int st = i;
    int e = j;

    while (st < e) {
        swap(s[st], s[e]);
        st++;
        e--;
    }
}

string reverseEachWord(string input) {
    string ans = "";
    int n = input.size();
    
    for (int i = 0; i < n; i++) {
        int st = i;
        
        // Find the end index of the current word
        while (i < n && input[i] != ' ') {
            i++;
        }
        
        int end = i - 1;
        
        // Reverse the current word and append it to the result string
        reverseString(input, st, end);
        
        for (int j = st; j <= end; j++) {
            ans.push_back(input[j]);
        }
        
        if (i < n) {
            ans.push_back(' '); // Add space between words
        }
    }
    
    return ans;
}

int main() {
    string str;
    getline(cin, str);
    
    // Reverse each word in the input string
    string ans = reverseEachWord(str);
    
    // Print the resulting string
    cout << ans << endl;
    
    return 0;
}
