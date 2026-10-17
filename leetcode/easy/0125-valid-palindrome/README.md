# Valid Palindrome

![Difficulty](https://img.shields.io/badge/Difficulty-Easy-green)

## Problem

A phrase is a  **palindrome**  if, after converting all uppercase letters into lowercase letters and removing all non-alphanumeric characters, it reads the same forward and backward. Alphanumeric characters include letters and numbers.

Given a string `s`, return `true` *if it is a  **palindrome**, or* `false` *otherwise*.

 

 **Example 1:** 

```
Input: s = "A man, a plan, a canal: Panama"
Output: true
Explanation: "amanaplanacanalpanama" is a palindrome.

```

 **Example 2:** 

```
Input: s = "race a car"
Output: false
Explanation: "raceacar" is not a palindrome.

```

 **Example 3:** 

```
Input: s = " "
Output: true
Explanation: s is an empty string "" after removing non-alphanumeric characters.
Since an empty string reads the same forward and backward, it is a palindrome.

```

 

 **Constraints:** 

- 1 <= s.length <= 2 * 105
- s consists only of printable ASCII characters.

## Solution

**Language:** C++  
**Runtime:** 1 ms (beats 43.07%)  
**Memory:** 10.7 MB (beats 7.50%)  
**Submitted:** 2026-10-17T13:59:59.628Z  

```cpp
class Solution {
public:
    bool isPalindrome(string s) {
        string clean ="";
        for(char ch :s ){
            if(isalnum(ch)){
                clean +=tolower(ch);
            }
        }
        string rev=clean;
        reverse(rev.begin(),rev.end());

    
    return clean ==rev;
    }
};
```

---

[View on LeetCode](https://leetcode.com/problems/valid-palindrome/)