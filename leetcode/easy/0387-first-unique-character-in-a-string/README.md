# First Unique Character in a String

![Difficulty](https://img.shields.io/badge/Difficulty-Easy-green)

## Problem

Given a string `s`, find the  **first**  non-repeating character in it and return its index. If it  **does not**  exist, return `-1`.

 

 **Example 1:** 

 **Input:**  s = "leetcode"

 **Output:**  0

 **Explanation:** 

The character `'l'` at index 0 is the first character that does not occur at any other index.

 **Example 2:** 

 **Input:**  s = "loveleetcode"

 **Output:**  2

 **Example 3:** 

 **Input:**  s = "aabb"

 **Output:**  -1

 

 **Constraints:** 

- 1 <= s.length <= 105
- s consists of only lowercase English letters.

## Solution

**Language:** C++  
**Runtime:** 9 ms (beats 52.67%)  
**Memory:** 14.8 MB (beats 37.32%)  
**Submitted:** 2026-10-16T14:40:33.403Z  

```cpp
class Solution {
public:
    int firstUniqChar(string s) {
      unordered_map<char,int>freq;
       for (char ch : s) {
            freq[ch]++;
        }
    for(int i=0;i<s.length();i++){
        if(freq[s[i]]==1){
            return i;
        }
    }
    return -1;
    }
};
```

---

[View on LeetCode](https://leetcode.com/problems/first-unique-character-in-a-string/)