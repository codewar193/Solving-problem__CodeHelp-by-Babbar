#include <bits/stdc++.h> 

bool checkPalindrome(string s)

{

    // Write your code here.

    string S = "";

    

    // Removing special characters and white spaces.

    for (int i = 0; i < s.length(); i++) {

        if (isupper(s[i])) {

            s[i] = tolower(s[i]); //Or, to convert lower s[i]-'A'+'a'

            S.push_back(s[i]);

        }

        else if (isalpha(s[i])) {

            S.push_back(s[i]);

        }

        else if (isdigit(s[i])) {

            S.push_back(s[i]);   

        }

        else 

            continue;

    }

 

    // checking if it is palindrome or not

    string R = S;

    int st = 0;

    int e = S.length() - 1;

    for (; st <= e; st++, e--) {

        swap(S[st], S[e]);

    }

    if (S == R)

        return true;

    else

        return false;

}
