# Minimum Window Substring

![Difficulty](https://img.shields.io/badge/Difficulty-Hard-red)

## Problem

Given two strings `s` and `t` of lengths `m` and `n` respectively, return  *the  **minimum window***   ***substring**  **of  *`s`*  such that every character in  *`t`*  (** including duplicates**) is included in the window *. If there is no such substring, return* the empty string *`""`.

The testcases will be generated such that the answer is  **unique**.

 

 **Example 1:** 

```
Input: s = "ADOBECODEBANC", t = "ABC"
Output: "BANC"
Explanation: The minimum window substring "BANC" includes 'A', 'B', and 'C' from string t.

```

 **Example 2:** 

```
Input: s = "a", t = "a"
Output: "a"
Explanation: The entire string s is the minimum window.

```

 **Example 3:** 

```
Input: s = "a", t = "aa"
Output: ""
Explanation: Both 'a's from t must be included in the window.
Since the largest window of s only has one 'a', return empty string.

```

 

 **Constraints:** 

- m == s.length
- n == t.length
- 1 <= m, n <= 105
- s and t consist of uppercase and lowercase English letters.

 

 **Follow up:**  Could you find an algorithm that runs in `O(m + n)` time?

## Solution

**Language:** C++  
**Runtime:** 0 ms (beats 100.00%)  
**Memory:** 11.1 MB (beats 99.66%)  
**Submitted:** 2026-10-24T13:52:18.030Z  

```cpp

class Solution {
public:
    string minWindow(string s, string t) {
        int m = s.length();
        int n = t.length();

        if (n > m) return "";

        vector<int> freq(128, 0);

        for (char c : t) {
            freq[c]++;
        }

        int left = 0;
        int start = 0;
        int minLen = INT_MAX;
        int count = n;

        for (int right = 0; right < m; right++) {
            if (freq[s[right]] > 0) {
                count--;
            }
            freq[s[right]]--;

            while (count == 0) {
                if (right - left + 1 < minLen) {
                    minLen = right - left + 1;
                    start = left;
                }

                freq[s[left]]++;

                if (freq[s[left]] > 0) {
                    count++;
                }

                left++;
            }
        }

        if (minLen == INT_MAX) return "";

        return s.substr(start, minLen);
    }
};

```

---

[View on LeetCode](https://leetcode.com/problems/minimum-window-substring/)