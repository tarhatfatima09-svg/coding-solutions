# Valid Anagram

![Difficulty](https://img.shields.io/badge/Difficulty-Easy-green)

## Problem

Given two strings `s` and `t`, return `true` if `t` is an anagram of `s`, and `false` otherwise.

 

 **Example 1:** 

 **Input:**  s = "anagram", t = "nagaram"

 **Output:**  true

 **Example 2:** 

 **Input:**  s = "rat", t = "car"

 **Output:**  false

 

 **Constraints:** 

- 1 <= s.length, t.length <= 5 * 104
- s and t consist of lowercase English letters.

 

 **Follow up:**  What if the inputs contain Unicode characters? How would you adapt your solution to such a case?

## Solution

**Language:** C++  
**Runtime:** 2 ms (beats 49.15%)  
**Memory:** 9.7 MB (beats 74.46%)  
**Submitted:** 2026-10-16T14:46:52.195Z  

```cpp
class Solution {
public:
    bool isAnagram(string s, string t) {
        if (s.length() != t.length()) {
            return false;
        }
        unordered_map<char, int> freq;
        for (char ch : s) {
            freq[ch]++;
        }
for(char ch :t){
    freq [ch]--;
    if(freq[ch]<0){
        return false;
    }
}
return true;
    }
};
```

---

[View on LeetCode](https://leetcode.com/problems/valid-anagram/)