class Solution {
public:
    // Function to check if a substring s[low..high] is a palindrome
    bool check(const string &s, int low, int high) {
        while (low < high) {
            if (s[low] != s[high])
                return false;
            low++;
            high--;
        }
        return true;
    }

    // Function to find and return the longest palindromic substring
    string longestPalindrome(string s) {
        int n = s.length();
        int maxlen = 0, start = 0;

        // Nested loop to mark the start and end index of the substring
        for (int i = 0; i < n; i++) {
            for (int j = i; j < n; j++) {
                // Check if the substring is a palindrome and update if the length is greater
                if (check(s, i, j) && (j - i + 1) > maxlen) {
                    start = i;
                    maxlen = j - i + 1;
                }
            }
        }

        // Return the longest palindromic substring
        return s.substr(start, maxlen);
    }
};
