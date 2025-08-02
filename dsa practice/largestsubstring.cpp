#include <bits/stdc++.h>
using namespace std;

int longestSubstring(string s) {
    vector<int> lastIndex(256, -1);  // To store the last index of every character
    int n = s.size();
    int l = 0, maxlen = 0;

    for (int r = 0; r < n; r++) {
        if (lastIndex[s[r]] >= l) {
            l = lastIndex[s[r]] + 1;
        }
        lastIndex[s[r]] = r;
        maxlen = max(maxlen, r - l + 1);
    }

    return maxlen;
}

int main() {
    string s;
    cout << "Enter a string: ";
    cin >> s;
    cout << "Length of longest substring without repeating characters: " 
         << longestSubstring(s) << endl;
    return 0;
}
