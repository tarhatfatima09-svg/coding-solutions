# Longest Repeating Character Replacement

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

You are given a string `s` and an integer `k`. You can choose any character of the string and change it to any other uppercase English character. You can perform this operation at most `k` times.

Return  *the length of the longest substring containing the same letter you can get after performing the above operations*.

 

 **Example 1:** 

```
Input: s = "ABAB", k = 2
Output: 4
Explanation: Replace the two 'A's with two 'B's or vice versa.

```

 **Example 2:** 

```
Input: s = "AABABBA", k = 1
Output: 4
Explanation: Replace the one 'A' in the middle with 'B' and form "AABBBBA".
The substring "BBBB" has the longest repeating letters, which is 4.
There may exists other ways to achieve this answer too.
```

 

 **Constraints:** 

- 1 <= s.length <= 105
- s consists of only uppercase English letters.
- 0 <= k <= s.length

## Solution

**Language:** C++  
**Runtime:** 2 ms (beats 69.99%)  
**Memory:** 10.6 MB (beats 98.93%)  
**Submitted:** 2026-10-21T16:30:03.934Z  

```cpp
class Solution {
public:
    int characterReplacement(string s, int k) {
        int left=0;
        int maxFreq=0;
        int maxLen=0;

         vector<int> freq(26, 0);

        for (int right = 0; right < s.size(); right++) {
        freq[s[right] - 'A']++;

    maxFreq = max(maxFreq, freq[s[right] - 'A']);

    while ((right - left + 1) - maxFreq > k) {
        freq[s[left] - 'A']--;
        left++;
    }

    maxLen = max(maxLen, right - left + 1);
}
return maxLen;
    }
};
```

---

[View on LeetCode](https://leetcode.com/problems/longest-repeating-character-replacement/)