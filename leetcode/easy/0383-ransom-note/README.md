# Ransom Note

![Difficulty](https://img.shields.io/badge/Difficulty-Easy-green)

## Problem

Given two strings `ransomNote` and `magazine`, return `true` *if* `ransomNote` *can be constructed by using the letters from* `magazine` *and* `false` *otherwise*.

Each letter in `magazine` can only be used once in `ransomNote`.

 

 **Example 1:** 

```
Input: ransomNote = "a", magazine = "b"
Output: false

```

 **Example 2:** 

```
Input: ransomNote = "aa", magazine = "ab"
Output: false

```

 **Example 3:** 

```
Input: ransomNote = "aa", magazine = "aab"
Output: true

```

 

 **Constraints:** 

- 1 <= ransomNote.length, magazine.length <= 105
- ransomNote and magazine consist of lowercase English letters.

## Solution

**Language:** C++  
**Runtime:** 8 ms (beats 14.60%)  
**Memory:** 12.1 MB (beats 12.16%)  
**Submitted:** 2026-10-16T15:50:38.266Z  

```cpp

class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        unordered_map<char, int> have;
        unordered_map<char, int> need;

        for (int i = 0; i < ransomNote.size(); i++) {
            need[ransomNote[i]]++;
        }

        for (int i = 0; i < magazine.size(); i++) {
            have[magazine[i]]++;
        }

        for (int i = 0; i < ransomNote.size(); i++) {
            if (need[ransomNote[i]] > have[ransomNote[i]]) {
                return false;
            }
        }

        return true;
    }
};

```

---

[View on LeetCode](https://leetcode.com/problems/ransom-note/)